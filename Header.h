#pragma once
#include <iostream>
#include <vector>
#include <msclr/marshal_cppstd.h> // Include this header for marshalling

using namespace System;
using namespace System::Data;

// Function to convert System::String^ to std::string
std::string marshalString(System::String^ s) {
	return msclr::interop::marshal_as<std::string>(s);
}




// ---------------------- Start Book Section ----------------------
class Book {
private:
	std::string title;
	std::string author;
	std::string genre;
	int id;
	bool isBorrowed;
public:
	Book() {};
	Book(int i, std::string t, std::string a, std::string g) {
		id = i;
		title = t;
		author = a;
		genre = g;
		isBorrowed = false;
	}
	int getId() { return id; }
	bool getIsBorrowed() { return isBorrowed; }
	std::string getTitle() const { return title; }
	std::string getAuthor() const { return author; }
	std::string getGenre() const { return genre; }
	void setBorrowed(bool value) {
		isBorrowed = value;
	}
	void updateBookDetail(std::string t, std::string a, std::string g) {
		title = t;
		author = a;
		genre = g;
	}

};
std::vector<Book> books;
void addBook(std::string t, std::string a, std::string g) {
	int id;
	if (books.empty()) {
		id = 1;
	}
	else {
		id = books.back().getId() + 1;
	}
	Book bk = Book(id, t, a, g);
	books.push_back(bk);
}
void updateBook(int id, std::string newTitle, std::string newAuthor, std::string newGenre) {
	auto it = std::find_if(books.begin(), books.end(), [id](Book bk) {
		return bk.getId() == id;
	});

	if (it != books.end()) {
		it->updateBookDetail(newTitle, newAuthor, newGenre);
	}
}
Book getBookID(int id) {
	auto it = std::find_if(books.begin(), books.end(), [id](Book bk) {
		return bk.getId() == id;
		});

	if (it != books.end()) {
		return *it;
	}
	else {
		return Book();
	}
}
void removeBook(int id) {
	auto it = std::find_if(books.begin(), books.end(), [id](Book bk) {
		return bk.getId() == id;
	});

	if (it != books.end()) {
		books.erase(it);
	}
}
DataTable^ getBookTable() {
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("ID", Type::GetType("System.Int64"));
	table->Columns->Add("Title", Type::GetType("System.String"));
	table->Columns->Add("Author", Type::GetType("System.String"));
	table->Columns->Add("Genre", Type::GetType("System.String"));
	table->Columns->Add("Is Borrowed", Type::GetType("System.String"));

	for (unsigned int i = 0; i < books.size(); i++)
	{
		String^ borrow = books[i].getIsBorrowed() ? "Yes" : "No";
		String^ title = gcnew String(books[i].getTitle().c_str());
		String^ author = gcnew String(books[i].getAuthor().c_str());
		String^ genre = gcnew String(books[i].getGenre().c_str());

		table->Rows->Add(books[i].getId(), title, author, genre, borrow);
	}

	return table;
}

std::vector<Book> searchBooksByTitle(std::string title) {
	std::vector<Book> results;
	for (Book book : books) {
		if (book.getTitle().find(title) != std::string::npos) {
			results.push_back(book);
		}
	}
	return results;
}
DataTable^ getBookTableBySearch(std::string title) {
	std::vector<Book> results;
	for (Book book : books) {
		if (book.getTitle().find(title) != std::string::npos) {
			results.push_back(book);
		}
	}
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("ID", Type::GetType("System.Int64"));
	table->Columns->Add("Title", Type::GetType("System.String"));
	table->Columns->Add("Author", Type::GetType("System.String"));
	table->Columns->Add("Genre", Type::GetType("System.String"));
	table->Columns->Add("Is Borrowed", Type::GetType("System.String"));

	for (unsigned int i = 0; i < results.size(); i++)
	{
		String^ borrow = results[i].getIsBorrowed() ? "Yes" : "No";
		String^ title = gcnew String(results[i].getTitle().c_str());
		String^ author = gcnew String(results[i].getAuthor().c_str());
		String^ genre = gcnew String(results[i].getGenre().c_str());

		table->Rows->Add(results[i].getId(), title, author, genre, borrow);
	}

	return table;
}
DataTable^ getBookEmptyTable() {
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("ID", Type::GetType("System.Int64"));
	table->Columns->Add("Title", Type::GetType("System.String"));
	table->Columns->Add("Author", Type::GetType("System.String"));
	table->Columns->Add("Genre", Type::GetType("System.String"));
	table->Columns->Add("Is Borrowed", Type::GetType("System.String"));

	return table;
}
// ---------------------- End Book Section ----------------------
// ---------------------- Start Member Section ----------------------
class Member {
private:
	std::string name;
	int memberId;
	std::string contactInfo;
	int borrowedBooks[100] = {};
	int borrowedBooksLength = -1;
public:
	Member() {};
	int getId() { return memberId; }
	std::string getName() { return name; }
	std::string getContactInfo() { return contactInfo; }
	Member(int id, std::string n, std::string c) {
		memberId = id;
		name = n;
		contactInfo = c;
	}
	void updateMemberDetail(std::string n, std::string c) {
		name = n;
		contactInfo = c;
	}
	void borrowBook(int bookId) {
		auto it = std::find_if(books.begin(), books.end(), [bookId](Book book) { return book.getId() == bookId; });
		if (it != books.end() && !it->getIsBorrowed()) {
			it->setBorrowed(true);
			borrowedBooks[++borrowedBooksLength] = bookId;
		}
	}
	void removeBorrowBook(int bookId) {
		
	}
	std::string getBorrowedBookNames() {
		std::string borrowedBookNames = "";
		for (int i = 0; i < borrowedBooksLength; i++) {
			for (Book book : books) {
				std::cout << book.getId() << " " << borrowedBooks[i] << std::endl;
				if (book.getId() == borrowedBooks[i]) {
					borrowedBookNames = borrowedBookNames + book.getTitle() + ", ";
				}
			}
		}
		return borrowedBookNames;
	}
};
std::vector<Member> members;
void addMember(std::string n, std::string c) {
	int id;
	if (members.empty()) {
		id = 1;
	}
	else {
		id = members.back().getId() + 1;
	}
	Member mr = Member(id, n, c);
	members.push_back(mr);
}
void updateMember(int id, std::string name, std::string contact) {
	auto it = std::find_if(members.begin(), members.end(), [id](Member member) {
		return member.getId() == id;
		});

	if (it != members.end()) {
		it->updateMemberDetail(name, contact);
	}
}
Member getMemberID(int id) {
	auto it = std::find_if(members.begin(), members.end(), [id](Member member) {
		return member.getId() == id;
		});

	if (it != members.end()) {
		return *it;
	}
	else {
		return Member();
	}
}
void removeMember(int id) {
	auto it = std::find_if(members.begin(), members.end(), [id](Member member) {
		return member.getId() == id;
	});

	if (it != members.end()) {
		members.erase(it);
	}
}
std::vector<Member> searchMembersByName(std::string name) {
	std::vector<Member> results;
	for (Member member : members) {
		if (member.getName().find(name) != std::string::npos) {
			results.push_back(member);
		}
	}
	return results;
}
DataTable^ getMemberTable() {
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("ID", Type::GetType("System.Int64"));
	table->Columns->Add("Name", Type::GetType("System.String"));
	table->Columns->Add("Contact Info", Type::GetType("System.String"));
	table->Columns->Add("Borrowed Books", Type::GetType("System.String"));

	for (int i = 0; i < members.size(); i++)
	{
		String^ name = gcnew String(members[i].getName().c_str());
		String^ contactinfo = gcnew String(members[i].getContactInfo().c_str());
		String^ books = gcnew String(members[i].getBorrowedBookNames().c_str());
		

		table->Rows->Add(members[i].getId(), name, contactinfo, books);
	}

	return table;
}
DataTable^ getMemberTableBySearch(std::string title) {
	std::vector<Member> results;
	for (Member member: members) {
		if (member.getName().find(title) != std::string::npos) {
			results.push_back(member);
		}
	}
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("ID", Type::GetType("System.Int64"));
	table->Columns->Add("Name", Type::GetType("System.String"));
	table->Columns->Add("Contact Info", Type::GetType("System.String"));
	table->Columns->Add("Borrowed Books", Type::GetType("System.String"));

	for (int i = 0; i < results.size(); i++)
	{
		String^ name = gcnew String(results[i].getName().c_str());
		String^ contactinfo = gcnew String(results[i].getContactInfo().c_str());
		String^ books = gcnew String(results[i].getBorrowedBookNames().c_str());


		table->Rows->Add(results[i].getId(), name, contactinfo, books);
	}

	return table;
}
DataTable^ getMemberEmptyTable() {
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("ID", Type::GetType("System.Int64"));
	table->Columns->Add("Name", Type::GetType("System.String"));
	table->Columns->Add("Contact Info", Type::GetType("System.String"));
	table->Columns->Add("Borrowed Books", Type::GetType("System.String"));

	return table;
}
// ---------------------- End Member Section ----------------------



public ref class ComboBoxItem {
	public:
		int ID;
		System::String^ Title;

		ComboBoxItem(int id, System::String^ title) {
			ID = id;
			Title = title;
		}

		// Override ToString to display the title in the ComboBox
		virtual System::String^ ToString() override {
			return Title;
		}
};

int ConvertTextBoxToInt(Windows::Forms::TextBox^ textBox) {
	String^ text = textBox->Text;
	int number;

	if (Int32::TryParse(text, number)) {
		return number;
	}else {
		return 0;
	}
}


