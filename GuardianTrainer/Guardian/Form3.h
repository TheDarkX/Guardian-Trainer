#include <windows.h>
#pragma once

namespace Guardian {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
		static Form3 ^instance;

		private: System::Windows::Forms::CheckBox^  checkBox1;
		public: System::Windows::Forms::RadioButton^  radioButton2;
		private:
		public: System::Windows::Forms::RadioButton^  radioButton1;
		private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  comboBox3;


	public:
		private: System::Windows::Forms::TextBox^  textBox1;
		
		
		
		

	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			instance = this;
		}
		static property Form3 ^Instance
		{
			Form3 ^get()
			{
				return instance;
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	//<-Moved to up->



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->Location = System::Drawing::Point(165, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(77, 23);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"100";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox2->Location = System::Drawing::Point(248, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(77, 23);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Location = System::Drawing::Point(15, 27);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(51, 19);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Vami";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form3::checkBox1_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(177, 27);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(70, 19);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Random";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(260, 27);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(65, 19);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->Text = L"Nearest";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Fuchsia;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 15);
			this->label1->TabIndex = 7;
			this->label1->Text = L"-----Vami-----";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Fuchsia;
			this->label2->Location = System::Drawing::Point(12, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 15);
			this->label2->TabIndex = 8;
			this->label2->Text = L"-----Kami (Battle Mage)-----";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->Location = System::Drawing::Point(15, 110);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(51, 19);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Kami";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form3::checkBox2_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox3->Location = System::Drawing::Point(165, 109);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(77, 23);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"100";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form3::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox4->Location = System::Drawing::Point(248, 109);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(77, 23);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form3::textBox4_TextChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::Gray;
			this->checkBox3->Location = System::Drawing::Point(15, 139);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(79, 19);
			this->checkBox3->TabIndex = 12;
			this->checkBox3->Text = L"Kami Loot";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form3::checkBox3_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox5->Location = System::Drawing::Point(248, 138);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(77, 23);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"1";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form3::textBox5_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(179, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 15);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Item(s) : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Fuchsia;
			this->label4->Location = System::Drawing::Point(12, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 15);
			this->label4->TabIndex = 15;
			this->label4->Text = L"-----Kami (Demon Slayer)-----";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Location = System::Drawing::Point(15, 192);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(144, 19);
			this->checkBox4->TabIndex = 16;
			this->checkBox4->Text = L"DSAttack if attack <=";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form3::checkBox4_CheckedChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->numericUpDown1->Location = System::Drawing::Point(165, 192);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(77, 23);
			this->numericUpDown1->TabIndex = 17;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {8, 0, 0, 0});
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox1->Location = System::Drawing::Point(248, 191);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(77, 23);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::comboBox1_SelectedIndexChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Location = System::Drawing::Point(15, 222);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(152, 19);
			this->checkBox5->TabIndex = 19;
			this->checkBox5->Text = L"Chaos Lock if attack >=";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form3::checkBox5_CheckedChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->numericUpDown2->Location = System::Drawing::Point(165, 221);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(77, 23);
			this->numericUpDown2->TabIndex = 20;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {8, 0, 0, 0});
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox2->Location = System::Drawing::Point(248, 220);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(77, 23);
			this->comboBox2->TabIndex = 21;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::comboBox2_SelectedIndexChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox6->Location = System::Drawing::Point(15, 252);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(103, 19);
			this->checkBox6->TabIndex = 22;
			this->checkBox6->Text = L"Skill if Fury >=";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form3::checkBox6_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox6->Location = System::Drawing::Point(165, 250);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(77, 23);
			this->textBox6->TabIndex = 23;
			this->textBox6->Text = L"60";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox3->Location = System::Drawing::Point(248, 250);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(77, 23);
			this->comboBox3->TabIndex = 24;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::comboBox3_SelectedIndexChanged);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(383, 302);
			this->ControlBox = false;
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form3";
			this->Text = L"Training";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
};
}
