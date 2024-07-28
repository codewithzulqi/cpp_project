#pragma once
#include "Header.h"



namespace StartProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			panelBookAdd->Hide();
			panelBookList->Hide();
			panelBookUpdate->Hide();
			panelBookSearch->Hide();
			panelBookRemove->Hide();

			panelMemberAdd->Hide();
			panelMemberList->Hide();
			panelMemberUpdate->Hide();
			panelMemberSearch->Hide();
			panelMemberRemove->Hide();

			panelBorrowAdd->Hide();

			//loginpanel->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ loginpanel;
	protected:










	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label2;












	private: System::Windows::Forms::Panel^ panelBookList;

	private: System::Windows::Forms::Button^ button13;







	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Panel^ panelBookAdd;
	private: System::Windows::Forms::Panel^ panelBookUpdate;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Panel^ panelBookSearch;

private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Panel^ panelBookRemove;

private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Panel^ panelMemberAdd;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;


private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Panel^ panelMemberList;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Panel^ panelMemberUpdate;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;


private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Panel^ panelMemberSearch;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Panel^ panelMemberRemove;

private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Panel^ panelBorrowAdd;

private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Button^ button35;




















	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->loginpanel = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panelBookList = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panelBookAdd = (gcnew System::Windows::Forms::Panel());
			this->panelBookUpdate = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panelBookSearch = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panelBookRemove = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->panelMemberAdd = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panelMemberList = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panelMemberUpdate = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panelMemberSearch = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panelMemberRemove = (gcnew System::Windows::Forms::Panel());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->panelBorrowAdd = (gcnew System::Windows::Forms::Panel());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->loginpanel->SuspendLayout();
			this->panelBookList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelBookAdd->SuspendLayout();
			this->panelBookUpdate->SuspendLayout();
			this->panelBookSearch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panelBookRemove->SuspendLayout();
			this->panelMemberAdd->SuspendLayout();
			this->panelMemberList->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panelMemberUpdate->SuspendLayout();
			this->panelMemberSearch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->panelMemberRemove->SuspendLayout();
			this->panelBorrowAdd->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginpanel
			// 
			this->loginpanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginpanel.BackgroundImage")));
			this->loginpanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginpanel->Controls->Add(this->button3);
			this->loginpanel->Controls->Add(this->button4);
			this->loginpanel->Controls->Add(this->panel4);
			this->loginpanel->Controls->Add(this->textBox3);
			this->loginpanel->Controls->Add(this->panel5);
			this->loginpanel->Controls->Add(this->textBox4);
			this->loginpanel->Controls->Add(this->label4);
			this->loginpanel->Controls->Add(this->label5);
			this->loginpanel->Controls->Add(this->label6);
			this->loginpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->loginpanel->Location = System::Drawing::Point(0, 0);
			this->loginpanel->Name = L"loginpanel";
			this->loginpanel->Size = System::Drawing::Size(998, 651);
			this->loginpanel->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button3->Location = System::Drawing::Point(201, 476);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 44);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(65, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 44);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Sign In";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(65, 412);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(292, 2);
			this->panel4->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(65, 391);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(292, 27);
			this->textBox3->TabIndex = 14;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(65, 300);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(292, 2);
			this->panel5->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(65, 279);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(292, 27);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(61, 358);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(61, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 23);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(117, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 57);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Sign In";
			// 
			// panelBookList
			// 
			this->panelBookList->Controls->Add(this->dataGridView1);
			this->panelBookList->Controls->Add(this->button13);
			this->panelBookList->Controls->Add(this->label13);
			this->panelBookList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelBookList->Location = System::Drawing::Point(0, 0);
			this->panelBookList->Name = L"panelBookList";
			this->panelBookList->Size = System::Drawing::Size(998, 651);
			this->panelBookList->TabIndex = 10;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(956, 507);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button13->Location = System::Drawing::Point(881, 582);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(98, 34);
			this->button13->TabIndex = 8;
			this->button13->Text = L"Exit";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(426, 27);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 35);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Book List";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button12->Location = System::Drawing::Point(882, 586);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(98, 34);
			this->button12->TabIndex = 17;
			this->button12->Text = L"Exit";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button11->Location = System::Drawing::Point(774, 586);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(98, 34);
			this->button11->TabIndex = 16;
			this->button11->Text = L"Save";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox5->Location = System::Drawing::Point(24, 242);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(293, 34);
			this->textBox5->TabIndex = 15;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged_1);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label9->Location = System::Drawing::Point(19, 209);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 25);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Genre";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox2->Location = System::Drawing::Point(24, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(293, 34);
			this->textBox2->TabIndex = 13;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label8->Location = System::Drawing::Point(19, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Author";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox1->Location = System::Drawing::Point(24, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(293, 34);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_2);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label7->Location = System::Drawing::Point(19, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 25);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Title";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(427, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 35);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Add Book";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(50, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 35);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Book Management";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(56, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 44);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(181, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 44);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(306, 153);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 44);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(431, 153);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(119, 44);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Search";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(431, 287);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(119, 44);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(306, 287);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(119, 44);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Update";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(181, 287);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(119, 44);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Remove";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(56, 287);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(119, 44);
			this->button10->TabIndex = 21;
			this->button10->Text = L"Add";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(50, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(263, 35);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Member Management";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(556, 153);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(119, 44);
			this->button14->TabIndex = 26;
			this->button14->Text = L"List";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Red;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(929, 12);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(57, 44);
			this->button15->TabIndex = 27;
			this->button15->Text = L"X";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// panelBookAdd
			// 
			this->panelBookAdd->Controls->Add(this->button12);
			this->panelBookAdd->Controls->Add(this->button11);
			this->panelBookAdd->Controls->Add(this->textBox5);
			this->panelBookAdd->Controls->Add(this->label9);
			this->panelBookAdd->Controls->Add(this->textBox2);
			this->panelBookAdd->Controls->Add(this->label8);
			this->panelBookAdd->Controls->Add(this->textBox1);
			this->panelBookAdd->Controls->Add(this->label7);
			this->panelBookAdd->Controls->Add(this->label3);
			this->panelBookAdd->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelBookAdd->Location = System::Drawing::Point(0, 0);
			this->panelBookAdd->Name = L"panelBookAdd";
			this->panelBookAdd->Size = System::Drawing::Size(998, 651);
			this->panelBookAdd->TabIndex = 28;
			// 
			// panelBookUpdate
			// 
			this->panelBookUpdate->Controls->Add(this->comboBox1);
			this->panelBookUpdate->Controls->Add(this->label15);
			this->panelBookUpdate->Controls->Add(this->button16);
			this->panelBookUpdate->Controls->Add(this->button17);
			this->panelBookUpdate->Controls->Add(this->textBox6);
			this->panelBookUpdate->Controls->Add(this->label10);
			this->panelBookUpdate->Controls->Add(this->textBox7);
			this->panelBookUpdate->Controls->Add(this->label11);
			this->panelBookUpdate->Controls->Add(this->textBox8);
			this->panelBookUpdate->Controls->Add(this->label12);
			this->panelBookUpdate->Controls->Add(this->label14);
			this->panelBookUpdate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelBookUpdate->Location = System::Drawing::Point(0, 0);
			this->panelBookUpdate->Name = L"panelBookUpdate";
			this->panelBookUpdate->Size = System::Drawing::Size(998, 651);
			this->panelBookUpdate->TabIndex = 29;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(26, 87);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(293, 43);
			this->comboBox1->TabIndex = 20;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label15->Location = System::Drawing::Point(21, 59);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 25);
			this->label15->TabIndex = 18;
			this->label15->Text = L"ID";
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button16->Location = System::Drawing::Point(882, 586);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(98, 34);
			this->button16->TabIndex = 17;
			this->button16->Text = L"Exit";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button17->Location = System::Drawing::Point(774, 586);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(98, 34);
			this->button17->TabIndex = 16;
			this->button17->Text = L"Update";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox6->Location = System::Drawing::Point(26, 317);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(293, 34);
			this->textBox6->TabIndex = 15;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label10->Location = System::Drawing::Point(21, 284);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 25);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Genre";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox7->Location = System::Drawing::Point(26, 243);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(293, 34);
			this->textBox7->TabIndex = 13;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label11->Location = System::Drawing::Point(21, 210);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 25);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Author";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox8->Location = System::Drawing::Point(26, 171);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(293, 34);
			this->textBox8->TabIndex = 11;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label12->Location = System::Drawing::Point(21, 138);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 25);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Title";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(427, 31);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(159, 35);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Update Book";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// panelBookSearch
			// 
			this->panelBookSearch->Controls->Add(this->button19);
			this->panelBookSearch->Controls->Add(this->textBox9);
			this->panelBookSearch->Controls->Add(this->dataGridView2);
			this->panelBookSearch->Controls->Add(this->button18);
			this->panelBookSearch->Controls->Add(this->label16);
			this->panelBookSearch->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelBookSearch->Location = System::Drawing::Point(0, 0);
			this->panelBookSearch->Name = L"panelBookSearch";
			this->panelBookSearch->Size = System::Drawing::Size(998, 651);
			this->panelBookSearch->TabIndex = 30;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(322, 70);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(107, 34);
			this->button19->TabIndex = 18;
			this->button19->Text = L"Search";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox9->Location = System::Drawing::Point(23, 70);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(293, 34);
			this->textBox9->TabIndex = 12;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(23, 119);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(956, 457);
			this->dataGridView2->TabIndex = 9;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button18->Location = System::Drawing::Point(881, 582);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(98, 34);
			this->button18->TabIndex = 8;
			this->button18->Text = L"Exit";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(426, 27);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(115, 35);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Book List";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// panelBookRemove
			// 
			this->panelBookRemove->Controls->Add(this->button20);
			this->panelBookRemove->Controls->Add(this->button21);
			this->panelBookRemove->Controls->Add(this->textBox12);
			this->panelBookRemove->Controls->Add(this->label19);
			this->panelBookRemove->Controls->Add(this->label20);
			this->panelBookRemove->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelBookRemove->Location = System::Drawing::Point(0, 0);
			this->panelBookRemove->Name = L"panelBookRemove";
			this->panelBookRemove->Size = System::Drawing::Size(998, 651);
			this->panelBookRemove->TabIndex = 31;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button20->Location = System::Drawing::Point(882, 586);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(98, 34);
			this->button20->TabIndex = 17;
			this->button20->Text = L"Exit";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button21->Location = System::Drawing::Point(346, 96);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(98, 34);
			this->button21->TabIndex = 16;
			this->button21->Text = L"Delete";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox12->Location = System::Drawing::Point(24, 96);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(293, 34);
			this->textBox12->TabIndex = 11;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label19->Location = System::Drawing::Point(19, 63);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 25);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Book ID";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(427, 31);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(167, 35);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Remove Book";
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(556, 287);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(119, 44);
			this->button22->TabIndex = 32;
			this->button22->Text = L"List";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// panelMemberAdd
			// 
			this->panelMemberAdd->Controls->Add(this->button23);
			this->panelMemberAdd->Controls->Add(this->button24);
			this->panelMemberAdd->Controls->Add(this->textBox11);
			this->panelMemberAdd->Controls->Add(this->label18);
			this->panelMemberAdd->Controls->Add(this->textBox13);
			this->panelMemberAdd->Controls->Add(this->label21);
			this->panelMemberAdd->Controls->Add(this->label22);
			this->panelMemberAdd->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMemberAdd->Location = System::Drawing::Point(0, 0);
			this->panelMemberAdd->Name = L"panelMemberAdd";
			this->panelMemberAdd->Size = System::Drawing::Size(998, 651);
			this->panelMemberAdd->TabIndex = 33;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button23->Location = System::Drawing::Point(882, 586);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(98, 34);
			this->button23->TabIndex = 17;
			this->button23->Text = L"Exit";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button24->Location = System::Drawing::Point(774, 586);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(98, 34);
			this->button24->TabIndex = 16;
			this->button24->Text = L"Save";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox11->Location = System::Drawing::Point(24, 168);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(293, 34);
			this->textBox11->TabIndex = 13;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label18->Location = System::Drawing::Point(19, 135);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(115, 25);
			this->label18->TabIndex = 12;
			this->label18->Text = L"Contact Info";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox13->Location = System::Drawing::Point(24, 96);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(293, 34);
			this->textBox13->TabIndex = 11;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label21->Location = System::Drawing::Point(19, 63);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(62, 25);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Name";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(427, 31);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(162, 35);
			this->label22->TabIndex = 9;
			this->label22->Text = L"Add Member";
			// 
			// panelMemberList
			// 
			this->panelMemberList->Controls->Add(this->dataGridView3);
			this->panelMemberList->Controls->Add(this->button25);
			this->panelMemberList->Controls->Add(this->label17);
			this->panelMemberList->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMemberList->Location = System::Drawing::Point(0, 0);
			this->panelMemberList->Name = L"panelMemberList";
			this->panelMemberList->Size = System::Drawing::Size(998, 651);
			this->panelMemberList->TabIndex = 34;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(23, 69);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(956, 507);
			this->dataGridView3->TabIndex = 9;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button25->Location = System::Drawing::Point(881, 582);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(98, 34);
			this->button25->TabIndex = 8;
			this->button25->Text = L"Exit";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(426, 27);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(153, 35);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Member List";
			// 
			// panelMemberUpdate
			// 
			this->panelMemberUpdate->Controls->Add(this->comboBox2);
			this->panelMemberUpdate->Controls->Add(this->label23);
			this->panelMemberUpdate->Controls->Add(this->button26);
			this->panelMemberUpdate->Controls->Add(this->button27);
			this->panelMemberUpdate->Controls->Add(this->textBox14);
			this->panelMemberUpdate->Controls->Add(this->label25);
			this->panelMemberUpdate->Controls->Add(this->textBox15);
			this->panelMemberUpdate->Controls->Add(this->label26);
			this->panelMemberUpdate->Controls->Add(this->label27);
			this->panelMemberUpdate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMemberUpdate->Location = System::Drawing::Point(0, 0);
			this->panelMemberUpdate->Name = L"panelMemberUpdate";
			this->panelMemberUpdate->Size = System::Drawing::Size(998, 651);
			this->panelMemberUpdate->TabIndex = 35;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(26, 87);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(293, 43);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label23->Location = System::Drawing::Point(21, 59);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(30, 25);
			this->label23->TabIndex = 18;
			this->label23->Text = L"ID";
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button26->Location = System::Drawing::Point(882, 586);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(98, 34);
			this->button26->TabIndex = 17;
			this->button26->Text = L"Exit";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button27->Location = System::Drawing::Point(774, 586);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(98, 34);
			this->button27->TabIndex = 16;
			this->button27->Text = L"Update";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox14->Location = System::Drawing::Point(26, 243);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(293, 34);
			this->textBox14->TabIndex = 13;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label25->Location = System::Drawing::Point(21, 210);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(115, 25);
			this->label25->TabIndex = 12;
			this->label25->Text = L"Contact Info";
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox15->Location = System::Drawing::Point(26, 171);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(293, 34);
			this->textBox15->TabIndex = 11;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label26->Location = System::Drawing::Point(21, 138);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 25);
			this->label26->TabIndex = 10;
			this->label26->Text = L"Name";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(427, 31);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(197, 35);
			this->label27->TabIndex = 9;
			this->label27->Text = L"Update Member";
			// 
			// panelMemberSearch
			// 
			this->panelMemberSearch->Controls->Add(this->button28);
			this->panelMemberSearch->Controls->Add(this->textBox10);
			this->panelMemberSearch->Controls->Add(this->dataGridView4);
			this->panelMemberSearch->Controls->Add(this->button29);
			this->panelMemberSearch->Controls->Add(this->label24);
			this->panelMemberSearch->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMemberSearch->Location = System::Drawing::Point(0, 0);
			this->panelMemberSearch->Name = L"panelMemberSearch";
			this->panelMemberSearch->Size = System::Drawing::Size(998, 651);
			this->panelMemberSearch->TabIndex = 36;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(322, 70);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(107, 34);
			this->button28->TabIndex = 18;
			this->button28->Text = L"Search";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox10->Location = System::Drawing::Point(23, 70);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(293, 34);
			this->textBox10->TabIndex = 12;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(23, 119);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(956, 457);
			this->dataGridView4->TabIndex = 9;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button29->Location = System::Drawing::Point(881, 582);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(98, 34);
			this->button29->TabIndex = 8;
			this->button29->Text = L"Exit";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(426, 27);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(153, 35);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Member List";
			// 
			// panelMemberRemove
			// 
			this->panelMemberRemove->Controls->Add(this->button30);
			this->panelMemberRemove->Controls->Add(this->button31);
			this->panelMemberRemove->Controls->Add(this->textBox16);
			this->panelMemberRemove->Controls->Add(this->label28);
			this->panelMemberRemove->Controls->Add(this->label29);
			this->panelMemberRemove->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelMemberRemove->Location = System::Drawing::Point(0, 0);
			this->panelMemberRemove->Name = L"panelMemberRemove";
			this->panelMemberRemove->Size = System::Drawing::Size(998, 651);
			this->panelMemberRemove->TabIndex = 37;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button30->Location = System::Drawing::Point(882, 586);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(98, 34);
			this->button30->TabIndex = 17;
			this->button30->Text = L"Exit";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button31->Location = System::Drawing::Point(346, 96);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(98, 34);
			this->button31->TabIndex = 16;
			this->button31->Text = L"Delete";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox16->Location = System::Drawing::Point(24, 96);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(293, 34);
			this->textBox16->TabIndex = 11;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label28->Location = System::Drawing::Point(19, 63);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(106, 25);
			this->label28->TabIndex = 10;
			this->label28->Text = L"Member ID";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(427, 31);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(205, 35);
			this->label29->TabIndex = 9;
			this->label29->Text = L"Remove Member";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(50, 369);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(158, 35);
			this->label30->TabIndex = 38;
			this->label30->Text = L"Borrow Book";
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(56, 414);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(119, 44);
			this->button32->TabIndex = 39;
			this->button32->Text = L"Add";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(181, 413);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(119, 44);
			this->button33->TabIndex = 40;
			this->button33->Text = L"Remove";
			this->button33->UseVisualStyleBackColor = false;
			// 
			// panelBorrowAdd
			// 
			this->panelBorrowAdd->Controls->Add(this->button35);
			this->panelBorrowAdd->Controls->Add(this->comboBox4);
			this->panelBorrowAdd->Controls->Add(this->label33);
			this->panelBorrowAdd->Controls->Add(this->comboBox3);
			this->panelBorrowAdd->Controls->Add(this->button34);
			this->panelBorrowAdd->Controls->Add(this->label31);
			this->panelBorrowAdd->Controls->Add(this->label32);
			this->panelBorrowAdd->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelBorrowAdd->Location = System::Drawing::Point(0, 0);
			this->panelBorrowAdd->Name = L"panelBorrowAdd";
			this->panelBorrowAdd->Size = System::Drawing::Size(998, 651);
			this->panelBorrowAdd->TabIndex = 41;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button35->Location = System::Drawing::Point(392, 195);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(107, 43);
			this->button35->TabIndex = 21;
			this->button35->Text = L"Borrow";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(24, 195);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(330, 43);
			this->comboBox4->TabIndex = 20;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label33->Location = System::Drawing::Point(19, 164);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(54, 25);
			this->label33->TabIndex = 19;
			this->label33->Text = L"Book";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(24, 95);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(330, 43);
			this->comboBox3->TabIndex = 18;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->button34->Location = System::Drawing::Point(882, 586);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(98, 34);
			this->button34->TabIndex = 17;
			this->button34->Text = L"Exit";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->label31->Location = System::Drawing::Point(19, 63);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(83, 25);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Member";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(427, 31);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(158, 35);
			this->label32->TabIndex = 9;
			this->label32->Text = L"Borrow Book";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(998, 651);
			this->Controls->Add(this->panelBorrowAdd);
			this->Controls->Add(this->panelMemberRemove);
			this->Controls->Add(this->panelMemberSearch);
			this->Controls->Add(this->panelMemberUpdate);
			this->Controls->Add(this->panelMemberList);
			this->Controls->Add(this->panelMemberAdd);
			this->Controls->Add(this->panelBookRemove);
			this->Controls->Add(this->panelBookSearch);
			this->Controls->Add(this->panelBookUpdate);
			this->Controls->Add(this->panelBookAdd);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->panelBookList);
			this->Controls->Add(this->loginpanel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->loginpanel->ResumeLayout(false);
			this->loginpanel->PerformLayout();
			this->panelBookList->ResumeLayout(false);
			this->panelBookList->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelBookAdd->ResumeLayout(false);
			this->panelBookAdd->PerformLayout();
			this->panelBookUpdate->ResumeLayout(false);
			this->panelBookUpdate->PerformLayout();
			this->panelBookSearch->ResumeLayout(false);
			this->panelBookSearch->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panelBookRemove->ResumeLayout(false);
			this->panelBookRemove->PerformLayout();
			this->panelMemberAdd->ResumeLayout(false);
			this->panelMemberAdd->PerformLayout();
			this->panelMemberList->ResumeLayout(false);
			this->panelMemberList->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panelMemberUpdate->ResumeLayout(false);
			this->panelMemberUpdate->PerformLayout();
			this->panelMemberSearch->ResumeLayout(false);
			this->panelMemberSearch->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->panelMemberRemove->ResumeLayout(false);
			this->panelMemberRemove->PerformLayout();
			this->panelBorrowAdd->ResumeLayout(false);
			this->panelBorrowAdd->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text == "admin") {
		if (textBox3->Text == "12345") {
			loginpanel->Hide();
			MessageBox::Show("Logged In Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panelBookAdd->Show();
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void addbook_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox5->Text != "") {
		std::string title = marshalString(textBox1->Text);
		std::string author = marshalString(textBox2->Text);
		std::string genre = marshalString(textBox5->Text);

		//addBook(title, author, genre);
		textBox1->Text = "";
		textBox2->Text = "";
		textBox5->Text = "";
		MessageBox::Show("Book Added Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookAdd->Hide();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookList->Hide();
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookList->Show();
	DataTable^ table = getBookTable();
	dataGridView1->DataSource = table;
}
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox5->Text != "") {
		std::string title = marshalString(textBox1->Text);
		std::string author = marshalString(textBox2->Text);
		std::string genre = marshalString(textBox5->Text);

		addBook(title, author, genre);

		MessageBox::Show("Book Added Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

		textBox1->Text = "";
		textBox2->Text = "";
		textBox5->Text = "";
	}
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panelBookAdd->Hide();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void panelBookAdd_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookUpdate->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookUpdate->Show();
	comboBox1->Items->Clear();
	for (int i = 0; i < books.size(); i++) {
		int id = books[i].getId(); // Assuming getId() returns the ID of the book
		std::string title = books[i].getTitle();
		System::String^ sysTitle = gcnew System::String(title.c_str());

		comboBox1->Items->Add(gcnew ComboBoxItem(id, sysTitle));
	}

}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox8->Text = "";
	textBox7->Text = "";
	textBox6->Text = "";
	ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(comboBox1->SelectedItem);
	if (selectedItem != nullptr) {
		int selectedID = selectedItem->ID;
		Book book = getBookID(selectedID);
		System::String^ title = gcnew System::String(book.getTitle().c_str());
		System::String^ author = gcnew System::String(book.getAuthor().c_str());
		System::String^ genre = gcnew System::String(book.getGenre().c_str());

		textBox8->Text = title;
		textBox7->Text = author;
		textBox6->Text = genre;
	}
	else {
		textBox8->Text = "";
		textBox7->Text = "";
		textBox6->Text = "";
	}
	
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	 ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(comboBox1->SelectedItem);
	 if (selectedItem != nullptr) {
		 int selectedID = selectedItem->ID;
		 if (textBox8->Text != "" && textBox7->Text != "" && textBox6->Text != "") {
			 std::string title = marshalString(textBox8->Text);
			 std::string author = marshalString(textBox7->Text);
			 std::string genre = marshalString(textBox6->Text);

			 updateBook(selectedID, title, author, genre);

			 MessageBox::Show("Book Updated Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			 textBox8->Text = "";
			 textBox7->Text = "";
			 textBox6->Text = "";
			 comboBox1->SelectedIndex = -1;
		 }
	 }
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookSearch->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookSearch->Show();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9->Text != "") {
		std::string keyword = marshalString(textBox9->Text);
		DataTable^ table = getBookTableBySearch(keyword);
		dataGridView2->DataSource = table;
	}
	else {
		dataGridView2->DataSource = getBookEmptyTable();
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox12->Text != "") {
		int i = ConvertTextBoxToInt(textBox12);
		removeBook(i);
		MessageBox::Show("Book Deleted Successfully", "Deleted", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		textBox12->Text = "";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookRemove->Show();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBookRemove->Hide();
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberAdd->Hide();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberAdd->Show();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox13->Text != "" && textBox11->Text != "") {
		std::string name = marshalString(textBox13->Text);
		std::string contact = marshalString(textBox11->Text);

		addMember(name, contact);

		MessageBox::Show("Member Added Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

		textBox13->Text = "";
		textBox11->Text = "";
	}
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberList->Hide();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberList->Show();
	DataTable^ table = getMemberTable();
	dataGridView3->DataSource = table;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberUpdate->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberUpdate->Show();
	comboBox2->Items->Clear();
	for (int i = 0; i < members.size(); i++) {
		int id = members[i].getId();
		std::string title = members[i].getName();
		System::String^ sysTitle = gcnew System::String(title.c_str());

		comboBox2->Items->Add(gcnew ComboBoxItem(id, sysTitle));
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox15->Text = "";
	textBox14->Text = "";
	ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(comboBox2->SelectedItem);
	if (selectedItem != nullptr) {
		int selectedID = selectedItem->ID;
		Member member = getMemberID(selectedID);
		System::String^ name = gcnew System::String(member.getName().c_str());
		System::String^ contact = gcnew System::String(member.getContactInfo().c_str());

		textBox15->Text = name;
		textBox14->Text = contact;
	}
	else {
		textBox15->Text = "";
		textBox14->Text = "";
	}
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	ComboBoxItem^ selectedItem = dynamic_cast<ComboBoxItem^>(comboBox2->SelectedItem);
	if (selectedItem != nullptr) {
		int selectedID = selectedItem->ID;
		if (textBox15->Text != "" && textBox14->Text != "") {
			std::string name = marshalString(textBox15->Text);
			std::string contact = marshalString(textBox14->Text);

			updateMember(selectedID, name, contact);

			MessageBox::Show("Member Updated Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			textBox15->Text = "";
			textBox14->Text = "";
			comboBox2->SelectedIndex = -1;
		}
	}
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberSearch->Hide();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberSearch->Show();
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text != "") {
		std::string keyword = marshalString(textBox10->Text);
		DataTable^ table = getMemberTableBySearch(keyword);
		dataGridView4->DataSource = table;
	}
	else {
		dataGridView4->DataSource = getMemberEmptyTable();
	}
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberRemove->Hide();
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox16->Text != "") {
		int i = ConvertTextBoxToInt(textBox16);
		removeMember(i);
		MessageBox::Show("Member Deleted Successfully", "Deleted", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		textBox16->Text = "";
	}
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBorrowAdd->Hide();
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	panelBorrowAdd->Show();
	comboBox3->Items->Clear();
	comboBox4->Items->Clear();

	for (int i = 0; i < members.size(); i++) {
		int id = members[i].getId();
		std::string title = members[i].getName();
		System::String^ sysTitle = gcnew System::String(title.c_str());

		comboBox3->Items->Add(gcnew ComboBoxItem(id, sysTitle));
	}

	for (int i = 0; i < books.size(); i++) {
		if (!books[i].getIsBorrowed()) {
			int id = books[i].getId();
			std::string title = books[i].getTitle();
			System::String^ sysTitle = gcnew System::String(title.c_str());

			comboBox4->Items->Add(gcnew ComboBoxItem(id, sysTitle));
		}
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panelMemberRemove->Show();
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	ComboBoxItem^ select_member = dynamic_cast<ComboBoxItem^>(comboBox3->SelectedItem);
	ComboBoxItem^ select_book= dynamic_cast<ComboBoxItem^>(comboBox4->SelectedItem);
	if (select_member != nullptr && select_book != nullptr) {
		int memberId = select_member->ID;
		int bookId = select_book->ID;

		Member member = getMemberID(memberId);
		member.borrowBook(bookId);
		MessageBox::Show("Member Borrowed Book", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	
		comboBox4->SelectedIndex = -1;
		comboBox4->Items->Clear();
		for (int i = 0; i < books.size(); i++) {
			if (!books[i].getIsBorrowed()) {
				int id = books[i].getId();
				std::string title = books[i].getTitle();
				System::String^ sysTitle = gcnew System::String(title.c_str());

				comboBox4->Items->Add(gcnew ComboBoxItem(id, sysTitle));
			}
		}
	}
}

};
}




