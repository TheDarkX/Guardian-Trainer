#include <windows.h>
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Form5.h"
#include "Form6.h"
#include <string>
#include <WinUser.h>
#pragma once

namespace Guardian {

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
	private:
		Form2^ wForm2;
		Form3^ wForm3;
		Form4^ wForm4;
		Form5^ wForm5;
		Form6^ wForm6;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::CheckBox^  checkBox15;

	private: System::Windows::Forms::CheckBox^  checkBox19;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;

	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;



	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  suggestionsBugsReportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  donateToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^  checkBox23;
	private: System::Windows::Forms::ToolStripMenuItem^  showEmbedMapleToolStripMenuItem;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::ToolStripMenuItem^  donateMYRToolStripMenuItem;

	private: System::Windows::Forms::CheckBox^  checkBox25;
	private: System::Windows::Forms::Label^  label20;

	private: System::Windows::Forms::CheckBox^  checkBox26;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::CheckBox^  checkBox27;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::TextBox^  textBox16;

	private: System::Windows::Forms::CheckBox^  checkBox28;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox4;







	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			wForm2 = gcnew Form2;
			wForm3 = gcnew Form3;
			wForm4 = gcnew Form4;
			wForm5 = gcnew Form5;
			wForm6 = gcnew Form6;
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

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::ToolStrip^  toolStrip1;



	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;

	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripSplitButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripSplitButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  topMostToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  StatTimer;

	private: System::Windows::Forms::Timer^  EmbedButtonStatus;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  visitFacebookPageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  visitWebsiteToolStripMenuItem;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TabControl^  tabControl1;


	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::ToolStripButton^  Form2_toolStripButton3;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox12;
private: System::Windows::Forms::CheckBox^  checkBox13;





private: System::Windows::Forms::Button^  button1;


private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::CheckBox^  checkBox14;

private: System::Windows::Forms::ComboBox^  comboBox8;
private: System::Windows::Forms::CheckBox^  checkBox16;
private: System::Windows::Forms::RadioButton^  radioButton2;
private: System::Windows::Forms::RadioButton^  radioButton1;
private: System::Windows::Forms::CheckBox^  checkBox17;


private: System::Windows::Forms::CheckBox^  checkBox18;
private: System::Windows::Forms::ComboBox^  comboBox9;




private: System::Windows::Forms::CheckBox^  checkBox20;
private: System::Windows::Forms::Timer^  HotKeys;
private: System::Windows::Forms::CheckBox^  checkBox21;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::TextBox^  textBox10;

private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button5;

private: System::Windows::Forms::CheckBox^  checkBox22;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button10;

private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
private: System::Windows::Forms::ToolStripButton^  toolStripButton3;



















	private: System::ComponentModel::IContainer^  components;




	private: 




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripSplitButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSplitButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->topMostToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showEmbedMapleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->visitFacebookPageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visitWebsiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->suggestionsBugsReportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->donateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->donateMYRToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->Form2_toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StatTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->EmbedButtonStatus = (gcnew System::Windows::Forms::Timer(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->HotKeys = (gcnew System::Windows::Forms::Timer(this->components));
			this->label22 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(379, 57);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 600);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// toolStrip1
			// 
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(16) {this->toolStripSplitButton1, 
				this->toolStripSplitButton2, this->toolStripDropDownButton1, this->toolStripButton1, this->toolStripDropDownButton2, this->toolStripSeparator5, 
				this->toolStripButton5, this->toolStripSeparator3, this->Form2_toolStripButton3, this->toolStripSeparator2, this->toolStripButton3, 
				this->toolStripSeparator1, this->toolStripButton4, this->toolStripSeparator4, this->toolStripButton6, this->toolStripSeparator6});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->toolStrip1->Size = System::Drawing::Size(1191, 25);
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripSplitButton1
			// 
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripSplitButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->saveToolStripMenuItem, 
				this->loadToolStripMenuItem});
			this->toolStripSplitButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			this->toolStripSplitButton1->Size = System::Drawing::Size(38, 22);
			this->toolStripSplitButton1->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// loadToolStripMenuItem
			// 
			this->loadToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"loadToolStripMenuItem.Image")));
			this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
			this->loadToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->loadToolStripMenuItem->Text = L"Load";
			// 
			// toolStripSplitButton2
			// 
			this->toolStripSplitButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripSplitButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->topMostToolStripMenuItem, 
				this->showEmbedMapleToolStripMenuItem});
			this->toolStripSplitButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton2->Name = L"toolStripSplitButton2";
			this->toolStripSplitButton2->Size = System::Drawing::Size(62, 22);
			this->toolStripSplitButton2->Text = L"Settings";
			// 
			// topMostToolStripMenuItem
			// 
			this->topMostToolStripMenuItem->ForeColor = System::Drawing::Color::Red;
			this->topMostToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"topMostToolStripMenuItem.Image")));
			this->topMostToolStripMenuItem->Name = L"topMostToolStripMenuItem";
			this->topMostToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->topMostToolStripMenuItem->Text = L"TopMost : Disabled";
			this->topMostToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::topMostToolStripMenuItem_Click);
			// 
			// showEmbedMapleToolStripMenuItem
			// 
			this->showEmbedMapleToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"showEmbedMapleToolStripMenuItem.Image")));
			this->showEmbedMapleToolStripMenuItem->Name = L"showEmbedMapleToolStripMenuItem";
			this->showEmbedMapleToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->showEmbedMapleToolStripMenuItem->Text = L"Show Embed Maple";
			this->showEmbedMapleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::showEmbedMapleToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->visitFacebookPageToolStripMenuItem, 
				this->visitWebsiteToolStripMenuItem});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(53, 22);
			this->toolStripDropDownButton1->Text = L"About";
			// 
			// visitFacebookPageToolStripMenuItem
			// 
			this->visitFacebookPageToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"visitFacebookPageToolStripMenuItem.Image")));
			this->visitFacebookPageToolStripMenuItem->Name = L"visitFacebookPageToolStripMenuItem";
			this->visitFacebookPageToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->visitFacebookPageToolStripMenuItem->Text = L"Visit Facebook Page";
			this->visitFacebookPageToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::visitFacebookPageToolStripMenuItem_Click);
			// 
			// visitWebsiteToolStripMenuItem
			// 
			this->visitWebsiteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"visitWebsiteToolStripMenuItem.Image")));
			this->visitWebsiteToolStripMenuItem->Name = L"visitWebsiteToolStripMenuItem";
			this->visitWebsiteToolStripMenuItem->Size = System::Drawing::Size(179, 22);
			this->visitWebsiteToolStripMenuItem->Text = L"Visit Website";
			this->visitWebsiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::visitWebsiteToolStripMenuItem_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->BackColor = System::Drawing::Color::Transparent;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->ForeColor = System::Drawing::Color::Blue;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(100, 22);
			this->toolStripButton1->Text = L"| MSEA V1.126.1 |";
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripDropDownButton2->BackColor = System::Drawing::Color::Red;
			this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->suggestionsBugsReportToolStripMenuItem, 
				this->donateToolStripMenuItem, this->donateMYRToolStripMenuItem});
			this->toolStripDropDownButton2->ForeColor = System::Drawing::Color::White;
			this->toolStripDropDownButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButton2.Image")));
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(77, 22);
			this->toolStripDropDownButton2->Text = L"Supportive";
			// 
			// suggestionsBugsReportToolStripMenuItem
			// 
			this->suggestionsBugsReportToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"suggestionsBugsReportToolStripMenuItem.Image")));
			this->suggestionsBugsReportToolStripMenuItem->Name = L"suggestionsBugsReportToolStripMenuItem";
			this->suggestionsBugsReportToolStripMenuItem->Size = System::Drawing::Size(228, 22);
			this->suggestionsBugsReportToolStripMenuItem->Text = L"Suggestions and Bugs Report";
			this->suggestionsBugsReportToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::suggestionsBugsReportToolStripMenuItem_Click);
			// 
			// donateToolStripMenuItem
			// 
			this->donateToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"donateToolStripMenuItem.Image")));
			this->donateToolStripMenuItem->Name = L"donateToolStripMenuItem";
			this->donateToolStripMenuItem->Size = System::Drawing::Size(228, 22);
			this->donateToolStripMenuItem->Text = L"Donate (SGD)";
			this->donateToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::donateToolStripMenuItem_Click);
			// 
			// donateMYRToolStripMenuItem
			// 
			this->donateMYRToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"donateMYRToolStripMenuItem.Image")));
			this->donateMYRToolStripMenuItem->Name = L"donateMYRToolStripMenuItem";
			this->donateMYRToolStripMenuItem->Size = System::Drawing::Size(228, 22);
			this->donateMYRToolStripMenuItem->Text = L"Donate (MYR)";
			this->donateMYRToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::donateMYRToolStripMenuItem_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton5->BackColor = System::Drawing::Color::DodgerBlue;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton5->ForeColor = System::Drawing::Color::White;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(65, 22);
			this->toolStripButton5->Text = L"EXP Timer";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &Form1::toolStripButton5_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// Form2_toolStripButton3
			// 
			this->Form2_toolStripButton3->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->Form2_toolStripButton3->BackColor = System::Drawing::Color::DodgerBlue;
			this->Form2_toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Form2_toolStripButton3->ForeColor = System::Drawing::Color::White;
			this->Form2_toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Form2_toolStripButton3.Image")));
			this->Form2_toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Form2_toolStripButton3->Name = L"Form2_toolStripButton3";
			this->Form2_toolStripButton3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Form2_toolStripButton3->Size = System::Drawing::Size(62, 22);
			this->Form2_toolStripButton3->Text = L"Spammer";
			this->Form2_toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::Form2_toolStripButton3_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton3->BackColor = System::Drawing::Color::DodgerBlue;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton3->ForeColor = System::Drawing::Color::White;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(55, 22);
			this->toolStripButton3->Text = L"Training";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton3_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton4->BackColor = System::Drawing::Color::DodgerBlue;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton4->ForeColor = System::Drawing::Color::White;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(59, 22);
			this->toolStripButton4->Text = L"Schedule";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton6->BackColor = System::Drawing::Color::DodgerBlue;
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton6->ForeColor = System::Drawing::Color::White;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(171, 22);
			this->toolStripButton6->Text = L"Script Hacks (Requires Bypass)";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &Form1::toolStripButton6_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 25);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ForeColor = System::Drawing::Color::Yellow;
			this->groupBox1->Location = System::Drawing::Point(12, 57);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(361, 121);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Information";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(181, 94);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 15);
			this->label13->TabIndex = 17;
			this->label13->Text = L"World : \?";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Gray;
			this->label11->Location = System::Drawing::Point(181, 79);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(81, 15);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Gateway : SG";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(181, 64);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(48, 15);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Item : \?";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(181, 34);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 15);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Player : \?";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(181, 49);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 15);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Monster : \?";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(6, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 15);
			this->label7->TabIndex = 11;
			this->label7->Text = L"AttackCount : \? / 100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(181, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 15);
			this->label6->TabIndex = 10;
			this->label6->Text = L"MapID : \?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(6, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Mouse XY : \? / \?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(6, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Character XY : \? / \?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 15);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Experience : \? %";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(6, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Mana : \?";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(6, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Health : \?";
			// 
			// StatTimer
			// 
			this->StatTimer->Enabled = true;
			this->StatTimer->Interval = 1;
			this->StatTimer->Tick += gcnew System::EventHandler(this, &Form1::StatTimer_Tick);
			// 
			// EmbedButtonStatus
			// 
			this->EmbedButtonStatus->Enabled = true;
			this->EmbedButtonStatus->Interval = 1;
			this->EmbedButtonStatus->Tick += gcnew System::EventHandler(this, &Form1::EmbedButtonStatus_Tick);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->toolStripStatusLabel1, 
				this->toolStripStatusLabel2});
			this->statusStrip1->Location = System::Drawing::Point(0, 665);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1191, 24);
			this->statusStrip1->TabIndex = 8;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::Transparent;
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->toolStripStatusLabel1->ForeColor = System::Drawing::Color::Black;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(117, 19);
			this->toolStripStatusLabel1->Text = L"Connection Status : ";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->BackColor = System::Drawing::Color::Transparent;
			this->toolStripStatusLabel2->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top) 
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right) 
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->toolStripStatusLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->toolStripStatusLabel2->ForeColor = System::Drawing::Color::Red;
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(83, 19);
			this->toolStripStatusLabel2->Text = L"Connecting...";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(1094, 32);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(82, 19);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Embed MS";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->Location = System::Drawing::Point(12, 184);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(361, 457);
			this->tabControl1->TabIndex = 10;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Black;
			this->tabPage4->Controls->Add(this->button14);
			this->tabPage4->Controls->Add(this->richTextBox2);
			this->tabPage4->Controls->Add(this->richTextBox1);
			this->tabPage4->Controls->Add(this->button13);
			this->tabPage4->Location = System::Drawing::Point(4, 24);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(353, 429);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"About";
			// 
			// button14
			// 
			this->button14->ForeColor = System::Drawing::Color::Red;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(180, 373);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(167, 53);
			this->button14->TabIndex = 29;
			this->button14->Text = L"Donate (MYR)";
			this->button14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Black;
			this->richTextBox2->Enabled = false;
			this->richTextBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(6, 6);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(341, 281);
			this->richTextBox2->TabIndex = 28;
			this->richTextBox2->Text = L"====Change log====\n[MSEA V1.1.26.1]\n\n-->[A]<--\n#Improved GUI\n#Main trainer build-" 
				L"up\n#Added more hacks\n#Fixed bugs";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Black;
			this->richTextBox1->Enabled = false;
			this->richTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(6, 293);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(341, 74);
			this->richTextBox1->TabIndex = 27;
			this->richTextBox1->Text = L"-----About-----\n-This is a public trainer official released by \"Guardian\"";
			// 
			// button13
			// 
			this->button13->ForeColor = System::Drawing::Color::Red;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(6, 373);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(168, 53);
			this->button13->TabIndex = 26;
			this->button13->Text = L"Donate (SGD)";
			this->button13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Black;
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->checkBox4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->checkBox5);
			this->tabPage1->Controls->Add(this->comboBox7);
			this->tabPage1->Controls->Add(this->comboBox3);
			this->tabPage1->Controls->Add(this->checkBox9);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->checkBox6);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->comboBox4);
			this->tabPage1->Controls->Add(this->comboBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->checkBox8);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->checkBox3);
			this->tabPage1->Controls->Add(this->comboBox5);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->checkBox7);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(353, 429);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Standard";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox2->Location = System::Drawing::Point(149, 183);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(76, 23);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"checkBox4.Image")));
			this->checkBox4->Location = System::Drawing::Point(17, 177);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(69, 32);
			this->checkBox4->TabIndex = 6;
			this->checkBox4->Text = L"             1";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox2->Location = System::Drawing::Point(246, 183);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 23);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"1000";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox7->ForeColor = System::Drawing::Color::Blue;
			this->textBox7->Location = System::Drawing::Point(246, 56);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 23);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"1000";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"checkBox5.Image")));
			this->checkBox5->Location = System::Drawing::Point(17, 215);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(69, 32);
			this->checkBox5->TabIndex = 9;
			this->checkBox5->Text = L"             2";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox5_CheckedChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox7->Location = System::Drawing::Point(148, 56);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(76, 23);
			this->comboBox7->TabIndex = 23;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox7_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox3->Location = System::Drawing::Point(149, 221);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(76, 23);
			this->comboBox3->TabIndex = 10;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox3_SelectedIndexChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"checkBox9.Image")));
			this->checkBox9->Location = System::Drawing::Point(16, 52);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(68, 29);
			this->checkBox9->TabIndex = 22;
			this->checkBox9->Text = L"               ";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox9_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox3->Location = System::Drawing::Point(246, 221);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 23);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"2000";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Yellow;
			this->label12->Location = System::Drawing::Point(264, 3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 15);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Values:";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"checkBox6.Image")));
			this->checkBox6->Location = System::Drawing::Point(17, 253);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(69, 32);
			this->checkBox6->TabIndex = 12;
			this->checkBox6->Text = L"             3";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox6_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox6->ForeColor = System::Drawing::Color::Red;
			this->textBox6->Location = System::Drawing::Point(246, 21);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 23);
			this->textBox6->TabIndex = 20;
			this->textBox6->Text = L"5000";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox4->Location = System::Drawing::Point(149, 259);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(76, 23);
			this->comboBox4->TabIndex = 13;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox4_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox6->Location = System::Drawing::Point(148, 21);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(76, 23);
			this->comboBox6->TabIndex = 19;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox6_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox5->Location = System::Drawing::Point(246, 297);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 23);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"4000";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->checkBox8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"checkBox8.Image")));
			this->checkBox8->Location = System::Drawing::Point(16, 16);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(68, 30);
			this->checkBox8->TabIndex = 18;
			this->checkBox8->Text = L"               ";
			this->checkBox8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox8_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox4->Location = System::Drawing::Point(246, 259);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 23);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"3000";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"checkBox3.Image")));
			this->checkBox3->Location = System::Drawing::Point(16, 87);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(68, 32);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"               ";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox5->Location = System::Drawing::Point(149, 297);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(76, 23);
			this->comboBox5->TabIndex = 16;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox5_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->ForeColor = System::Drawing::Color::Yellow;
			this->label15->Location = System::Drawing::Point(251, 124);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 15);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Delay(MS):";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"checkBox7.Image")));
			this->checkBox7->Location = System::Drawing::Point(17, 291);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBox7->Size = System::Drawing::Size(69, 32);
			this->checkBox7->TabIndex = 15;
			this->checkBox7->Text = L"             4";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox7_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->Location = System::Drawing::Point(246, 144);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 23);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"100";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(58) {L"Ctrl", L"Alt", L"Home", L"End", L"Delete", L"Insert", 
				L"Shift", L"Page Up", L"Page Down", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", 
				L"F12", L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", 
				L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", L"V", L"W", L"X", L"Y", L"Z"});
			this->comboBox1->Location = System::Drawing::Point(149, 144);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(76, 23);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Yellow;
			this->label14->Location = System::Drawing::Point(168, 3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 15);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Key:";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"checkBox2.Image")));
			this->checkBox2->Location = System::Drawing::Point(17, 138);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(68, 32);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"               ";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Black;
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->checkBox28);
			this->tabPage2->Controls->Add(this->checkBox26);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->comboBox8);
			this->tabPage2->Controls->Add(this->checkBox25);
			this->tabPage2->Controls->Add(this->radioButton1);
			this->tabPage2->Controls->Add(this->checkBox19);
			this->tabPage2->Controls->Add(this->checkBox14);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->radioButton2);
			this->tabPage2->Controls->Add(this->checkBox13);
			this->tabPage2->Controls->Add(this->checkBox17);
			this->tabPage2->Controls->Add(this->checkBox22);
			this->tabPage2->Controls->Add(this->checkBox11);
			this->tabPage2->Controls->Add(this->checkBox12);
			this->tabPage2->Controls->Add(this->checkBox18);
			this->tabPage2->Controls->Add(this->checkBox10);
			this->tabPage2->Controls->Add(this->comboBox9);
			this->tabPage2->Controls->Add(this->checkBox16);
			this->tabPage2->ForeColor = System::Drawing::Color::White;
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(353, 429);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Bypassless";
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox17->Location = System::Drawing::Point(70, 294);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 23);
			this->textBox17->TabIndex = 26;
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &Form1::textBox17_TextChanged);
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox28->Location = System::Drawing::Point(9, 295);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(55, 19);
			this->checkBox28->TabIndex = 25;
			this->checkBox28->Text = L"NDFA";
			this->checkBox28->UseVisualStyleBackColor = true;
			this->checkBox28->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox28_CheckedChanged);
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox26->Location = System::Drawing::Point(223, 195);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(48, 19);
			this->checkBox26->TabIndex = 47;
			this->checkBox26->Text = L"FMA";
			this->checkBox26->UseVisualStyleBackColor = true;
			this->checkBox26->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox26_CheckedChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::SpringGreen;
			this->label20->Location = System::Drawing::Point(182, 220);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(168, 195);
			this->label20->TabIndex = 46;
			this->label20->Text = resources->GetString(L"label20.Text");
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ImageIndex = 0;
			this->button12->ImageList = this->imageList1;
			this->button12->Location = System::Drawing::Point(9, 71);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(208, 139);
			this->button12->TabIndex = 42;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"1.png");
			this->imageList1->Images->SetKeyName(1, L"2.png");
			this->imageList1->Images->SetKeyName(2, L"3.png");
			this->imageList1->Images->SetKeyName(3, L"4.png");
			this->imageList1->Images->SetKeyName(4, L"6.png");
			this->imageList1->Images->SetKeyName(5, L"7.png");
			this->imageList1->Images->SetKeyName(6, L"8.png");
			this->imageList1->Images->SetKeyName(7, L"9.png");
			this->imageList1->Images->SetKeyName(8, L"10.png");
			this->imageList1->Images->SetKeyName(9, L"11.png");
			this->imageList1->Images->SetKeyName(10, L"12.png");
			this->imageList1->Images->SetKeyName(11, L"13.png");
			this->imageList1->Images->SetKeyName(12, L"14.png");
			this->imageList1->Images->SetKeyName(13, L"16.png");
			this->imageList1->Images->SetKeyName(14, L"17.png");
			this->imageList1->Images->SetKeyName(15, L"18.png");
			this->imageList1->Images->SetKeyName(16, L"21.png");
			this->imageList1->Images->SetKeyName(17, L"22.png");
			this->imageList1->Images->SetKeyName(18, L"23.png");
			this->imageList1->Images->SetKeyName(19, L"24.png");
			this->imageList1->Images->SetKeyName(20, L"25.png");
			this->imageList1->Images->SetKeyName(21, L"26.png");
			this->imageList1->Images->SetKeyName(22, L"27.png");
			this->imageList1->Images->SetKeyName(23, L"28.png");
			this->imageList1->Images->SetKeyName(24, L"29.png");
			this->imageList1->Images->SetKeyName(25, L"30.png");
			this->imageList1->Images->SetKeyName(26, L"31.png");
			this->imageList1->Images->SetKeyName(27, L"32.png");
			this->imageList1->Images->SetKeyName(28, L"33.png");
			this->imageList1->Images->SetKeyName(29, L"34.png");
			this->imageList1->Images->SetKeyName(30, L"36.png");
			this->imageList1->Images->SetKeyName(31, L"37.png");
			this->imageList1->Images->SetKeyName(32, L"40.png");
			this->imageList1->Images->SetKeyName(33, L"41.png");
			this->imageList1->Images->SetKeyName(34, L"42.png");
			this->imageList1->Images->SetKeyName(35, L"43.png");
			this->imageList1->Images->SetKeyName(36, L"44.png");
			this->imageList1->Images->SetKeyName(37, L"45.png");
			this->imageList1->Images->SetKeyName(38, L"49.png");
			this->imageList1->Images->SetKeyName(39, L"50.png");
			this->imageList1->Images->SetKeyName(40, L"51.png");
			this->imageList1->Images->SetKeyName(41, L"52.png");
			this->imageList1->Images->SetKeyName(42, L"53.png");
			this->imageList1->Images->SetKeyName(43, L"63.png");
			this->imageList1->Images->SetKeyName(44, L"68.png");
			this->imageList1->Images->SetKeyName(45, L"69.png");
			this->imageList1->Images->SetKeyName(46, L"70.png");
			this->imageList1->Images->SetKeyName(47, L"71.png");
			this->imageList1->Images->SetKeyName(48, L"72.png");
			this->imageList1->Images->SetKeyName(49, L"73.png");
			this->imageList1->Images->SetKeyName(50, L"74.png");
			this->imageList1->Images->SetKeyName(51, L"75.png");
			this->imageList1->Images->SetKeyName(52, L"76.png");
			this->imageList1->Images->SetKeyName(53, L"77.png");
			this->imageList1->Images->SetKeyName(54, L"78.png");
			this->imageList1->Images->SetKeyName(55, L"79.png");
			this->imageList1->Images->SetKeyName(56, L"80.png");
			this->imageList1->Images->SetKeyName(57, L"81.png");
			this->imageList1->Images->SetKeyName(58, L"82.png");
			this->imageList1->Images->SetKeyName(59, L"83.png");
			this->imageList1->Images->SetKeyName(60, L"84.png");
			this->imageList1->Images->SetKeyName(61, L"85.png");
			this->imageList1->Images->SetKeyName(62, L"86.png");
			this->imageList1->Images->SetKeyName(63, L"87.png");
			this->imageList1->Images->SetKeyName(64, L"88.png");
			this->imageList1->Images->SetKeyName(65, L"89.png");
			this->imageList1->Images->SetKeyName(66, L"90.png");
			this->imageList1->Images->SetKeyName(67, L"91.png");
			this->imageList1->Images->SetKeyName(68, L"92.png");
			this->imageList1->Images->SetKeyName(69, L"93.png");
			this->imageList1->Images->SetKeyName(70, L"94.png");
			this->imageList1->Images->SetKeyName(71, L"95.png");
			this->imageList1->Images->SetKeyName(72, L"96.png");
			this->imageList1->Images->SetKeyName(73, L"97.png");
			this->imageList1->Images->SetKeyName(74, L"98.png");
			this->imageList1->Images->SetKeyName(75, L"99.png");
			this->imageList1->Images->SetKeyName(76, L"100.png");
			this->imageList1->Images->SetKeyName(77, L"101.png");
			this->imageList1->Images->SetKeyName(78, L"102.png");
			this->imageList1->Images->SetKeyName(79, L"103.png");
			this->imageList1->Images->SetKeyName(80, L"104.png");
			this->imageList1->Images->SetKeyName(81, L"105.png");
			this->imageList1->Images->SetKeyName(82, L"106.png");
			this->imageList1->Images->SetKeyName(83, L"107.png");
			this->imageList1->Images->SetKeyName(84, L"108.png");
			this->imageList1->Images->SetKeyName(85, L"109.png");
			this->imageList1->Images->SetKeyName(86, L"110.png");
			this->imageList1->Images->SetKeyName(87, L"111.png");
			this->imageList1->Images->SetKeyName(88, L"112.png");
			this->imageList1->Images->SetKeyName(89, L"113.png");
			this->imageList1->Images->SetKeyName(90, L"114.png");
			this->imageList1->Images->SetKeyName(91, L"115.png");
			this->imageList1->Images->SetKeyName(92, L"116.png");
			this->imageList1->Images->SetKeyName(93, L"126.png");
			this->imageList1->Images->SetKeyName(94, L"1000.png");
			this->imageList1->Images->SetKeyName(95, L"1001.png");
			this->imageList1->Images->SetKeyName(96, L"1002.png");
			this->imageList1->Images->SetKeyName(97, L"1003.png");
			this->imageList1->Images->SetKeyName(98, L"1100.png");
			this->imageList1->Images->SetKeyName(99, L"1101.png");
			this->imageList1->Images->SetKeyName(100, L"1103.png");
			this->imageList1->Images->SetKeyName(101, L"2000.png");
			this->imageList1->Images->SetKeyName(102, L"2001.png");
			this->imageList1->Images->SetKeyName(103, L"2002.png");
			this->imageList1->Images->SetKeyName(104, L"2003.png");
			// 
			// comboBox8
			// 
			this->comboBox8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(106) {L"0", L"1", L"2", L"3", L"4", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12", L"13", L"14", L"16", L"17", L"18", L"21", L"22", L"23", L"24", L"25", L"26", L"27", L"28", L"29", 
				L"30", L"31", L"32", L"33", L"34", L"36", L"37", L"40", L"41", L"42", L"43", L"44", L"45", L"49", L"50", L"51", L"52", L"53", 
				L"63", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", 
				L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", L"99", L"100", L"101", L"102", 
				L"103", L"104", L"105", L"106", L"107", L"108", L"109", L"110", L"111", L"112", L"113", L"114", L"115", L"116", L"126", L"1000", 
				L"1001", L"1002", L"1003", L"1100", L"1101", L"1103", L"2000", L"2001", L"2002", L"2003"});
			this->comboBox8->Location = System::Drawing::Point(130, 45);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(80, 23);
			this->comboBox8->TabIndex = 14;
			this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox8_SelectedIndexChanged);
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox25->Location = System::Drawing::Point(223, 145);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(59, 19);
			this->checkBox25->TabIndex = 44;
			this->checkBox25->Text = L"CMND";
			this->checkBox25->UseVisualStyleBackColor = true;
			this->checkBox25->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox25_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(133, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(32, 19);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"9";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox19->Location = System::Drawing::Point(223, 120);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(104, 19);
			this->checkBox19->TabIndex = 23;
			this->checkBox19->Text = L"Instant Combo";
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox19_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox14->Location = System::Drawing::Point(9, 46);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(91, 19);
			this->checkBox14->TabIndex = 11;
			this->checkBox14->Text = L"Morph Hack";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox14_CheckedChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Fuchsia;
			this->label19->Location = System::Drawing::Point(6, 3);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 15);
			this->label19->TabIndex = 9;
			this->label19->Text = L"------Hacks-----";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(171, 21);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(39, 19);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->Text = L"22";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox13->ForeColor = System::Drawing::Color::White;
			this->checkBox13->Location = System::Drawing::Point(223, 70);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(80, 19);
			this->checkBox13->TabIndex = 3;
			this->checkBox13->Text = L"No Breath";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox13_CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox17->Location = System::Drawing::Point(9, 21);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(118, 19);
			this->checkBox17->TabIndex = 16;
			this->checkBox17->Text = L"Morph GodMode";
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox17_CheckedChanged);
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox22->ForeColor = System::Drawing::Color::Lime;
			this->checkBox22->Location = System::Drawing::Point(9, 270);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(124, 19);
			this->checkBox22->TabIndex = 22;
			this->checkBox22->Text = L"Physical GodMode";
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox22_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox11->ForeColor = System::Drawing::Color::White;
			this->checkBox11->Location = System::Drawing::Point(223, 95);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(107, 19);
			this->checkBox11->TabIndex = 1;
			this->checkBox11->Text = L"No Knock Back";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox11_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox12->ForeColor = System::Drawing::Color::White;
			this->checkBox12->Location = System::Drawing::Point(223, 170);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(83, 19);
			this->checkBox12->TabIndex = 2;
			this->checkBox12->Text = L"Super Tubi";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox12_CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox18->Location = System::Drawing::Point(223, 21);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(86, 19);
			this->checkBox18->TabIndex = 19;
			this->checkBox18->Text = L"Char Facing";
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox18_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox10->ForeColor = System::Drawing::Color::Red;
			this->checkBox10->Location = System::Drawing::Point(9, 220);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(118, 19);
			this->checkBox10->TabIndex = 0;
			this->checkBox10->Text = L"Unlimited Attack";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox10_CheckedChanged);
			// 
			// comboBox9
			// 
			this->comboBox9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Left", L"Right"});
			this->comboBox9->Location = System::Drawing::Point(239, 45);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(88, 23);
			this->comboBox9->TabIndex = 20;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox16->Location = System::Drawing::Point(9, 245);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(152, 19);
			this->checkBox16->TabIndex = 15;
			this->checkBox16->Text = L"Move Faster Animation";
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox16_CheckedChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Black;
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->groupBox4);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->ForeColor = System::Drawing::Color::White;
			this->tabPage3->Location = System::Drawing::Point(4, 24);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(353, 429);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Travel";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(184, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(38, 34);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 46;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->checkBox15);
			this->groupBox5->Controls->Add(this->checkBox20);
			this->groupBox5->Controls->Add(this->checkBox21);
			this->groupBox5->ForeColor = System::Drawing::Color::Yellow;
			this->groupBox5->Location = System::Drawing::Point(175, 11);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(170, 103);
			this->groupBox5->TabIndex = 45;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"             Why you fly\?";
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox15->ForeColor = System::Drawing::Color::White;
			this->checkBox15->Location = System::Drawing::Point(6, 32);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(118, 19);
			this->checkBox15->TabIndex = 41;
			this->checkBox15->Text = L"KB MouseFly (F9)";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox15_CheckedChanged);
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox20->ForeColor = System::Drawing::Color::White;
			this->checkBox20->Location = System::Drawing::Point(5, 80);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(115, 17);
			this->checkBox20->TabIndex = 21;
			this->checkBox20->Text = L"SS Mouse Fly (F11)";
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox20_CheckedChanged);
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox21->ForeColor = System::Drawing::Color::White;
			this->checkBox21->Location = System::Drawing::Point(6, 55);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(147, 17);
			this->checkBox21->TabIndex = 22;
			this->checkBox21->Text = L"MouseClick Teleport (F10)";
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox21_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button8);
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Controls->Add(this->button10);
			this->groupBox4->Controls->Add(this->button11);
			this->groupBox4->ForeColor = System::Drawing::Color::Yellow;
			this->groupBox4->Location = System::Drawing::Point(178, 269);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(172, 154);
			this->groupBox4->TabIndex = 44;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Direction Teleport";
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button8->Location = System::Drawing::Point(72, 19);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(32, 32);
			this->button8->TabIndex = 37;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(41, 54);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(88, 79);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 36;
			this->pictureBox3->TabStop = false;
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button10->Location = System::Drawing::Point(3, 80);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(32, 32);
			this->button10->TabIndex = 39;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->Location = System::Drawing::Point(135, 80);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(32, 32);
			this->button11->TabIndex = 40;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->textBox14);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->textBox15);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->ForeColor = System::Drawing::Color::Yellow;
			this->groupBox3->Location = System::Drawing::Point(9, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(160, 257);
			this->groupBox3->TabIndex = 43;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Coordinate Teleport";
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->ForeColor = System::Drawing::Color::Blue;
			this->button4->Location = System::Drawing::Point(90, 182);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(32, 24);
			this->button4->TabIndex = 30;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox10->Location = System::Drawing::Point(7, 18);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(77, 23);
			this->textBox10->TabIndex = 24;
			this->textBox10->Text = L"X";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox11->Location = System::Drawing::Point(7, 47);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(77, 23);
			this->textBox11->TabIndex = 25;
			this->textBox11->Text = L"Y";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Form1::textBox11_TextChanged);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(90, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 24);
			this->button2->TabIndex = 26;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->ForeColor = System::Drawing::Color::Blue;
			this->button3->Location = System::Drawing::Point(90, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(32, 24);
			this->button3->TabIndex = 27;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox12->Location = System::Drawing::Point(7, 85);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(77, 23);
			this->textBox12->TabIndex = 28;
			this->textBox12->Text = L"X";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::textBox12_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox13->Location = System::Drawing::Point(7, 114);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(77, 23);
			this->textBox13->TabIndex = 29;
			this->textBox13->Text = L"Y";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Form1::textBox13_TextChanged);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->ForeColor = System::Drawing::Color::Blue;
			this->button1->ImageIndex = 0;
			this->button1->Location = System::Drawing::Point(6, 218);
			this->button1->Name = L"button1";
			this->button1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button1->Size = System::Drawing::Size(148, 33);
			this->button1->TabIndex = 8;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->ForeColor = System::Drawing::Color::Blue;
			this->button7->Location = System::Drawing::Point(90, 153);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(32, 24);
			this->button7->TabIndex = 35;
			this->button7->Text = L"...";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox14->Location = System::Drawing::Point(7, 155);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(77, 23);
			this->textBox14->TabIndex = 31;
			this->textBox14->Text = L"X";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &Form1::textBox14_TextChanged);
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->ForeColor = System::Drawing::Color::Blue;
			this->button6->Location = System::Drawing::Point(90, 83);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(32, 24);
			this->button6->TabIndex = 34;
			this->button6->Text = L"...";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox15->Location = System::Drawing::Point(7, 184);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(77, 23);
			this->textBox15->TabIndex = 32;
			this->textBox15->Text = L"Y";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &Form1::textBox15_TextChanged);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->ForeColor = System::Drawing::Color::Blue;
			this->button5->Location = System::Drawing::Point(90, 16);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 24);
			this->button5->TabIndex = 33;
			this->button5->Text = L"...";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox10);
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->checkBox27);
			this->groupBox2->ForeColor = System::Drawing::Color::Yellow;
			this->groupBox2->Location = System::Drawing::Point(9, 269);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(160, 154);
			this->groupBox2->TabIndex = 42;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Timed SP Control";
			// 
			// comboBox10
			// 
			this->comboBox10->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Sec", L"Min"});
			this->comboBox10->Location = System::Drawing::Point(95, 47);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(59, 23);
			this->comboBox10->TabIndex = 48;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox10_SelectedIndexChanged);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox16->Location = System::Drawing::Point(12, 47);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(77, 23);
			this->textBox16->TabIndex = 47;
			this->textBox16->Text = L"30";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &Form1::textBox16_TextChanged);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->ForeColor = System::Drawing::Color::Lime;
			this->button9->Location = System::Drawing::Point(95, 90);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(59, 49);
			this->button9->TabIndex = 46;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox9->Location = System::Drawing::Point(12, 119);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(77, 23);
			this->textBox9->TabIndex = 45;
			this->textBox9->Text = L"Y";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox8->Location = System::Drawing::Point(12, 90);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(77, 23);
			this->textBox8->TabIndex = 44;
			this->textBox8->Text = L"X";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox27->ForeColor = System::Drawing::Color::White;
			this->checkBox27->Location = System::Drawing::Point(7, 22);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(105, 17);
			this->checkBox27->TabIndex = 43;
			this->checkBox27->Text = L"Timed SP Control";
			this->checkBox27->UseVisualStyleBackColor = true;
			this->checkBox27->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox27_CheckedChanged);
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox23->ForeColor = System::Drawing::Color::White;
			this->checkBox23->Location = System::Drawing::Point(187, 642);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(183, 19);
			this->checkBox23->TabIndex = 25;
			this->checkBox23->Text = L"Alert Me when Dc-ed / Dead";
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox23_CheckedChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label16->Location = System::Drawing::Point(41, 32);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(259, 28);
			this->label16->TabIndex = 18;
			this->label16->Text = L"*Date*       *Time*";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Black;
			this->label17->ForeColor = System::Drawing::Color::Yellow;
			this->label17->Location = System::Drawing::Point(240, 669);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(111, 15);
			this->label17->TabIndex = 19;
			this->label17->Text = L"Coded by Guardian";
			// 
			// HotKeys
			// 
			this->HotKeys->Enabled = true;
			this->HotKeys->Interval = 1000;
			this->HotKeys->Tick += gcnew System::EventHandler(this, &Form1::HotKeys_Tick);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label22->Location = System::Drawing::Point(18, 644);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(129, 15);
			this->label22->TabIndex = 26;
			this->label22->Text = L"Checking for update...";
			this->label22->Click += gcnew System::EventHandler(this, &Form1::label22_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1191, 689);
			this->Controls->Add(this->checkBox23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1197, 727);
			this->Name = L"Form1";
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"E.Guardian [A} | pID :   | Coded by Guardian |";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e);

	private: System::Void topMostToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void StatTimer_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void EmbedButtonStatus_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void visitFacebookPageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void visitWebsiteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Form2_toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox20_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void HotKeys_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox21_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox22_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox23_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void suggestionsBugsReportToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void donateToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void showEmbedMapleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void label22_Click_1(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void CheckforUpdates();
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void donateMYRToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox25_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox26_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox27_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void checkBox28_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e);
};
}
