#include <windows.h>
#include "Form5.h"
#include "Functions.h"
#include "Pointers.h"

using namespace Guardian;
/***********************************************************************************/
#pragma region EXP Timer
//EXP Timer
double yEXP;
double cEXP;
double lEXP;
double gEXP;
double nEXP;
double hEXP;
double curEXP;

extern double GetCharEXP();

void Form5::timer3_Tick(System::Object^  sender, System::EventArgs^  e)
{
	yEXP = GetCharEXP();

	this->label9->Text = (gEXP).ToString("f2") + "%";
	this->label10->Text = (gEXP * 60 ).ToString("f2") + "%";
	curEXP = yEXP; //Current EXP
	this->label7->Text = curEXP.ToString("f2") + "%"; // Current EXP label
	lEXP = (100 - yEXP); // EXP to level
	this->label8->Text = lEXP.ToString("f2") + "%"; // EXP to level label
	double mEXP = (lEXP / gEXP); // Minutes to level
	this->label11->Text = mEXP.ToString("f0"); // Minutes to level label.
	double hEXP = ((lEXP / gEXP) / 60); // Hours to level
	this->label12->Text = hEXP.ToString("f0"); // Hours to level label.
}

//Start EXP Calculator
void Form5::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->button1->Text == "Start")
	{
		this->button1->Text = "Stop";
		this->checkBox1->Checked = true;
		this->timer1->Enabled = true;
		this->timer2->Enabled = true;
	}
	else
	{
		this->button1->Text = "Start";
		this->timer1->Enabled = false;
		this->timer2->Enabled = false;
	}
}

//EXP Timer 1
void Form5::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox1->Checked == true)
	{
		cEXP = GetCharEXP();
		timer2->Enabled= true;
		this->checkBox1->Checked = false;
	}
	if(this->checkBox2->Checked == true)
	{
		nEXP = GetCharEXP();
		gEXP = (nEXP - cEXP);
		this->checkBox2->Checked = false;
		this->checkBox1->Checked = true;
	}
}

//EXP Timer 2
void Form5::timer2_Tick(System::Object^  sender, System::EventArgs^  e)
{
	this->checkBox2->Checked = true;
	this->timer2->Enabled = false;
}
#pragma endregion