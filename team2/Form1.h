#pragma once
#include "Form2.h"

namespace team2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::Button^  btn;
	private: System::Windows::Forms::TextBox^  txtbx1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtbx2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btn = (gcnew System::Windows::Forms::Button());
			this->txtbx1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtbx2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn
			// 
			this->btn->BackColor = System::Drawing::Color::Transparent;
			this->btn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn->Location = System::Drawing::Point(378, 7);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(67, 22);
			this->btn->TabIndex = 3;
			this->btn->Text = L"Sign in";
			this->btn->UseVisualStyleBackColor = false;
			this->btn->Click += gcnew System::EventHandler(this, &Form1::btn_Click);
			// 
			// txtbx1
			// 
			this->txtbx1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->txtbx1->Location = System::Drawing::Point(84, 8);
			this->txtbx1->Name = L"txtbx1";
			this->txtbx1->Size = System::Drawing::Size(100, 20);
			this->txtbx1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(5, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 15);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(197, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password";
			// 
			// txtbx2
			// 
			this->txtbx2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->txtbx2->Location = System::Drawing::Point(272, 8);
			this->txtbx2->Name = L"txtbx2";
			this->txtbx2->PasswordChar = '*';
			this->txtbx2->Size = System::Drawing::Size(100, 20);
			this->txtbx2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(42, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Welcome to Sign In page";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(28, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Enter Your Username and Password";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(928, 448);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtbx2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtbx1);
			this->Controls->Add(this->btn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (txtbx1->Text->ToLower() == "admin" && txtbx2->Text == "12345")
				 {

					 this->Hide();
					 Form2 ^obj = gcnew Form2();
					 obj->ShowDialog();
				 }
				 else 
				 MessageBox::Show("Access Denied", "Unauthorised Entry", MessageBoxButtons::OK, MessageBoxIcon::Stop);
			 }
private: System::Void lbl1_Click(System::Object^  sender, System::EventArgs^  e) {
}

};
}

