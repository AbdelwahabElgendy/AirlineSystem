#pragma once
#include "Form3.h"
#include <cctype>
namespace team2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using namespace System::IO; // to read and write from files
	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ComboBox^  domainUpDown4;
	private: System::Windows::Forms::ComboBox^  domainUpDown5;
	private: System::Windows::Forms::ComboBox^  domainUpDown6;
	private: System::Windows::Forms::ComboBox^  domainUpDown3;
	private: System::Windows::Forms::ComboBox^  domainUpDown2;
	private: System::Windows::Forms::ComboBox^  domainUpDown1;
	private: System::Windows::Forms::Label^  lbl8;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  lbl7;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  lbl9;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txt6;
	private: System::Windows::Forms::Label^  lbl6;
	private: System::Windows::Forms::Label^  lbl4;
	private: System::Windows::Forms::TextBox^  txt4;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::TextBox^  txt3;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::Label^  lbl3;
	private: System::Windows::Forms::TextBox^  txt5;
	private: System::Windows::Forms::Label^  lbl5;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbl10;
	private: System::Windows::Forms::ErrorProvider^  ER;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


	private: System::ComponentModel::IContainer^  components;

	protected: 
































































	protected: 







































































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->domainUpDown4 = (gcnew System::Windows::Forms::ComboBox());
			this->domainUpDown5 = (gcnew System::Windows::Forms::ComboBox());
			this->domainUpDown6 = (gcnew System::Windows::Forms::ComboBox());
			this->domainUpDown3 = (gcnew System::Windows::Forms::ComboBox());
			this->domainUpDown2 = (gcnew System::Windows::Forms::ComboBox());
			this->domainUpDown1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl8 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl7 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->lbl9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->lbl6 = (gcnew System::Windows::Forms::Label());
			this->lbl4 = (gcnew System::Windows::Forms::Label());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->lbl3 = (gcnew System::Windows::Forms::Label());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->lbl5 = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl10 = (gcnew System::Windows::Forms::Label());
			this->ER = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ER))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"Cairo, Egypt", L"Paris, France", L"London, UK",
					L"Moscow, Russia", L"St. Petersburg, Russia ", L"Rome, Italy", L"Abu Dhabi, UAE", L"Dubai, UAE", L"Amesterdam, Netherlands",
					L"Ankara, Turkey", L"Istanbul, Turkey", L"Madrid, Spain", L"Barcelona, spain", L"Athens, Greece", L"Beijing, China", L"Berlin, Germany",
					L"Bern, Switzerland", L"Cardiff, Wales", L"Casablanca, Morocco", L"Chicago, USA"
			});
			this->comboBox3->Location = System::Drawing::Point(626, 127);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(203, 27);
			this->comboBox3->TabIndex = 46;
			this->comboBox3->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->domainUpDown4);
			this->groupBox3->Controls->Add(this->domainUpDown5);
			this->groupBox3->Controls->Add(this->domainUpDown6);
			this->groupBox3->Controls->Add(this->domainUpDown3);
			this->groupBox3->Controls->Add(this->domainUpDown2);
			this->groupBox3->Controls->Add(this->domainUpDown1);
			this->groupBox3->Controls->Add(this->lbl8);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->lbl7);
			this->groupBox3->Controls->Add(this->groupBox5);
			this->groupBox3->Controls->Add(this->lbl9);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(305, 20);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(298, 437);
			this->groupBox3->TabIndex = 45;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Tickets Data";
			// 
			// domainUpDown4
			// 
			this->domainUpDown4->FormattingEnabled = true;
			this->domainUpDown4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"2018", L"2019", L"2020", L"2021", L"2022",
					L"2023"
			});
			this->domainUpDown4->Location = System::Drawing::Point(181, 107);
			this->domainUpDown4->Name = L"domainUpDown4";
			this->domainUpDown4->Size = System::Drawing::Size(88, 27);
			this->domainUpDown4->TabIndex = 23;
			this->domainUpDown4->Visible = false;
			// 
			// domainUpDown5
			// 
			this->domainUpDown5->FormattingEnabled = true;
			this->domainUpDown5->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Jan", L"Feb", L"Mar", L"Apr", L"May", L"Jun",
					L"Jul", L"Aug", L"Sep", L"Oct", L"Nov", L"Dec"
			});
			this->domainUpDown5->Location = System::Drawing::Point(98, 107);
			this->domainUpDown5->Name = L"domainUpDown5";
			this->domainUpDown5->Size = System::Drawing::Size(60, 27);
			this->domainUpDown5->TabIndex = 22;
			this->domainUpDown5->Visible = false;
			// 
			// domainUpDown6
			// 
			this->domainUpDown6->FormattingEnabled = true;
			this->domainUpDown6->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->domainUpDown6->Location = System::Drawing::Point(25, 107);
			this->domainUpDown6->Name = L"domainUpDown6";
			this->domainUpDown6->Size = System::Drawing::Size(42, 27);
			this->domainUpDown6->TabIndex = 21;
			this->domainUpDown6->Visible = false;
			// 
			// domainUpDown3
			// 
			this->domainUpDown3->FormattingEnabled = true;
			this->domainUpDown3->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"2018", L"2019", L"2020", L"2021", L"2022",
					L"2023"
			});
			this->domainUpDown3->Location = System::Drawing::Point(181, 43);
			this->domainUpDown3->Name = L"domainUpDown3";
			this->domainUpDown3->Size = System::Drawing::Size(88, 27);
			this->domainUpDown3->TabIndex = 20;
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->FormattingEnabled = true;
			this->domainUpDown2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Jan", L"Feb", L"Mar", L"Apr", L"May", L"Jun",
					L"Jul", L"Aug", L"Sep", L"Oct", L"Nov", L"Dec"
			});
			this->domainUpDown2->Location = System::Drawing::Point(98, 44);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(60, 27);
			this->domainUpDown2->TabIndex = 19;
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->FormattingEnabled = true;
			this->domainUpDown1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31"
			});
			this->domainUpDown1->Location = System::Drawing::Point(25, 44);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(42, 27);
			this->domainUpDown1->TabIndex = 18;
			// 
			// lbl8
			// 
			this->lbl8->AutoSize = true;
			this->lbl8->Location = System::Drawing::Point(21, 74);
			this->lbl8->Name = L"lbl8";
			this->lbl8->Size = System::Drawing::Size(46, 19);
			this->lbl8->TabIndex = 7;
			this->lbl8->Text = L"Date ";
			this->lbl8->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Controls->Add(this->radioButton6);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(25, 146);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(191, 101);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ticket type";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(9, 78);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(96, 23);
			this->radioButton8->TabIndex = 2;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Multi City";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton8_CheckedChanged_1);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(9, 52);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(94, 23);
			this->radioButton7->TabIndex = 1;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Road Trip";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton7_CheckedChanged_1);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(9, 25);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(89, 23);
			this->radioButton6->TabIndex = 0;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"One Way";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Egypt Air, Egypt", L"Emirates, UAE", L"Etihad Airways, UAE",
					L"Lufthansa, Germany", L"Qatar Airways, Qatar", L"Fly Dubai, UAE", L"British Airways, UK"
			});
			this->comboBox1->Location = System::Drawing::Point(25, 394);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(191, 27);
			this->comboBox1->TabIndex = 15;
			// 
			// lbl7
			// 
			this->lbl7->AutoSize = true;
			this->lbl7->Location = System::Drawing::Point(21, 22);
			this->lbl7->Name = L"lbl7";
			this->lbl7->Size = System::Drawing::Size(46, 19);
			this->lbl7->TabIndex = 3;
			this->lbl7->Text = L"Date ";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton5);
			this->groupBox5->Controls->Add(this->radioButton4);
			this->groupBox5->Controls->Add(this->radioButton3);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(25, 253);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(191, 111);
			this->groupBox5->TabIndex = 12;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Degree";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(9, 82);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(145, 23);
			this->radioButton5->TabIndex = 2;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Economic Degree";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(9, 53);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(141, 23);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Business Degree";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(9, 26);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(112, 23);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"First Degree";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// lbl9
			// 
			this->lbl9->AutoSize = true;
			this->lbl9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl9->Location = System::Drawing::Point(21, 367);
			this->lbl9->Name = L"lbl9";
			this->lbl9->Size = System::Drawing::Size(121, 19);
			this->lbl9->TabIndex = 5;
			this->lbl9->Text = L"Airlines Booking";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->txt6);
			this->groupBox1->Controls->Add(this->lbl6);
			this->groupBox1->Controls->Add(this->lbl4);
			this->groupBox1->Controls->Add(this->txt4);
			this->groupBox1->Controls->Add(this->lbl1);
			this->groupBox1->Controls->Add(this->txt1);
			this->groupBox1->Controls->Add(this->txt3);
			this->groupBox1->Controls->Add(this->lbl2);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->txt2);
			this->groupBox1->Controls->Add(this->lbl3);
			this->groupBox1->Controls->Add(this->txt5);
			this->groupBox1->Controls->Add(this->lbl5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(13, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(272, 437);
			this->groupBox1->TabIndex = 44;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Personal Data";
			// 
			// txt6
			// 
			this->txt6->Location = System::Drawing::Point(10, 301);
			this->txt6->Name = L"txt6";
			this->txt6->Size = System::Drawing::Size(204, 26);
			this->txt6->TabIndex = 17;
			// 
			// lbl6
			// 
			this->lbl6->AutoSize = true;
			this->lbl6->Location = System::Drawing::Point(9, 279);
			this->lbl6->Name = L"lbl6";
			this->lbl6->Size = System::Drawing::Size(83, 19);
			this->lbl6->TabIndex = 16;
			this->lbl6->Text = L"Nationaltiy";
			// 
			// lbl4
			// 
			this->lbl4->AutoSize = true;
			this->lbl4->Location = System::Drawing::Point(9, 175);
			this->lbl4->Name = L"lbl4";
			this->lbl4->Size = System::Drawing::Size(125, 19);
			this->lbl4->TabIndex = 15;
			this->lbl4->Text = L"Passport Number";
			// 
			// txt4
			// 
			this->txt4->Location = System::Drawing::Point(10, 195);
			this->txt4->Name = L"txt4";
			this->txt4->Size = System::Drawing::Size(204, 26);
			this->txt4->TabIndex = 14;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl1->Location = System::Drawing::Point(6, 22);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(139, 19);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"Name of Passenger";
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(10, 44);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(204, 26);
			this->txt1->TabIndex = 8;
			// 
			// txt3
			// 
			this->txt3->Location = System::Drawing::Point(10, 146);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(204, 26);
			this->txt3->TabIndex = 9;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl2->Location = System::Drawing::Point(6, 73);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(36, 19);
			this->lbl2->TabIndex = 4;
			this->lbl2->Text = L"Age";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(10, 344);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(204, 70);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Gender";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 47);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(76, 23);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(63, 23);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(10, 95);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(204, 26);
			this->txt2->TabIndex = 13;
			// 
			// lbl3
			// 
			this->lbl3->AutoSize = true;
			this->lbl3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl3->Location = System::Drawing::Point(6, 124);
			this->lbl3->Name = L"lbl3";
			this->lbl3->Size = System::Drawing::Size(27, 19);
			this->lbl3->TabIndex = 1;
			this->lbl3->Text = L"ID";
			// 
			// txt5
			// 
			this->txt5->Location = System::Drawing::Point(10, 250);
			this->txt5->Name = L"txt5";
			this->txt5->Size = System::Drawing::Size(204, 26);
			this->txt5->TabIndex = 10;
			// 
			// lbl5
			// 
			this->lbl5->AutoSize = true;
			this->lbl5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl5->Location = System::Drawing::Point(9, 228);
			this->lbl5->Name = L"lbl5";
			this->lbl5->Size = System::Drawing::Size(108, 19);
			this->lbl5->TabIndex = 2;
			this->lbl5->Text = L"Phone Number";
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(658, 370);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(153, 51);
			this->btn1->TabIndex = 43;
			this->btn1->Text = L"Book";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form2::btn1_Click_1);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"Cairo, Egypt", L"Paris, France", L"London, UK",
					L"Moscow, Russia", L"St. Petersburg, Russia ", L"Rome, Italy", L"Abu Dhabi, UAE", L"Dubai, UAE", L"Amesterdam, Netherlands",
					L"Ankara, Turkey", L"Istanbul, Turkey", L"Madrid, Spain", L"Barcelona, spain", L"Athens, Greece", L"Beijing, China", L"Berlin, Germany",
					L"Bern, Switzerland", L"Cardiff, Wales", L"Casablanca, Morocco", L"Chicago, USA"
			});
			this->comboBox2->Location = System::Drawing::Point(626, 64);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(203, 27);
			this->comboBox2->TabIndex = 42;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(622, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 19);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Second destination";
			this->label1->Visible = false;
			// 
			// lbl10
			// 
			this->lbl10->AutoSize = true;
			this->lbl10->BackColor = System::Drawing::Color::Transparent;
			this->lbl10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl10->Location = System::Drawing::Point(622, 42);
			this->lbl10->Name = L"lbl10";
			this->lbl10->Size = System::Drawing::Size(86, 19);
			this->lbl10->TabIndex = 39;
			this->lbl10->Text = L"Destination";
			// 
			// ER
			// 
			this->ER->ContainerControl = this;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(658, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 23);
			this->button1->TabIndex = 47;
			this->button1->Text = L"Enquire";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click_3);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(658, 427);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 23);
			this->button2->TabIndex = 48;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(874, 483);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl10);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Passenger data";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ER))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/////////////////////CheckText Fucntion/////////////



		//////////////////Clear Function///////////////////
		private: void	ClearControls()
		{

					 txt1->Text = "";
					 txt2->Text = "";
					 txt3->Text = "";
					 txt4->Text = "";
					 txt5->Text = "";
					 txt6->Text = "";
					 domainUpDown6->SelectedIndex = -1;
					 domainUpDown5->SelectedIndex = -1;
					 domainUpDown4->SelectedIndex = -1;
					 domainUpDown3->SelectedIndex = -1;
					 domainUpDown2->SelectedIndex = -1;
					 domainUpDown1->SelectedIndex = -1;
					 comboBox1->SelectedIndex = -1;
					 comboBox2->SelectedIndex = -1;
					 comboBox3->SelectedIndex = -1;
					 radioButton1->Checked = false;
					 radioButton2->Checked = false;
					 radioButton3->Checked = false;
					 radioButton4->Checked = false;
					 radioButton5->Checked = false;
					 radioButton6->Checked = false;
					 radioButton7->Checked = false;
					 radioButton8->Checked = false;
					

		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 }
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		}
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 
				
				 










		 
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lbl10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton7->Checked)
			 {
				 lbl8->Visible=(true);
				 domainUpDown6->Visible=(true);
			 domainUpDown4->Visible=(true);
			 domainUpDown5->Visible=(true);
			 }
			 else
			 {
				 lbl8->Visible=(false);
				 domainUpDown6->Visible=(false);
			 domainUpDown4->Visible=(false);
			 domainUpDown5->Visible=(false);
			 }
		 }
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton8 -> Checked)
			 {
				 label1->Visible=(true);
				 comboBox3->Visible=(true);
				  lbl8->Visible=(true);
				 domainUpDown6->Visible=(true);
			 domainUpDown4->Visible=(true);
			 domainUpDown5->Visible=(true);
			 
			 }
			 else {label1->Visible=(false);
				 comboBox3->Visible=(false);
			 	 lbl8->Visible=(false);
				 domainUpDown6->Visible=(false);
			 domainUpDown4->Visible=(false);
			 domainUpDown5->Visible=(false);
			}
		 }
private: System::Void txt5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		
		 }
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {

			 	 
		 }
private: System::Void domainUpDown2_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void txt1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_3(System::Object^  sender, System::EventArgs^  e) {
			 //Form4 ^o = gcnew Form4();
			 //o->ShowDialog();
			StreamReader^ sr = gcnew StreamReader("Flight.txt");
			
				String^ Tickets = File::ReadAllText("Flight.txt");
				MessageBox::Show(Tickets, "Tickets", MessageBoxButtons::OK, MessageBoxIcon::Information);
				sr->Close();
			
			 
}
private: System::Void btn1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 String ^ Date1 = "";
			 String ^ Date2 = "NUll";
			 String ^ TType;
			 String ^ TClass;
			 String ^ Dest2 = "Null";
			 String^ gender;

			 int k = 1;


			 if (txt1->Text == "")
			 {

				 MessageBox::Show("Enter your name Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 txt1->Focus();
				 k = 0;
			 }
			 else
			 {


				 if (txt2->Text == "")
				 {
					 MessageBox::Show("Enter your Age Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					 txt2->Focus();
					 k = 0;
				 }
				 else
				 {

					 if (txt3->Text == "")
					 {
						 MessageBox::Show("Enter your ID Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						 txt3->Focus();
						 k = 0;
					 }
					 else
					 {

						 if (txt4->Text == "")
						 {
							 MessageBox::Show("Enter your Passport Number Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
							 txt4->Focus();
							 k = 0;
						 }
						 else {
							 if (txt5->Text == "")
							 {
								 MessageBox::Show("Enter your Phone number Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
								 txt5->Focus();
								 k = 0;
							 }
							 else{

								 if (txt6->Text == "")
								 {
									 MessageBox::Show("Enter your Nationality Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									 txt6->Focus();
									 k = 0;
								 }

								 else{

								 if (radioButton1->Checked){
									 gender = radioButton1->Text;
									 
								 }
								 else if (radioButton2->Checked){
									 gender = radioButton2->Text;
									 
								 }
								 else {
									 MessageBox::Show("Choose Gender Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									 k = 0;
									 groupBox2->Focus();

								 }
								 if (domainUpDown1->SelectedIndex == -1)
								 {
									 MessageBox::Show("Choose Day for Date 1 Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									 k = 0;
								 }
								 else
								 {
									 Date1 = "Day : " + domainUpDown1->SelectedItem;
								 }
								 if (domainUpDown2->SelectedIndex == -1)
								 {
									 MessageBox::Show("Choose Month for Date 1 Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									 k = 0;
								 }
								 else
								 {
									 Date1 = Date1 + "Month : " + domainUpDown2->SelectedItem;
								 }
								 if (domainUpDown3->SelectedIndex == -1)
								 {
									 MessageBox::Show("Choose Year for Date 1 Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									 k = 0;
								 }
								 else
								 {
									 Date1 = Date1 + "year : " + domainUpDown3->SelectedItem;
								 }


								 if (radioButton6->Checked)
									 TType = radioButton6->Text;
								 else if (radioButton7->Checked)
									 TType = radioButton7->Text;
								 else if (radioButton8->Checked)
									 TType = radioButton8->Text;
								 else{
									 MessageBox::Show("Choose Ticket Type Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									 k = 0;
									 groupBox4->Focus();
								 }
								 if (radioButton3->Checked)
									 TClass = radioButton3->Text;
								 else if (radioButton4->Checked)
									 TClass = radioButton4->Text;
								 else if (radioButton5->Checked)
									 TClass = radioButton5->Text;
								 else
								 {
									 MessageBox::Show("Choose Ticket Class Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									 k = 0;
									 groupBox5->Focus();
								 }
								 if (comboBox1->SelectedIndex == -1)

								 {
									 MessageBox::Show("Choose Air line Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									 k = 0;
									 comboBox1->Focus();

								 }

								 if (label1->Visible == (true))
								 {
									 if (comboBox3->SelectedIndex == -1)
									 {
										 MessageBox::Show("Choose Second Destination Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
										 k = 0;
										 comboBox3->Focus();
									 }
									 else { Dest2 += comboBox3->SelectedItem; }
								 }


								 if (lbl8->Visible == (true))
								 {
									 if (domainUpDown6->SelectedIndex == -1)
									 {
										 MessageBox::Show("Choose Day for Date 2 Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
										 k = 0;
									 }
									 else
									 {
										 Date2 = "Day : " + domainUpDown6->SelectedItem;
									 }
									 if (domainUpDown5->SelectedIndex == -1)
									 {
										 MessageBox::Show("Choose Month for Date 2 Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
										 k = 0;
									 }
									 else
									 {
										 Date2 = Date2 + "Month : " + domainUpDown5->SelectedItem;
									 }
									 if (domainUpDown4->SelectedIndex == -1)
									 {
										 MessageBox::Show("Choose Year for Date 2 Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
										 k = 0;
									 }
									 else
									 {
										 Date2 = Date2 + "year :" + domainUpDown4->SelectedItem;

									 }
								 }
								 }
							 }

						 }

						 if (comboBox2->SelectedIndex == -1)

						 {
							 MessageBox::Show("Choose Destination Please", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
							 k = 0;
							 comboBox2->Focus();



						 }
					 }
				 
				 }

			 }
				




			 if (k)
			 {


				 StreamWriter^ randa = gcnew StreamWriter("Flight.txt", true);
				 randa->NewLine;
				 randa->WriteLine("Name of passenger : " + txt1->Text);
				 randa->WriteLine("Age : " + txt2->Text);
				 randa->WriteLine("ID : " + txt3->Text);
				 randa->WriteLine("Passport Number : " + txt4->Text);
				 randa->WriteLine("Phone Number : " + txt5->Text);
				 randa->WriteLine("Nationality : " + txt6->Text);
				 randa->WriteLine("Gender : " + gender);
				 randa->WriteLine("Date : " + Date1);
				 randa->WriteLine("Ticket Type : " + TType);
				 randa->WriteLine("Ticket Class : " + TClass);
				 randa->WriteLine("Airline : " + comboBox1->SelectedItem);
				 randa->WriteLine("Destination : " + comboBox2->SelectedItem);
				 randa->WriteLine("2nd Destination : " + Dest2);
				 randa->WriteLine("2nd Date : " + Date2);
				 randa->WriteLine("========================================");
				 randa->Close();

				 this->Hide();
				 Form3 ^ob1 = gcnew Form3(this);
				 ob1->ShowDialog();
				 ClearControls();
			 }
}
private: System::Void radioButton7_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton7->Checked)
			 {
				 lbl8->Visible = (true);
				 domainUpDown6->Visible = (true);
				 domainUpDown4->Visible = (true);
				 domainUpDown5->Visible = (true);
			 }
			 else
			 {
				 lbl8->Visible = (false);
				 domainUpDown6->Visible = (false);
				 domainUpDown4->Visible = (false);
				 domainUpDown5->Visible = (false);
			 }
}
private: System::Void radioButton8_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton8->Checked)
			 {
				 label1->Visible = (true);
				 comboBox3->Visible = (true);
				 lbl8->Visible = (true);
				 domainUpDown6->Visible = (true);
				 domainUpDown4->Visible = (true);
				 domainUpDown5->Visible = (true);

			 }
			 else {
				 label1->Visible = (false);
				 comboBox3->Visible = (false);
				 lbl8->Visible = (false);
				 domainUpDown6->Visible = (false);
				 domainUpDown4->Visible = (false);
				 domainUpDown5->Visible = (false);
			 }
}

	


 private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  Application::Exit();
 }
};
}
