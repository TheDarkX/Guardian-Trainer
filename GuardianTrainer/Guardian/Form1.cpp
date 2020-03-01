#include <Windows.h>
#include "Form1.h"
#include "Functions.h"
#include "Keys.h"
#include "Pointers.h"
#include "SendPacket.h"
#include <math.h>
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace Guardian;
using namespace std;

#pragma warning(disable:4793) //Disable ASM function maked as "naked"

void Main(void)
{
	//ShellExecuteA(NULL, "open", "http://teamimm.com",NULL, NULL, SW_SHOWNORMAL); //Forum
	//ShellExecuteA(NULL, "open", "https://www.facebook.com/EGuardianOrganization?ref=hl",NULL, NULL, SW_SHOWNORMAL); //E.Guardian FB Page
	//ShellExecuteA(NULL, "open", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=JB9YK9W3C39XA",NULL, NULL, SW_SHOWNORMAL); //Donate (SGD)
	//ShellExecuteA(NULL, "open", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=Y2LDLKR8WLHJC",NULL, NULL, SW_SHOWNORMAL); //Donate (MYR)
	MessageBox::Show("Trainer Injected Successfully!\nMade by Guardian!\nDonate to make this trainer keep update.", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1);
    Application::Exit();
}
/***********************************************************************************/
 //General
#pragma region Send&RecvPacket (Requires Bypass)
//Packet Functions
/*
int PacketTextBox;

CPackets* Packets = new CPackets();
 
bool SendPacket(String^ sPacket)
{
  String^ sNewPacket = sPacket->Replace(" ", String::Empty);
  String^ sNewerPacket = sNewPacket->Replace("*", (rand()%16).ToString("X"));
  String^ sNewerPacket1 = sNewerPacket->Replace(L"L", PacketTextBox.ToString("X2"));
 
  LPCSTR lpcszPacket = (LPCSTR)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(sNewerPacket1).ToPointer());
 
  return Packets->SendPacket(lpcszPacket);
}
 
bool RecvPacket(String^ sPacket)
{
  String^ sNewPacket = sPacket->Replace(" ", String::Empty);
  String^ sNewerPacket = sNewPacket->Replace("*", (rand()%16).ToString("X"));
  String^ sNewerPacket2 = sNewerPacket->Replace(L"L", PacketTextBox.ToString("X2"));
 
  LPCSTR lpcszPacket = (LPCSTR)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(sNewerPacket2).ToPointer());
 
  return Packets->RecvPacket(lpcszPacket);
}
*/
#pragma endregion

#pragma region Embed MS
/*Embed MapleStory client into our window*/
static BOOL bChild = FALSE;
static HWND hMapleStory, hParent;

void EmbedMapleStory(HWND hWnd)
{
    if(!bChild)
    {
        hMapleStory = FindWindowA("MapleStoryClass", 0);
 
        if(hMapleStory)
        {
            hParent = SetParent(hMapleStory, hWnd);
            if(hParent)
            {
                bChild = TRUE;
                SetWindowPos(hMapleStory, 0, 0, -25, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
            }
        }
    }
    else
    {
        SetParent(hMapleStory, hParent);
        bChild = FALSE;
    }
}

void Form1::EmbedButtonStatus_Tick(System::Object^  sender, System::EventArgs^  e)
{
	if(bChild == TRUE)
	{
		this->checkBox1->Enabled = false;
	}
}

void Form1::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	HWND EmbedWindow = (HWND)this->pictureBox1->Handle.ToPointer();
	EmbedMapleStory(EmbedWindow);
}

#pragma endregion

#pragma region FormLoadEvent
void Form1::Form1_Load(System::Object^  sender, System::EventArgs^  e)
{
	///*General*/
	////CheckforUpdates();
	//this->Size = System::Drawing::Size(379, 717);

	//hMapleStory = FindWindowA("MapleStoryClass", 0);
	//DWORD pID = GetCurrentProcessId();
	//this->Text = "E.Guardian [A] | pID : " + pID + " | Coded by Guardian";

	////[AutoBot] Key, Delay, Value
	//this->comboBox6->Text = "Delete"; //AutoHP
	//this->textBox6->Text = "5000";
	//this->comboBox7->Text = "End"; //AutoMP
	//this->textBox7->Text = "1000";
	//this->comboBox1->Text = "C"; //AutoAttack
	//this->textBox1->Text = "100";
	//this->comboBox2->Text = "A"; //AutoSkill1
	//this->textBox2->Text = "1000";
	//this->comboBox3->Text = "B"; //AutoSkill2
	//this->textBox3->Text = "2000";
	//this->comboBox4->Text = "C"; //AutoSkill3
	//this->textBox4->Text = "3000";
	//this->comboBox5->Text = "D"; //AutoSkill4
	//this->textBox5->Text = "4000";

	//this->comboBox8->SelectedIndex = 1; //MorphValues
	//this->radioButton1->Checked = true; //MorphGodMode_RadioButton
	//this->comboBox9->Text = "Left"; //CharacterFacing
	//this->comboBox10->SelectedIndex = 0; //TimedSPControl
}

#pragma endregion

#pragma region GetPointerFunctions
int GetAttackCount()
{
	return (int)ReadPointer(CharAddy, AttackCountOffset);
}

int GetCharX()
{
	return(int)ReadPointer(CharAddy, CharOriginX);
}

int GetCharY()
{
	return(int)ReadPointer(CharAddy, CharOriginY);
}

int GetMouseX()
{
	int RealMouse = *((DWORD*)MouseAddy) + MouseLocationOffset;
	return(int)ReadPointer(RealMouse,MouseXOffset);
}

int GetMouseY()
{
	int RealMouse = *((DWORD*)MouseAddy) + MouseLocationOffset;
	return(int)ReadPointer(RealMouse,MouseYOffset);
}

int GetCharHP()
{
	return(int)ReadPointer(StatAddy, HPOffset);
}

int GetCharMP()
{
	return(int)ReadPointer(StatAddy, MPOffset);
}

double GetCharEXP()
{
	return(double)ReadDOUBLEPointer(StatAddy, EXPOffset);
}

int GetMapID()
{
	return (int)ReadPointer(MapAddy, MapIDOffset);
}

int GetLeftWall(int X)
{
	return ((int)ReadPointer(MapAddy, LeftWallOffset) <= X);
}

int GetRightWall(int X)
{
	return ((int)ReadPointer(MapAddy, RightWallOffset)) >= X;
}

int GetTopWall(int Y)
{
	return ((int)ReadPointer(MapAddy, TopWallOffset)) <= Y;
}

int GetButtomWall(int Y)
{
	return ((int)ReadPointer(MapAddy, ButtomWallOffset)) >= Y;
}

int GetPeopleCount()
{
	return (int)ReadPointer(PeopleAddy, PeopleCountOffset);
}

int GetItemCount()
{
	return (int)ReadPointer(ItemAddy , ItemCountOffset);
}

int GetMobCount()
{
	return (int)ReadPointer(MobAddy, MobCountOffset);
}

int GetCurrentGateway()
{
	return (int)ReadPointer(ServerAddy, 0);
}

int GetCurrentWorld()
{
	return(int)ReadPointer(ServerAddy,WorldOffset);
}

int GetCurrentChannel()
{
	return (int)ReadPointer(ServerAddy , ChannelOffset); //+1
}

int GetComboCount()
{
	return (int)ReadPointer(CharAddy, ComboOffset);
}

#pragma endregion

#pragma region CheckConnectionStatus | (Disabled)AutoEmbedMapleStory | CurrentDateTime |

String^ GrabTime()
{
	System::DateTime CurTime = System::DateTime::Now; // Get Current Time.
	return CurTime.ToString(); // Return time.
}

void Form1::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	//Check Connection Status
	if(GetCharHP() != 0)
	{
		this->toolStripStatusLabel2->Text = "Connected";

		DefineColor(toolStripStatusLabel2, Green);
	}
	else
	{
		this->toolStripStatusLabel2->Text = "Connecting...";

		DefineColor(toolStripStatusLabel2, Red);
	}

	//Auto Embed MapleStory
	if(this->toolStripStatusLabel2->Text == "Connected")
	{
		//this->checkBox1->Checked = true;
		//this->checkBox1->Visible = false;
	}

	//CurrentTime
	this->label16->Text = GrabTime();
}

#pragma endregion

#pragma region ShowEmbedMaple
void Form1::showEmbedMapleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->showEmbedMapleToolStripMenuItem->Checked == false)
	{
		this->showEmbedMapleToolStripMenuItem->Checked = true;
		this->Size = System::Drawing::Size(1197, 717);
		
		DefineColor(showEmbedMapleToolStripMenuItem, Green);
	}
	else
	{
		this->showEmbedMapleToolStripMenuItem->Checked = false;
		this->Size = System::Drawing::Size(379, 717);

		DefineColor(showEmbedMapleToolStripMenuItem, Red);
	}
}
#pragma endregion

#pragma region Suggestions | BugReport | Donate |
void Form1::suggestionsBugsReportToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	ShellExecuteA(NULL, "open", "https://www.facebook.com/EGuardianOrganization?ref=hl",NULL, NULL, SW_SHOWNORMAL);
}

void Form1::donateToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Donate (SGD) StripMenu
	ShellExecuteA(NULL, "open", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=JB9YK9W3C39XA",NULL, NULL, SW_SHOWNORMAL);
}

void Form1::donateMYRToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Donate (MYR) StripMenu
	ShellExecuteA(NULL, "open", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=Y2LDLKR8WLHJC",NULL, NULL, SW_SHOWNORMAL);
}

void Form1::button13_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Donate Button (SGD)
	ShellExecuteA(NULL, "open", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=JB9YK9W3C39XA",NULL, NULL, SW_SHOWNORMAL);
}

void Form1::button14_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Donate Button (MYR)
	ShellExecuteA(NULL, "open", "https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=Y2LDLKR8WLHJC",NULL, NULL, SW_SHOWNORMAL);
}

#pragma endregion

#pragma region TopMost
void Form1::topMostToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(topMostToolStripMenuItem->Checked == false)
	{
		topMostToolStripMenuItem->Checked = true;
		this->TopMost = true;

		this->topMostToolStripMenuItem->Text = "TopMost : Enabled";
		DefineColor(topMostToolStripMenuItem, Green);
	}
	else
	{
		topMostToolStripMenuItem->Checked = false;
		this->TopMost = false;

		this->topMostToolStripMenuItem->Text = "TopMost : Disabled";
		DefineColor(topMostToolStripMenuItem, Red);
	}
}

#pragma endregion

#pragma region AlertMeifDC/Dead
bool bDCandDeadChecked = false;

void vDCDeadCheck()
{
	while(bDCandDeadChecked)
	{
		if(GetMapID() == 0 || GetCharHP() == 0)
		{
			Beep(1000,3000);
		}
	}
}

void Form1::checkBox23_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox23->Checked)
	{
		bDCandDeadChecked = true;
		NewThread(vDCDeadCheck);

		DefineColor(checkBox23, Green);
	}
	else
	{
		bDCandDeadChecked = false;

		DefineColor(checkBox23, White);
	}
}
#pragma endregion

#pragma region VisitFacebookPage & VisitWebsite
//Visit Facebook Page
void Form1::visitFacebookPageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	ShellExecuteA(NULL, "open", "https://www.facebook.com/EGuardianOrganization?ref=hl",NULL, NULL, SW_SHOWNORMAL);
}

void Form1::visitWebsiteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	ShellExecuteA(NULL, "open", "http://teamimm.com",NULL, NULL, SW_SHOWNORMAL);
}

#pragma endregion

#pragma region CheckTrainerUpdate
void Form1::CheckforUpdates()
{
	string TrainerVersion = "0.1";
	string WebVersion;
	ifstream UpdateFile, FileURL;
	UpdateFile.open("http://teamimm.com/MSVer.txt");
	getline(UpdateFile, WebVersion, ';');
	UpdateFile.close();

	if(WebVersion != TrainerVersion)
	{
		int nUpdate = MessageBoxA(NULL, "There is an update avaiable, would you like to download it?", "Update found for E.Guardian", MB_ICONEXCLAMATION|MB_YESNO);
			if(nUpdate == IDYES)
				ShellExecuteA(NULL, "open", (LPCSTR)("http://www.mediafire.com/?3j6c779j6jh0u"), NULL, NULL, SW_SHOWNORMAL);
	}
	else
	{
		label22->Text = "No update was found.";
	}
}

#pragma endregion

#pragma region FormClosingEvent
void Form1::Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
{
	String^ closeMessage = "Do you want to close MapleStory as well?";
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result = MessageBox::Show(closeMessage, "Confirm?", buttons, MessageBoxIcon::Exclamation);

	if(result == ::DialogResult::Yes)
	{
		TerminateProcess(GetCurrentProcess(),0);
	}
	else if(result == ::DialogResult::No)
	{
		e->Cancel = true;
	}
}

#pragma endregion

//Forms
#pragma region Form2_ChatSpammer
void Form1::Form2_toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->wForm2->Visible == true)
	{
		this->wForm2->Visible = false;
	}
	else
	{
		this->wForm2->Visible = true;
	}
}

#pragma endregion

#pragma region Form3_Training
void Form1::toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->wForm3->Visible == true)
	{
		this->wForm3->Visible = false;
	}
	else
	{
		this->wForm3->Visible = true;
	}
}
#pragma endregion

#pragma region Form4_Schedule
void Form1::toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->wForm4->Visible == true)
	{
		this->wForm4->Visible = false;
	}
	else
	{
		this->wForm4->Visible = true;
	}
}
#pragma endregion

#pragma region Form5_EXPTimer
void Form1::toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->wForm5->Visible == true)
	{
		this->wForm5->Visible = false;
	}
	else
	{
		this->wForm5->Visible = true;
	}
}
#pragma endregion

#pragma region Form6_ScriptHacks
void Form1::toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(this->wForm6->Visible == true)
	{
		this->wForm6->Visible = false;
	}
	else
	{
		this->wForm6->Visible = true;
	}
}
#pragma endregion
/***********************************************************************************/
//Hacks
#pragma region StatDisplay
void Form1::StatTimer_Tick(System::Object^  sender, System::EventArgs^  e)
{
	if(GetMapID() != 0 || GetMapID() == 0)
	{	
		WriteToPointer(SettingAddy, HPAlertOffset, 20);
		WriteToPointer(SettingAddy, MPAlertOffset, 20);

		this->label1->Text = "Health : " + GetCharHP().ToString();
		this->label2->Text = "Mana : " + GetCharMP().ToString();
		this->label3->Text = "Experience : " + Math::Round(GetCharEXP(), 2).ToString() + "%";
		this->label4->Text = "Character XY : " + GetCharX().ToString() + "/" + GetCharY().ToString();
		this->label5->Text = "Mouse XY : " + GetMouseX().ToString() + "/" + GetMouseY().ToString();
		this->label6->Text = "MapID : " + GetMapID().ToString();
		this->label7->Text = "AttackCount : " + GetAttackCount().ToString() + "/ 100";
		this->label8->Text = "Monster : " + GetMobCount().ToString();
		this->label9->Text = "Player : " + GetPeopleCount().ToString();
		this->label10->Text = "Item : " + GetItemCount().ToString();
		//this->label11->Text = "Gateway : " + GetCurrentGateway().ToString();

		if(GetCurrentWorld() == 0)
			{this->label13->Text = "World : Aquila" + " - " + (GetCurrentChannel()+1).ToString();}
		else if(GetCurrentWorld() == 1)
			{this->label13->Text = "World : Bootes" + " - " + (GetCurrentChannel()+1).ToString();}
		else if(GetCurrentWorld() == 2)
			{this->label13->Text = "World : Cassiopeia" + " - " + (GetCurrentChannel()+1).ToString();}
		else if(GetCurrentWorld() == 3)
			{this->label13->Text = "World : Delphinus" + " - " + (GetCurrentChannel()+1).ToString();}
		else if(GetCurrentWorld() == 4)
			{this->label13->Text = "World : Eridanus" + " - " + (GetCurrentChannel()+1).ToString();}
		else if(GetCurrentWorld() == 5)
			{this->label13->Text = "World : Izar" + " - " + (GetCurrentChannel()+1).ToString();}
		else if(GetCurrentWorld() == 6)
			{this->label13->Text = "World : Fornax" + " - " + (GetCurrentChannel()+1).ToString();}
		else if(GetCurrentWorld() == 7)
			{this->label13->Text = "World : Gemini" + " - " + (GetCurrentChannel()+1).ToString();}
		else if(GetCurrentWorld() == 8)
			{this->label13->Text = "World : Hercules" + " - " + (GetCurrentChannel()+1).ToString();}
	}
}
#pragma endregion

#pragma region BotTab
void SendKey(UINT key)
{
	::PostMessage(hMapleStory, WM_KEYDOWN, key, ::MapVirtualKey(key, 0) << 16);
}

void SendKeyUp(UINT key)
{
	::PostMessage(hMapleStory, WM_KEYUP, key, ::MapVirtualKey(key, 0) << 16);
}

#pragma region AutoAttack
//AutoAttack
bool bAutoAttack = false;
int AutoAttackDelay = 1000;
DWORD AutoAttackKey = 0x43; //C

void vAutoAttack()
{
	while(bAutoAttack)
	{
		SendKey((UINT)AutoAttackKey);
		Sleep(AutoAttackDelay);
		SendKeyUp((UINT)AutoAttackKey);
		Sleep(AutoAttackDelay);
	}
}

void Form1::comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	AutoAttackKey = GetKey(this->comboBox1->SelectedIndex);
}

void Form1::checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox2->Checked == true)
	{
		if(this->textBox1->Text == "")
		{
			this->checkBox2->Checked = false;
			MessageBox::Show("Insert an interger value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			bAutoAttack = true;
			AutoAttackDelay = Convert::ToInt32(this->textBox1->Text);
			NewThread(vAutoAttack);

			DefineColor(checkBox2, Green);
			this->comboBox1->Enabled = false;
			this->textBox1->Enabled = false;
		}
	}
	else
	{
		bAutoAttack = false;
		CloseThread(vAutoAttack);

		DefineColor(checkBox2, White);
		this->comboBox1->Enabled = true;
		this->textBox1->Enabled = true;
	}
}
#pragma endregion

#pragma region AutoLoot
//AutoLoot
bool bLooting = false;

void vLooting()
{
	while(bLooting)
	{
		SendKey((UINT)0x60); //Keypad 0
		Sleep(50);
		SendKeyUp((UINT)0x60); //Keypad 0
		Sleep(10);
	}
}

void Form1::checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox3->Checked == true)
	{
		bLooting = true;
		NewThread(vLooting);

		DefineColor(checkBox3, Green);
	}
	else
	{
		bLooting = false;
		CloseThread(vLooting);

		DefineColor(checkBox3, White);
	}
}
#pragma endregion

#pragma region AutoSkill1
//AutoSkill1
bool bAutoSkill1 = false;
int iAutoSkill1Delay = 1000;
DWORD AutoSkill1Key = 0x41; //A

void vAutoSkill1()
{
	while(bAutoSkill1)
	{
		SendKey((UINT)AutoSkill1Key);
		Sleep(iAutoSkill1Delay);
	}
}

void Form1::comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	AutoSkill1Key = GetKey(this->comboBox2->SelectedIndex);
}

void Form1::checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox4->Checked == true)
	{
		if(this->textBox2->Text == "")
		{
			this->checkBox4->Checked = false;
			MessageBox::Show("Insert an interger value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			bAutoSkill1 = true;
			iAutoSkill1Delay = Convert::ToInt32(this->textBox2->Text);
			NewThread(vAutoSkill1);

			DefineColor(checkBox4, Green);
			this->comboBox2->Enabled = false;
			this->textBox2->Enabled = false;
		}
	}
	else
	{
		bAutoSkill1 = false;
		CloseThread(vAutoSkill1);

		DefineColor(checkBox4, White);
		this->comboBox2->Enabled = true;
		this->textBox2->Enabled = true;
	}
}
#pragma endregion

#pragma region AutoSkill2
//AutoSkill2
bool bAutoSkill2 = false;
int iAutoSkill2Delay = 2000;
DWORD AutoSkill2Key = 0x42; //B

void vAutoSkill2()
{
	while(bAutoSkill2)
	{
		SendKey((UINT)AutoSkill2Key);
		Sleep(iAutoSkill2Delay);
	}
}

void Form1::comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	AutoSkill2Key = GetKey(this->comboBox3->SelectedIndex);
}

void Form1::checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox5->Checked == true)
	{
		if(this->textBox3->Text == "")
		{
			this->checkBox5->Checked = false;
			MessageBox::Show("Insert an interger value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			bAutoSkill2 = true;
			iAutoSkill2Delay = Convert::ToInt32(this->textBox3->Text);
			NewThread(vAutoSkill2);

			DefineColor(checkBox5, Green);
			this->comboBox3->Enabled = false;
			this->textBox3->Enabled = false;
		}
	}
	else
	{
		bAutoSkill2 = false;
		CloseThread(vAutoSkill2);

		DefineColor(checkBox5, White);
		this->comboBox3->Enabled = true;
		this->textBox3->Enabled = true;
	}
}
#pragma endregion

#pragma region AutoSkill3
//AutoSkill3
bool bAutoSkill3 = false;
int iAutoSkill3Delay = 3000;
DWORD AutoSkill3Key = 0x43; //C

void vAutoSkill3()
{
	while(bAutoSkill3)
	{
		SendKey((UINT)AutoSkill3Key);
		Sleep(iAutoSkill3Delay);
	}
}

void Form1::comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	AutoSkill1Key = GetKey(this->comboBox4->SelectedIndex);
}

void Form1::checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox6->Checked == true)
	{
		if(this->textBox4->Text == "")
		{
			this->checkBox6->Checked = false;
			MessageBox::Show("Insert an interger value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			bAutoSkill3 = true;
			iAutoSkill3Delay = Convert::ToInt32(this->textBox4->Text);
			NewThread(vAutoSkill3);

			DefineColor(checkBox6, Green);
			this->comboBox4->Enabled = false;
			this->textBox4->Enabled = false;
		}
	}
	else
	{
		bAutoSkill3 = false;
		CloseThread(vAutoSkill3);

		DefineColor(checkBox6, White);
		this->comboBox4->Enabled = true;
		this->textBox4->Enabled = true;
	}
}
#pragma endregion

#pragma region AutoSkill4
//AutoSkill4
bool bAutoSkill4 = false;
int iAutoSkill4Delay = 4000;
DWORD AutoSkill4Key = 0x44; //D

void vAutoSkill4()
{
	while(bAutoSkill4)
	{
		SendKey((UINT)AutoSkill4Key);
		Sleep(iAutoSkill4Delay);
	}
}

void Form1::comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	AutoSkill4Key = GetKey(this->comboBox5->SelectedIndex);
}

void Form1::checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox7->Checked == true)
	{
		if(this->textBox5->Text == "")
		{
			this->checkBox7->Checked = false;
			MessageBox::Show("Insert an interger value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			bAutoSkill4 = true;
			iAutoSkill4Delay = Convert::ToInt32(this->textBox5->Text);
			NewThread(vAutoSkill4);

			DefineColor(checkBox7, Green);
			this->comboBox5->Enabled = false;
			this->textBox5->Enabled = false;
		}
	}
	else
	{
		bAutoSkill4 = false;
		CloseThread(vAutoSkill4);

		DefineColor(checkBox7, White);
		this->comboBox5->Enabled = true;
		this->textBox5->Enabled = true;
	}
}

#pragma endregion

#pragma region AutoHP
//AutoHP
bool bAutoHP = false;
DWORD UserSetHP = 5000;
DWORD AutoHPKey = VK_DELETE; //Delete Key

void vAutoHP()
{
	while(bAutoHP)
	{
		if(ReadPointer(StatAddy, HPOffset) <= UserSetHP)
		{
			SendKey((UINT)AutoHPKey);
			Sleep(100);
			SendKeyUp((UINT)AutoHPKey);
			Sleep(10);
		}
	}
}

void Form1::comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	AutoHPKey = GetKey(this->comboBox6->SelectedIndex);
}

void Form1::checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox8->Checked == true)
	{
		if(this->textBox6->Text == "")
		{
			this->checkBox8->Checked = false;
			MessageBox::Show("Insert an interger value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			bAutoHP = true;
			NewThread(vAutoHP);

			DefineColor(checkBox8, Green);
			this->comboBox6->Enabled = false;
			this->textBox6->Enabled = false;
		}
	}
	else
	{
		bAutoHP = false;
		CloseThread(vAutoHP);

		DefineColor(checkBox8, White);
		this->comboBox6->Enabled = true;
		this->textBox6->Enabled = true;
	}
}

void Form1::textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	UserSetHP = Convert::ToInt32(this->textBox6->Text);
}
#pragma endregion

#pragma region AutoMP
//AutoMP
bool bAutoMP = false;
DWORD UserSetMP = 5000;
DWORD AutoMPKey = VK_END; //End Key

void vAutoMP()
{
	while(bAutoMP)
	{
		if(ReadPointer(StatAddy, MPOffset) <= UserSetMP)
		{
			SendKey((UINT)AutoMPKey);
			Sleep(100);
			SendKeyUp((UINT)AutoMPKey);
			Sleep(10);
		}
	}
}

void Form1::comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	AutoMPKey = GetKey(this->comboBox7->SelectedIndex);
}

void Form1::checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox9->Checked == true)
	{
		if(this->textBox7->Text == "")
		{
			this->checkBox9->Checked = false;
			MessageBox::Show("Insert an interger value", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else
		{
			bAutoMP = true;
			NewThread(vAutoMP);

			DefineColor(checkBox9, Green);
			this->comboBox7->Enabled = false;
			this->textBox7->Enabled = false;
		}
	}
	else
	{
		bAutoMP = false;
		CloseThread(vAutoMP);

		DefineColor(checkBox9, White);
		this->comboBox7->Enabled = true;
		this->textBox7->Enabled = true;
	}
}

void Form1::textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	UserSetMP = Convert::ToInt32(this->textBox7->Text);
}

#pragma endregion
#pragma endregion

//BypasslessHacks
#pragma region BypasslessHacks

#pragma region UnlimitedAttack
//Unlimited Attack (A/B)
bool bUnlimitedAttack = false;

void vUnlimitedAttack()
{
	while(bUnlimitedAttack)
	{
		WriteToPointer(CharAddy, AttackCountOffset, 0);
		Sleep(100);
	}
}

void Form1::checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox10->Checked == true)
	{
		if(GetAttackCount() >= 90)
		{
			bUnlimitedAttack = true;
			NewThread(vUnlimitedAttack);
		}
		else
		{
			bUnlimitedAttack = false;
			CloseThread(vUnlimitedAttack);
		}
	}
}
#pragma endregion

#pragma region NoKnockBack
//NoKnockBack
bool bNoKnockBack = false;

void vNoKnockBack()
{
	while(bNoKnockBack)
	{
		DWORD dwNoKnockBack = *((DWORD*)CharAddy) + CharpID;
		WriteToPointer(dwNoKnockBack, KBOffset, 0);
		WriteToPointer(dwNoKnockBack, KBXOffset, 0);
		WriteToPointer(dwNoKnockBack, KBYOffset, 0);
		Sleep(100);
	}
}

void Form1::checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox11->Checked == true)
	{
		bNoKnockBack = true;
		NewThread(vNoKnockBack);

		DefineColor(checkBox11, Green);
	}
	else
	{
		bNoKnockBack = false;
		CloseThread(vNoKnockBack);

		DefineColor(checkBox11, White);
	}
}
#pragma endregion

#pragma region SuperZaki
bool bSuperZaki = false;

void vSuperZaki()
{
	while(bSuperZaki == true)
	{
		WriteToPointer(CharAddy, SuperZaki, 255);
		Sleep(1);
	}
}

void Form1::checkBox25_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox25->Checked == true)
	{
		bSuperZaki = true;
		NewThread(vSuperZaki);

		DefineColor(checkBox25, Green);
	}
	else
	{
		bSuperZaki = false;
		CloseThread(vSuperZaki);
		WriteToPointer(CharAddy, SuperZaki, 4278190080);

		DefineColor(checkBox25, White);
	}
}
#pragma endregion

#pragma region SuperTubi
//SuperTubi
bool bSuperTubi = false;

void vSuperTubi()
{
	while(bSuperTubi)
	{
		WriteToPointer(ServerAddy, TubiOffset, 0);
		Sleep(100);
	}
}

void Form1::checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox12->Checked == true)
	{
		bSuperTubi = true;
		NewThread(vSuperTubi);

		DefineColor(checkBox12, Green);
	}
	else
	{
		bSuperTubi = false;
		CloseThread(vSuperTubi);

		DefineColor(checkBox12, White);
	}
}
#pragma endregion

#pragma region NoBreath
//NoBreath
bool bNoBreath = false;

void vNoBreath()
{
	while(bNoBreath)
	{
		WriteToPointer(CharAddy, BreathOffset, 0);
		Sleep(100);
	}
}

void Form1::checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox13->Checked == true)
	{
		bNoBreath = true;
		NewThread(vNoBreath);

		DefineColor(checkBox13, Green);
	}
	else
	{
		bNoBreath = false;
		CloseThread(vNoBreath);

		DefineColor(checkBox13, White);
	}
}
#pragma endregion

#pragma region InstantRefreshMap
//InstantRefreshMap
void vGetLost()
{
	WriteToPointer(CharAddy, TeleXOffset, -99999);
	WriteToPointer(CharAddy, TeleYOffset, 999999);
	WriteToPointer(CharAddy, TeleOffset, 1);
}

void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	vGetLost();
	Sleep(2000);
}
#pragma endregion

#pragma region MorphHack
//MorphHack + GodMode
bool bMorphHack = false;
int iMorphValue = 1;

void vMorphHack()
{
	while(bMorphHack)
	{
		WriteToPointer(CharAddy, MorphOffset, iMorphValue);
		Sleep(100);
	}
}

void Form1::checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox14->Checked == true)
	{
		bMorphHack = true;
		iMorphValue = Convert::ToInt32(this->comboBox8->Text);
		NewThread(vMorphHack);

		this->comboBox8->Enabled = false;
		DefineColor(checkBox14, Green);
	}
	else
	{
		bMorphHack = false;
		WriteToPointer(CharAddy, MorphOffset, 0);
		CloseThread(vMorphHack);

		this->comboBox8->Enabled = true;
		DefineColor(checkBox14, White);
	}
}

//MorphGodMode
bool bMorphGodMode1, bMorphGodMode2 = false;

void MorphGodMode1Function()
{
	while(bMorphGodMode1)
	{
		WriteToPointer(CharAddy, MorphOffset, 9);
	}
}

void MorphGodMode2Function()
{
	while(bMorphGodMode2)
	{
		WriteToPointer(CharAddy, MorphOffset, 22);
	}
}

void Form1::checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox17->Checked == true)
	{
		DefineColor(checkBox17, Green);

		if(this->radioButton1->Checked == true)
		{
			this->radioButton2->Checked = false;
			bMorphGodMode1 = true;
			bMorphGodMode2 = false;
			NewThread(MorphGodMode1Function);

			this->radioButton1->Enabled = false;
			this->radioButton2->Enabled = false;
		}
		else if(this->radioButton2->Checked == true)
		{
			this->radioButton1->Checked = false;
			bMorphGodMode1 = false;
			bMorphGodMode2 = true;
			NewThread(MorphGodMode2Function);

			this->radioButton1->Enabled = false;
			this->radioButton2->Enabled = false;
		}
	}
	else
	{
		bMorphGodMode1 = false;
		bMorphGodMode2 = false;
		WriteToPointer(CharAddy, MorphOffset, 0);

		this->radioButton1->Enabled = true;
		this->radioButton2->Enabled = true;
		DefineColor(checkBox17, White);
	}
}

void Form1::radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e){}
void Form1::radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e){}

//MorphImages
void Form1::comboBox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->comboBox8->Text == "1") //Morph_1
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 0;
		}
	else if(this->comboBox8->Text == "2") //Morph_2
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 1;
		}
	else if(this->comboBox8->Text == "3") //Morph_3
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 2;
		}
	else if(this->comboBox8->Text == "4") //Morph_4
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 3;
		}
	else if(this->comboBox8->Text == "6") //Morph_6
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 4;
		}
	else if(this->comboBox8->Text == "7") //Morph_7
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 5;
		}
	else if(this->comboBox8->Text == "8") //Morph_8
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 6;
		}
	else if(this->comboBox8->Text == "9") //Morph_9
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 7;
		}
	else if(this->comboBox8->Text == "10") //Morph_10
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 8;
		}
	else if(this->comboBox8->Text == "11") //Morph_11
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 9;
		}
	else if(this->comboBox8->Text == "12") //Morph_12
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 10;
	}
	else if(this->comboBox8->Text == "13") //Morph_13
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 11;
		}
	else if(this->comboBox8->Text == "14") //Morph_14
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 12;
	}
	else if(this->comboBox8->Text == "16") //Morph_16
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 13;
		}
	else if(this->comboBox8->Text == "17") //Morph_17
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 14;
		}
	else if(this->comboBox8->Text == "18") //Morph_18
		{this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 15;
		}
	else if(this->comboBox8->Text == "21") //Morph_21
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 16;
		}
	else if(this->comboBox8->Text == "22") //Morph_22
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 17;
		}
	else if(this->comboBox8->Text == "23") //Morph_23
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 18;
		}
	else if(this->comboBox8->Text == "24") //Morph_24
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 19;
		}
	else if(this->comboBox8->Text == "25") //Morph_25
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 20;
		}
	else if(this->comboBox8->Text == "26") //Morph_26
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 21;
		}
	else if(this->comboBox8->Text == "27") //Morph_27
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 22;
		}
	else if(this->comboBox8->Text == "28") //Morph_28
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 23;
		}
	else if(this->comboBox8->Text == "29") //Morph_29
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 24;
		}
	else if(this->comboBox8->Text == "30") //Morph_30
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 25;
		}
	else if(this->comboBox8->Text == "31") //Morph_31
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 26;
		}
	else if(this->comboBox8->Text == "32") //Morph_32
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 27;
		}
	else if(this->comboBox8->Text == "33") //Morph_33
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 28;
		}
	else if(this->comboBox8->Text == "34") //Morph_34
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 29;
		}
	else if(this->comboBox8->Text == "36") //Morph_36
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 30;
		}
	else if(this->comboBox8->Text == "37") //Morph_37
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 31;
		}
	else if(this->comboBox8->Text == "40") //Morph_40
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 32;
		}
	else if(this->comboBox8->Text == "41") //Morph_41
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 33;
		}
	else if(this->comboBox8->Text == "42") //Morph_42
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 34;
		}
	else if(this->comboBox8->Text == "43") //Morph_43
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 35;
		}
	else if(this->comboBox8->Text == "44") //Morph_44
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 36;
		}
	else if(this->comboBox8->Text == "45") //Morph_45
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 37;
		}
	else if(this->comboBox8->Text == "49") //Morph_49
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 38;
		}
	else if(this->comboBox8->Text == "50") //Morph_50
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 39;
		}
	else if(this->comboBox8->Text == "51") //Morph_51
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 40;
		}
	else if(this->comboBox8->Text == "52") //Morph_52
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 41;
		}
	else if(this->comboBox8->Text == "53") //Morph_53
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 42;
		}
	else if(this->comboBox8->Text == "63") //Morph_63
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 43;
		}
	else if(this->comboBox8->Text == "68") //Morph_68
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 44;
		}
	else if(this->comboBox8->Text == "69") //Morph_69
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 45;
		}
	else if(this->comboBox8->Text == "70") //Morph_70
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 46;
		}
	else if(this->comboBox8->Text == "71") //Morph_71
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 47;
		}
	else if(this->comboBox8->Text == "72") //Morph_72
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 48;
		}
	else if(this->comboBox8->Text == "73") //Morph_73
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 49;
		}
	else if(this->comboBox8->Text == "74") //Morph_74
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 50;
		}
	else if(this->comboBox8->Text == "75") //Morph_75
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 51;
		}
	else if(this->comboBox8->Text == "76") //Morph_76
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 52;
		}
	else if(this->comboBox8->Text == "77") //Morph_77
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 53;
		}
	else if(this->comboBox8->Text == "78") //Morph_78
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 54;
		}
	else if(this->comboBox8->Text == "79") //Morph_79
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 55;
		}
	else if(this->comboBox8->Text == "80") //Morph_80
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 56;
		}
	else if(this->comboBox8->Text == "81") //Morph_81
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 57;
		}
	else if(this->comboBox8->Text == "82") //Morph_82
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 58;
		}
	else if(this->comboBox8->Text == "83") //Morph_83
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 59;
		}
	else if(this->comboBox8->Text == "84") //Morph_84
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 60;
		}
	else if(this->comboBox8->Text == "85") //Morph_85
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 61;
		}
	else if(this->comboBox8->Text == "86") //Morph_86
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 62;
		}
	else if(this->comboBox8->Text == "87") //Morph_87
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 63;
		}
	else if(this->comboBox8->Text == "88") //Morph_88
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 64;
		}
	else if(this->comboBox8->Text == "89") //Morph_89
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 65;
		}
	else if(this->comboBox8->Text == "90") //Morph_90
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 66;
		}
	else if(this->comboBox8->Text == "91") //Morph_91
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 67;
		}
	else if(this->comboBox8->Text == "92") //Morph_92
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 68;
		}
	else if(this->comboBox8->Text == "93") //Morph_93
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 69;
		}
	else if(this->comboBox8->Text == "94") //Morph_94
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 70;
		}
	else if(this->comboBox8->Text == "95") //Morph_95
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 71;
		}
	else if(this->comboBox8->Text == "96") //Morph_96
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 72;
		}
	else if(this->comboBox8->Text == "97") //Morph_97
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 73;
		}
	else if(this->comboBox8->Text == "98") //Morph_98
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 74;
		}
	else if(this->comboBox8->Text == "99") //Morph_99
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 75;
		}
	else if(this->comboBox8->Text == "100") //Morph_100
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 76;
		}
	else if(this->comboBox8->Text == "101") //Morph_101
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 77;
		}
	else if(this->comboBox8->Text == "102") //Morph_102
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 78;
		}
	else if(this->comboBox8->Text == "103") //Morph_103
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 79;
		}
	else if(this->comboBox8->Text == "104") //Morph_104
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 80;
		}
	else if(this->comboBox8->Text == "105") //Morph_105
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 81;
		}
	else if(this->comboBox8->Text == "106") //Morph_106
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 82;
		}
	else if(this->comboBox8->Text == "107") //Morph_107
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 83;
		}
	else if(this->comboBox8->Text == "108") //Morph_108
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 84;
		}
	else if(this->comboBox8->Text == "109") //Morph_109
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 85;
		}
	else if(this->comboBox8->Text == "110") //Morph_110
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 86;
		}
	else if(this->comboBox8->Text == "111") //Morph_111
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 87;
		}
	else if(this->comboBox8->Text == "112") //Morph_112
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 88;
		}
	else if(this->comboBox8->Text == "113") //Morph_113
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 89;
		}
	else if(this->comboBox8->Text == "114") //Morph_114
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 90;
		}
	else if(this->comboBox8->Text == "115") //Morph_115
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 91;
		}
	else if(this->comboBox8->Text == "116") //Morph_116
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 92;
		}
	else if(this->comboBox8->Text == "126") //Morph_126
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 93;
		}
	else if(this->comboBox8->Text == "1000") //Morph_1000
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 94;
		}
	else if(this->comboBox8->Text == "1001") //Morph_1001
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 95;
		}
	else if(this->comboBox8->Text == "1002") //Morph_1002
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 96;
		}
	else if(this->comboBox8->Text == "1003") //Morph_1003
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 97;
		}
	else if(this->comboBox8->Text == "1100") //Morph_1100
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 98;
		}
	else if(this->comboBox8->Text == "1101") //Morph_1101
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 99;
		}
	else if(this->comboBox8->Text == "1103") //Morph_1103
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 100;
		}
	else if(this->comboBox8->Text == "2000") //Morph_2000
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 101;
		}
	else if(this->comboBox8->Text == "2001") //Morph_2001
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 102;
		}
	else if(this->comboBox8->Text == "2002") //Morph_2002
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 103;
		}
	else if(this->comboBox8->Text == "2003") //Morph_2003
		{
			this->button12->ImageList = imageList1;
			this->button12->ImageIndex = 104;
		}
}
#pragma endregion

#pragma region MoveFasterAnimation
//MoveFast
bool bMoveFasterAnimation = false;

void vMoveFasterAnimation()
{
	while(bMoveFasterAnimation)
	{
		WriteToPointer(CharAddy, CharAnimationDelay, -125);
		Sleep(100);
	}
}

void Form1::checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox16->Checked == true)
	{
		bMoveFasterAnimation = true;
		NewThread(vMoveFasterAnimation);

		DefineColor(checkBox16, Green);
	}
	else
	{
		bMoveFasterAnimation = false;
		CloseThread(vMoveFasterAnimation);

		DefineColor(checkBox16, White);
	}
}
#pragma endregion

#pragma region CharacterFacing
//CharacterFacing
bool bCharacterFacingLeft  = false;
bool bCharacterFacingRight = false;

void vCharacterFacingLeft()
{
	while(bCharacterFacingLeft)
	{
		WriteToPointer(CharAddy, CharFacingOffset, 0);
		Sleep(100);
	}
}

void CharacterFacingRightFunction()
{
	while(bCharacterFacingRight)
	{
		WriteToPointer(CharAddy, CharFacingOffset, 1);
		Sleep(1);
	}
}

void Form1::checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox18->Checked == true)
	{
		this->comboBox9->Enabled = false;
		DefineColor(checkBox18, Green);

		if(this->comboBox9->SelectedIndex == 0) //Left
		{
			bCharacterFacingLeft = true;
			bCharacterFacingRight = false;
			NewThread(vCharacterFacingLeft);
		}
		else if(this->comboBox9->SelectedIndex == 1) //Right
		{
			bCharacterFacingLeft = false;
			bCharacterFacingRight = true;
			NewThread(CharacterFacingRightFunction);
		}
	}
	else
	{
		bCharacterFacingLeft = false;
		bCharacterFacingRight = false;
		CloseThread(vCharacterFacingLeft);
		CloseThread(CharacterFacingRightFunction);

		this->comboBox9->Enabled = true;
		DefineColor(checkBox18, White);
	}
}
#pragma endregion

#pragma region SSMouseFly & HotKeyTimer
//SSMouseFly
bool bSSMouseFly = false;
bool biEnableSSMouseFly = false;
int TeleportCharX, TeleportCharY = 0;

//TeleportFunction
__inline void Teleport(int TeleportCharX, int TeleportCharY)
{
	WriteToPointer(CharAddy, TeleOffset + 8, TeleportCharX);
	WriteToPointer(CharAddy, TeleOffset + 12, TeleportCharY);
	WriteToPointer(CharAddy, TeleOffset, 1);
}

void vSSMouseFly()
{
	while(bSSMouseFly == true)
	{
		Teleport(GetMouseX(), GetMouseY());
		Sleep(1);
	}
}

void Form1::checkBox20_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox20->Checked == true)
	{
		biEnableSSMouseFly = true;
		bSSMouseFly = true;
		NewThread(vSSMouseFly);

		DefineColor(checkBox20, Green);
	}
	else if(this->checkBox20->Checked == false)
	{
		biEnableSSMouseFly = false;
		bSSMouseFly = false;
		CloseThread(vSSMouseFly);

		DefineColor(checkBox20, White);
	}
}

#pragma region HotKeyTimer
//HotKeyTimer
void Form1::HotKeys_Tick(System::Object^  sender, System::EventArgs^  e)
{
	//SSMouseFly HotKey(F11)
	if(GetAsyncKeyState(VK_F11))
	{
		if(biEnableSSMouseFly == false && this->checkBox20->Checked == false)
		{
			this->checkBox20->Checked = true;
		}
		else if(biEnableSSMouseFly == true && this->checkBox20->Checked == true)
		{
			this->checkBox20->Checked = false;
		}
	}

	//MouseClickTeleport HotKey(F10)
	if(GetAsyncKeyState(VK_F10) && this->checkBox21->Checked == false)
	{
		this->checkBox21->Checked = true;
	}
	else if(GetAsyncKeyState(VK_F10) && this->checkBox21->Checked == true)
	{
		this->checkBox21->Checked = false;
	}

	//KBMouseFly HotKey(F9)
	if(GetAsyncKeyState(VK_F9) && this->checkBox15->Checked == false)
	{
		this->checkBox15->Checked = true;
	}
	else
	{
		this->checkBox15->Checked = false;
	}
}

#pragma endregion

#pragma endregion

#pragma region MouseClickTeleport
//MouseClickTeleport
bool bMouseClickTeleport = false;
bool biEnableMouseClickTeleport = false;

void vMouseClickTeleport()
{
	while(bMouseClickTeleport == true)
	{
		if(GetAsyncKeyState(0x01))
		{
			Teleport(GetMouseX(), GetMouseY());
			Sleep(100);		
		}
	}
}

void Form1::checkBox21_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox21->Checked == true)
	{
		biEnableMouseClickTeleport = true;
		bMouseClickTeleport = true;
		NewThread(vMouseClickTeleport);

		DefineColor(checkBox21, Green);
	}
	else if(this->checkBox21->Checked == false)
	{
		biEnableMouseClickTeleport = false;
		bMouseClickTeleport = false;
		CloseThread(vMouseClickTeleport);

		DefineColor(checkBox21, White);
	}
}

#pragma endregion

#pragma region ManualTeleport
//ManualTeleport1
int iManualTeleport1X, iManualTeleport1Y;
int iManualTeleport2X, iManualTeleport2Y;
int iManualTeleport3X, iManualTeleport3Y;

//ManualTeleport1
void Form1::button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox10->Text = GetCharX().ToString();
	this->textBox11->Text = GetCharY().ToString();
}
//ManualTeleport2
void Form1::button6_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox12->Text = GetCharX().ToString();
	this->textBox13->Text = GetCharY().ToString();
}
//ManualTeleport3
void  Form1::button7_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox14->Text = GetCharX().ToString();
	this->textBox15->Text = GetCharY().ToString();
}

//ManualTeleport1_textBox10 & textBox11
void Form1::textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iManualTeleport1X = Convert::ToInt32(this->textBox10->Text);
}
void Form1::textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iManualTeleport1Y = Convert::ToInt32(this->textBox11->Text);
}
//ManualTeleport2_textBox12 & textBox13
void Form1::textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iManualTeleport2X = Convert::ToInt32(this->textBox12->Text);
}
void Form1::textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iManualTeleport2Y = Convert::ToInt32(this->textBox13->Text);
}
//ManualTeleport3_textBox14 & textBox15
void Form1::textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iManualTeleport3X = Convert::ToInt32(this->textBox14->Text);
}
void Form1::textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iManualTeleport3Y = Convert::ToInt32(this->textBox15->Text);
}

//ManualTeleport1_Button
void Form1::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	WriteToPointer(CharAddy, TeleOffset + 8, iManualTeleport1X);
	WriteToPointer(CharAddy, TeleOffset + 12, iManualTeleport1Y);
	WriteToPointer(CharAddy, TeleOffset, 1);
}
//ManualTeleport2_Button
void Form1::button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	WriteToPointer(CharAddy, TeleOffset + 8, iManualTeleport2X);
	WriteToPointer(CharAddy, TeleOffset + 12, iManualTeleport2Y);
	WriteToPointer(CharAddy, TeleOffset, 1);
}
//ManualTeleport3_Button
void Form1::button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	WriteToPointer(CharAddy, TeleOffset + 8, iManualTeleport3X);
	WriteToPointer(CharAddy, TeleOffset + 12, iManualTeleport3Y);
	WriteToPointer(CharAddy, TeleOffset, 1);
}
#pragma endregion

#pragma region DirectionTeleport
//DirectionTeleport
void Form1::button10_Click(System::Object^  sender, System::EventArgs^  e)
{
	//LeftWallTeleport
	int LeftWallTeleportX = ((int)ReadPointer(WallAddy, LeftWallOffset)) + 5;
	int LeftWallTeleportY = GetCharY();
	Teleport(LeftWallTeleportX, LeftWallTeleportY);
}

void Form1::button8_Click(System::Object^  sender, System::EventArgs^  e)
{
	//TopWallTeleport
	int TopWallTeleportX = GetCharX();
	int TopWallTeleportY = ((int)ReadPointer(WallAddy, TopWallOffset));
	Teleport(TopWallTeleportX, TopWallTeleportY);
}

void Form1::button11_Click(System::Object^  sender, System::EventArgs^  e)
{
	//RightWallTeleport
	int RightWallTeleportX = ((int)ReadPointer(WallAddy, LeftWallOffset + 8) - 5);
	int RightWallTeleportY = GetCharY();
	Teleport(RightWallTeleportX, RightWallTeleportY);
}
#pragma endregion

#pragma region PhysicalGodMode
//pGodmode
unsigned long pGMAddy = 0x00F692F4; //search IsRectEmpty in memory view , scan address in hex @ 4bytes (static one)
unsigned long ulIREmpty;

void __declspec(naked) pGodmodeAsm()
{
	__asm
	{
		cmp [esp],0x0068C20D // physical godmode | 85 C0 74 ? 8D 4C 24 ? C7 44 24 ? ? ? ? ? E8 ? ? ? ? E9 ? ? ? ? 8B 4C 24 ? 8B 6C 24 ? 8B 74 24 ? 8B 5C 24 ? 8D 04 29 99 2B C2 8B C8
		je return_true_false
		jmp [IsRectEmpty]
 
		return_true_false:
		mov eax,01
		ret 0x04
   }
}

void Form1::checkBox22_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox22->Checked == true)
	{
		ulIREmpty = (unsigned long)GetProcAddress(GetModuleHandle("user32.dll"), "IsRectEmpty");
		*(unsigned long*)pGMAddy = (unsigned long)pGodmodeAsm;

		DefineColor(checkBox22, Green);
	}
	else
	{	
		*(unsigned long*)pGMAddy = (unsigned long)ulIREmpty;

		DefineColor(checkBox22, White);
	}
}
#pragma endregion

#pragma region KnockbackMouseFly
bool biEnableKnockbackMouseFly = false;

__inline void KnockbackMouseFly(bool fXAxis, bool fPositive)
{
   if (fXAxis)
   {
      WriteValue((LPDWORD)ReadPointer(CharAddy, CharpID), KBXOffset, (fPositive ? 1081139200 : 3228622848 ));
   }
   else
   {
      WriteValue((LPDWORD)ReadPointer(CharAddy, CharpID), KBYOffset, (fPositive ? 1081139200 : 3228622848 ));
   }
}

void vKnockbackMouseFly()
{
	while(biEnableKnockbackMouseFly)
	{
		KnockbackMouseFly(true, GetMouseX() > GetCharX());
		KnockbackMouseFly(false, GetMouseY() > GetCharY());
		WriteValue((LPDWORD)ReadPointer(CharAddy, CharpID), KBOffset, 1);
	}
}

void Form1::checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox15->Checked == true)
	{
		biEnableKnockbackMouseFly = true;
		NewThread(vKnockbackMouseFly);

		DefineColor(checkBox15, Green);
	}
	else
	{
		biEnableKnockbackMouseFly = false;
		CloseThread(vKnockbackMouseFly);

		DefineColor(checkBox15, White);
	}
}

#pragma endregion

#pragma region InstantCombo
bool bInstantCombo = false;

void vInstantCombo()
{
	while(bInstantCombo)
	{
		if(GetComboCount() >= 0)
		{
			WriteToPointer(CharAddy, ComboOffset, 999);
		}
	}
}

void Form1::checkBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox19->Checked == true)
	{
		bInstantCombo = true;
		NewThread(vInstantCombo);

		DefineColor(checkBox19, Green);
	}
	else
	{
		bInstantCombo = false;
		CloseThread(vInstantCombo);

		DefineColor(checkBox19, White);
	}
}
#pragma endregion

#pragma region FullMapAttack
//FMA
unsigned long FMAAddy = 0x00F692F0; //search IntersectRect in memory view , scan address in hex @ 4bytes (static one)
unsigned long ulIRHook;

void __declspec(naked) FMAAsm()
{
	__asm
	{
		cmp [esp],0x006B772C // dEM | 85 C0 75 ? 43 83 C5 ? EB ? 8B 44 24 ? 8B 4C 24 ? 89 34 81 40 89 44 24 ? 8B 44 24 ? 85 C0 74 ? 39 86 ? ? ? ? 75 04
			//Search Assembly Code for <call dword ptr [FMAAddy]> in memory region , below the result (call dword ptr)....>
        je return_true
        jmp [IntersectRect]

		return_true:
        mov eax,01
        ret 0x0C
   }
}

void Form1::checkBox26_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox26->Checked == true)
	{
		ulIRHook = (unsigned long)GetProcAddress(GetModuleHandle("user32.dll"), "IntersectRect");
		*(unsigned long*)FMAAddy = (unsigned long)FMAAsm;

		DefineColor(checkBox26, Green);
	}
	else
	{
		*(unsigned long*)FMAAddy = (unsigned long)ulIRHook;

		DefineColor(checkBox26, White);
	}
}

#pragma endregion

#pragma region TimedSPControl
bool bTimedSPControl = false;
int iTimedSPControlDelay = 30; //30seconds As Default
int iTimedSPControlSecondorMinute = 1000;
int iTimedSPControlTeleportX, iTimedSPControlTeleportY;

void Form1::textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iTimedSPControlTeleportX = Convert::ToInt32(this->textBox8->Text);
}

void Form1::textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iTimedSPControlTeleportY = Convert::ToInt32(this->textBox8->Text);
}

void vTimedSPControlTeleport()
{
	WriteToPointer(CharAddy, TeleOffset + 8, iTimedSPControlTeleportX);
	WriteToPointer(CharAddy, TeleOffset + 12, iTimedSPControlTeleportY);
	WriteToPointer(CharAddy, TeleOffset, 1);
}

void Form1::button9_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox8->Text = GetCharX().ToString();
	this->textBox9->Text = GetCharY().ToString();
}

void vTimedSPControl()
{
	while(bTimedSPControl)
	{
		Sleep(iTimedSPControlDelay * iTimedSPControlSecondorMinute);
		vTimedSPControlTeleport();
		Sleep(3000);
	}
}

void Form1::comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->comboBox10->SelectedIndex == 0)
	{
		iTimedSPControlSecondorMinute = 1000; //Second
	}
	else if(this->comboBox10->SelectedIndex == 1)
	{
		iTimedSPControlSecondorMinute = 60000; //Minute
	}
}

void Form1::textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->textBox16->Text->Length != NULL)
	{
		iTimedSPControlDelay = Convert::ToInt32(this->textBox16->Text);
	}
}

void Form1::checkBox27_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox27->Checked == true)
	{
		bTimedSPControl = true;
		NewThread(vTimedSPControl);

		this->textBox16->Enabled = false;
		this->comboBox10->Enabled = false;
		this->textBox8->Enabled = false;
		this->textBox9->Enabled = false;
		this->button9->Enabled = false;

		DefineColor(checkBox27, Green);
	}
	else
	{
		bTimedSPControl = false;
		CloseThread(vTimedSPControl);

		this->textBox16->Enabled = true;
		this->comboBox10->Enabled = true;
		this->textBox8->Enabled = true;
		this->textBox9->Enabled = true;
		this->button9->Enabled = true;

		DefineColor(checkBox27, White);
	}
}

#pragma endregion

#pragma region Bypassless NDFA
//Bypassless NDFA
bool bBypasslessNDFA = false;
int iBypasslessNDFA;

void vBypasslessNDFA()
{
	while(bBypasslessNDFA == true)
	{
		WriteToPointer(CharAddy, FinalAttackIDOffset, iBypasslessNDFA);
		Sleep(1);
	}
}

void Form1::textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	iBypasslessNDFA = Convert::ToInt32(this->textBox17->Text);
}

void Form1::checkBox28_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox28->Checked == true)
	{
		bBypasslessNDFA = true;
		NewThread(vBypasslessNDFA);

		DefineColor(checkBox28, Green);
	}
	else
	{
		bBypasslessNDFA = false;
		CloseThread(vBypasslessNDFA);

		DefineColor(checkBox28, White);
	}
}
#pragma endregion

#pragma endregion
