#include <windows.h>
#include "Form4.h"
#include "Functions.h"
#include "Pointers.h"
#include "SendPacket.h"

using namespace Guardian;
using namespace std;
/***********************************************************************************/
//FormLoadEvent
#pragma region FormLoadEvent
void Form4::Form4_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->comboBox1->SelectedIndex = 0; //ScheduleRefreshMap_Second
}
#pragma endregion

/***********************************************************************************/
//Schedule
extern int GetAttackCount();

#pragma region ScheduleRefreshMap
//ScheduleRefreshMap
bool bRefreshMap = false;
int iRefreshMapDelay = 30; //30seconds As Default
int iSecondorMinute = 1000;

extern void vGetLost();

void vRefreshMap()
{
	while(bRefreshMap)
	{
		Sleep(iRefreshMapDelay * iSecondorMinute);
		vGetLost();
		Sleep(3000); //3 seconds
	}
}

void Form4::comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->comboBox1->SelectedIndex == 0)
	{
		iSecondorMinute = 1000; //Second
	}
	else if(this->comboBox1->SelectedIndex == 1)
	{
		iSecondorMinute = 60000; //Minute
	}
}

void Form4::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->textBox1->Text->Length != NULL)
	{
		iRefreshMapDelay = Convert::ToInt32(this->textBox1->Text);
	}
}

void Form4::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox1->Checked == true)
	{
		bRefreshMap = true;
		NewThread(vRefreshMap);

		this->textBox1->Enabled = false;
		this->comboBox1->Enabled = false;
		DefineColor(checkBox1, Green);
	}
	else
	{
		bRefreshMap = false;
		CloseThread(vRefreshMap);

		this->textBox1->Enabled = true;
		this->comboBox1->Enabled = true;
		DefineColor(checkBox1, White);
	}
}
#pragma endregion

#pragma region ScheduleAttackCountRefreshMap
//ScheduleAttackCountRefreshMap
bool bScheduleAttackCountRefreshMap = false;
int iScheduleAttackCountRefreshMapValues = 90;

void vScheduleAttackCountRefreshMap()
{
	while(bScheduleAttackCountRefreshMap)
	{
		if(GetAttackCount() >= iScheduleAttackCountRefreshMapValues)
		{
			vGetLost();
			Sleep(3000);
		}
	}
}

void Form4::checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox2->Checked == true)
	{
		bScheduleAttackCountRefreshMap = true;
		NewThread(vScheduleAttackCountRefreshMap);

		DefineColor(checkBox2, Green);
		this->textBox2->Enabled = false;
	}
	else
	{
		bScheduleAttackCountRefreshMap = false;
		CloseThread(vScheduleAttackCountRefreshMap);

		DefineColor(checkBox2, White);
		this->textBox2->Enabled = true;
	}
}

void Form4::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iScheduleAttackCountRefreshMapValues = Convert::ToInt32(this->textBox2->Text);
}
#pragma endregion