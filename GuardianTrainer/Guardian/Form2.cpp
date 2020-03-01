#include <windows.h>
#include "Form2.h"

using namespace Guardian;
using namespace std;
/***********************************************************************************/

#pragma region FormLoadEvent
//FormLoadEvent
void Form2::Form2_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox1->Text = "Your Text Here !"; //TextBox1
	this->textBox2->Text = "Your Text Here !"; //TextBox2
	this->textBox3->Text = "Your Text Here !"; //TextBox3
	
	this->numericUpDown1->Text = "2000"; //DelayTextBox
}
#pragma endregion

#pragma region ChatSpammer
//ChatSpammer
int iDelay = 2000;

void Form2::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox1->Checked == true)
	{
		this->timer1->Start();

		this->textBox1->Enabled = false;
		this->textBox2->Enabled = false;
		this->textBox3->Enabled = false;
		this->numericUpDown1->Enabled = false;

		this->label6->Text = "Enabled";
		this->label6->ForeColor = System::Drawing::Color::Green;
	}
	else
	{
		timer1->Stop();

		this->textBox1->Enabled = true;
		this->textBox2->Enabled = true;
		this->textBox3->Enabled = true;
		this->numericUpDown1->Enabled = true;

		this->label6->Text = "Disabled";
		this->label6->ForeColor = System::Drawing::Color::White;
	}
}

void Form2::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->timer1->Interval = Convert::ToInt32(this->numericUpDown1->Text);

	if((this->textBox1->Text != "Your Text Here !") && (this->textBox1->Text != ""))
	{
		SendKeys::Send(this->textBox1->Text);
		SendKeys::Send("{ENTER}");
	}

	if((this->textBox2->Text != "Your Text Here !") && (this->textBox2->Text != ""))
	{
		SendKeys::Send(this->textBox2->Text);
		SendKeys::Send("{ENTER}");
	}

	if((this->textBox3->Text != "Your Text Here !") && (this->textBox3->Text != ""))
	{
		SendKeys::Send(this->textBox3->Text);
		SendKeys::Send("{ENTER}");
	}
}

void Form2::timer2_Tick(System::Object^  sender, System::EventArgs^  e)
{
	if(GetAsyncKeyState(VK_F12)) //HotKey
	{
		this->checkBox1->Checked = this->checkBox1->Checked ? false : true;
	}
}

void Form2::numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e)
{
	int iDelay = Convert::ToInt32(this->numericUpDown1->Text);

	if(iDelay < 2000)
	{
		this->numericUpDown1->Text = "2000";
	}
}
#pragma endregion