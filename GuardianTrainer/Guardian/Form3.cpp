#include <windows.h>
#include "Form3.h"
#include "Functions.h"
#include "Pointers.h"
#include "SendPacket.h"

using namespace Guardian;

#pragma warning(disable:4793) //Disable ASM function maked as "naked"

int Main()
{
    Application::EnableVisualStyles( );
    Application::SetCompatibleTextRenderingDefault(false); 
    Application::Run(gcnew Form3());
    return 0;
}
/***********************************************************************************/
//FormLoadEvent
#pragma region FormLoadEvent
void Form3::Form3_Load(System::Object^  sender, System::EventArgs^  e)
{
	this->textBox1->Text = "100"; //Vami_X
	this->textBox2->Text = "0"; //Vami_Y
	this->radioButton1->Checked = true; //Vami_Random

	this->textBox3->Text = "100"; //KamiBAM_X
	this->textBox4->Text = "0"; //KamiBAM_Y

	this->textBox5->Text = "1"; //KamiLoot_Item

	this->numericUpDown1->Text = "8"; //KamiDS_AttackCount
	this->comboBox1->Text = "C"; //KamiDS_AttackKey
	this->numericUpDown2->Text = "8"; //KamiDS_ChaosLock
	this->comboBox2->Text = "L"; //KamiDS_ChaosLockKey
	this->textBox6->Text = "60"; //KamiDS_Activate_Skill_If_Fury_GreaterOrEqual
	this->comboBox3->Text = "B"; //KamiDS_Activate_SkillKey
}
#pragma endregion

/***********************************************************************************/
/*Training*/
#pragma region KamiKB (Vami)
//KamiKB (Vami)

__inline void KBTeleport(int TeleportCharX, int TeleportCharY)
{
	WriteToPointer(CharAddy, TeleOffset + 8, TeleportCharX);
	WriteToPointer(CharAddy, TeleOffset + 12, TeleportCharY);
	WriteToPointer(CharAddy, TeleOffset, 1);
}

extern int GetCharX();
extern int GetCharY();
extern int GetMobCount();

int iKbKamiXRange,iKbKamiYRange;
bool bKbKami = false;

int RepeatNo;

int sDifX = 0;
int sDifY = 0;

//Sendkeys Function < Down >
void msSendDownKey(int MyDownKey)
{
	static HWND MShWnd;
	MShWnd = FindProcessWindow();
	LPARAM lparam = ( MapVirtualKey( MyDownKey, 0 ) << 16 ) + 1;
	PostMessage(MShWnd, WM_KEYDOWN, MyDownKey, MapVirtualKey(MyDownKey, 0) << 16);
}

//Sendkeys Function < Up >
void msSendUpKey(int MyUpKey)
{
	static HWND MShWnd;
	MShWnd = FindProcessWindow();
	LPARAM lparam = ( MapVirtualKey( MyUpKey, 0 ) << 16 ) + 1;
	PostMessage(MShWnd, WM_KEYUP, MyUpKey, MapVirtualKey(MyUpKey, 0) << 16);
}

__inline void Knockback(bool fXAxis, bool fPositive)
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

DWORD GetMobAtPos(int MobIndex)
{
    DWORD dwMobStruc = ReadPointer(MobAddy,Mob1Offset);
    if(MobIndex == 0)
    {
        dwMobStruc = iGetValue(dwMobStruc,Mob2Offset);
        return dwMobStruc;
    }
 
    dwMobStruc = iGetValue(dwMobStruc,-12);
    for(int i = 1;i < MobIndex;i++)
    {
        dwMobStruc = iGetValue(dwMobStruc,4);
    }
    dwMobStruc = iGetValue(dwMobStruc,0x14);
    return dwMobStruc;
}

POINT GetMobPos(DWORD dwBase)
{
	POINT p = POINT();
	DWORD dwBuf = iGetValue(dwBase,Mob3Offset);
	dwBuf = iGetValue(dwBuf,Mob4Offset);
	p.x = iGetValue(dwBuf,MobXOffset);
	p.y = iGetValue(dwBuf,MobYOffset);
	return p;
}

void ScriptRandomMob(bool bteleport)
{
	int iRanMobX = 0;
	int iRanMobY = 0;

	for(int iMob = 0;iMob < GetMobCount();iMob++)
    {
		DWORD dwMobStruc = GetMobAtPos(iMob);
		DWORD dwMob = dwMobStruc;

		if(ReadPointer(dwMob,MobDeathOffset))
		{
			msSendDownKey(0x08);
			msSendUpKey(0x08);

			POINT pos = GetMobPos(dwMob);

    		iRanMobX = pos.x;
	    	iRanMobY = pos.y;

			break;
		}
	}
	if(bteleport)
		KBTeleport(iRanMobX+sDifX,iRanMobY+sDifY);
	if(!bteleport)
	{
		Knockback(true, iRanMobX-iKbKamiXRange > GetCharX());
  		Knockback(false, iRanMobY-iKbKamiYRange > GetCharY());
   	  	WriteValue((LPDWORD)ReadPointer(CharAddy, CharpID), KBOffset, 1);
	}
}

void ScriptNearestMob(bool bteleport)
{
	int nScriptMobX = 0;
	int nScriptMobY = 0;
    int ScriptRange = 0;

    for(int iMob = 0;iMob < GetMobCount();iMob++)
    {
		DWORD dwMobStruc = GetMobAtPos(iMob);
		DWORD dwMob = dwMobStruc;

		if(ReadPointer(dwMob,MobDeathOffset))
		{
			msSendDownKey(0x08);
			msSendUpKey(0x08);

			POINT pos = GetMobPos(dwMob);

			int iTeleX = GetCharX() -  pos.x;
            int iTeleY = GetCharY() -  pos.y;
 
            if(iTeleX < 0) iTeleX = -iTeleX;
            if(iTeleY < 0) iTeleY = -iTeleY;

    		int TeleportRange = iTeleX + iTeleY;
     
            if((TeleportRange < ScriptRange || ScriptRange == 0) && pos.x != -1 && pos.y != -1)
            {
                ScriptRange = TeleportRange;
    			nScriptMobX = pos.x;
	    		nScriptMobY = pos.y;
            }
		}
	}
	if(bteleport)
		KBTeleport(nScriptMobX+sDifX,nScriptMobY+sDifY);
	if(!bteleport)
	{
		Knockback(true, nScriptMobX-iKbKamiXRange > GetCharX());
  		Knockback(false, nScriptMobY-iKbKamiYRange > GetCharY());
   	  	WriteValue((LPDWORD)ReadPointer(CharAddy, CharpID), KBOffset, 1);
	}
}

void vKbKami()
{
	while(bKbKami)
	{
		msSendDownKey(0x08);
		msSendUpKey(0x08);

		if(Form3::Instance->radioButton1->Checked)
		{
			ScriptRandomMob(false);
		}
		if(Form3::Instance->radioButton2->Checked)
		{
			ScriptNearestMob(false);
		}
		Sleep(1);
	}
	ExitThread(0);
}

void Form3::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(checkBox1->Checked)
	{
		iKbKamiXRange = Convert::ToInt32(textBox1->Text);
		iKbKamiYRange = Convert::ToInt32(textBox2->Text);
		bKbKami = true;
		NewThread(vKbKami);

		DefineColor(checkBox1, Green);
		this->radioButton1->Enabled = false;
		this->radioButton2->Enabled = false;
		this->textBox1->Enabled = false;
		this->textBox2->Enabled = false;
	}
	else
	{
		bKbKami = false;

		DefineColor(checkBox1, White);
		this->radioButton1->Enabled = true;
		this->radioButton2->Enabled = true;
		this->textBox1->Enabled = true;
		this->textBox2->Enabled = true;
	}
}
#pragma endregion

#pragma region Kami (Battle Mage) & Kami Loot
//Perfect Kami (Battle Mage) & Kami Loot
bool LeftWall(int X)
{
    return ((int)ReadPointer(WallAddy, LeftWallOffset) <= X);
}
 
bool TopWall(int Y)
{
    return ((int)ReadPointer(WallAddy, LeftWallOffset + 4) <= Y);
}
 
bool RightWall(int X)
{
    return ((int)ReadPointer(WallAddy, LeftWallOffset + 8) >= X);
}
 
bool BottomWall(int Y)
{
    return ((int)ReadPointer(WallAddy, LeftWallOffset + 12) >= Y);
}

void KamiBAMTeleport(int X, int Y)
{
    if (LeftWall(X) && RightWall(X) && TopWall(Y) && BottomWall(Y))
    {
        WriteToPointer(CharAddy, TeleXOffset, X);
        WriteToPointer(CharAddy, TeleYOffset, Y);
        WriteToPointer(CharAddy, TeleOffset, 1);
    }
}

extern int GetItemCount();
bool KamiSwitch = false;
int iOriginalX = 0, iOriginalY = 0;
int iRangeX = 100, iRangeY = 0;
bool bGoodMonster = false;
unsigned long MobStruct = 0;
unsigned long ulEBX;
 
bool KamiAutoLootSwitch;
int iItems = 20;
int iStopLootWhenItems;
bool bLoot = false;
const unsigned long ItemXYHookAddy = 0x005227E2; // 85 C0 75 4E 8D 4C ? ? C7 44 24 44 ? ? ? ? E8
unsigned long ulPtInRect;
 
long int iItemX = 0,iItemY = 0;

void __declspec(naked) _stdcall ItemHook_ASM()
{
  __asm
    {
        cmp dword ptr [esp], 0x005227E2
        jne NormalAPICall
        push eax
        mov eax,[esp+0x0C]
        mov [iItemX],eax
        mov eax,[esp+0x10]
        mov [iItemY],eax
        pop eax
 
        NormalAPICall:
        jmp dword ptr ulPtInRect
    }
}

int DelayInterval = 50; //Identifies lootInterval

void PerfectKami()
{
	KamiSwitch = true;
 
	while(KamiSwitch)
	{
		if(bLoot && GetItemCount() >= iItems)
		{
			for(unsigned char uc = 0; uc <= 200 && GetItemCount() > iStopLootWhenItems; uc++, Sleep(25))
			{
				KamiBAMTeleport(iItemX, iItemY);
			}
			continue;
		}
 
		if (!GetMobCount()) continue;
		ulEBX = ReadPointer(MobAddy, Mob1Offset);    
		if (bGoodMonster)
		{
			ulEBX = iGetValue(ulEBX, Mob2Offset);
		}
		else
		{
			ulEBX = iGetValue(ulEBX, -12);
			ulEBX = iGetValue(ulEBX, 0x14);
		}
 
		if (!iGetValue(ulEBX, MobDeathOffset))
		{
			bGoodMonster ^= true;
			continue;
		}

		ulEBX = iGetValue(ulEBX, Mob3Offset);
		ulEBX = iGetValue(ulEBX, Mob4Offset);    
 
		KamiBAMTeleport((int)iGetValue(ulEBX, MobXOffset) - iRangeX, (int)iGetValue(ulEBX, MobXOffset + 4) - iRangeY);
		Sleep(40);
	}
 
	if(KamiSwitch == false)
	{
		WriteToPointer(CharAddy, TeleOffset, 0);
		KamiBAMTeleport(iOriginalX, iOriginalY);
		ExitThread(0);
	}
}
 
void KamiAutoLoot()
{
    KamiAutoLootSwitch = true;
    HWND MShwnd = FindWindowA("MapleStoryClass", NULL);
    for(;; Sleep(10))
    {
        if(bLoot && GetItemCount() > iStopLootWhenItems)
        {
          PostMessage(MShwnd, WM_KEYDOWN, 0x60, MapVirtualKey(0x60, 0) << 16);
          Sleep(10);
        }
    }
	if(KamiAutoLootSwitch == false)
	{
		CloseThread(0);
	}
}
 
void Form3::textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if(this->textBox3->Text !="")
    {
        iRangeX = Convert::ToInt32(this->textBox3->Text);
    }
}
 
void Form3::textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if(this->textBox4->Text !="")
    {
        iRangeY = Convert::ToInt32(this->textBox4->Text);
    }
}
 
void Form3::textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
    if(this->textBox5->Text != "")
    {
        iItems = Convert::ToInt32(this->textBox5->Text);
    }
}

 
void Form3::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if(this->checkBox2->Checked == true)
    {
        iOriginalX = GetCharX();
        iOriginalY = GetCharY();
        NewThread(PerfectKami);

		DefineColor(checkBox2, Green);
		this->textBox3->Enabled = false;
		this->textBox4->Enabled = false;
    }
    else
    {
        KamiSwitch = false;

		DefineColor(checkBox2, White);
		this->textBox3->Enabled = true;
		this->textBox4->Enabled = true;
    }
}
 
void Form3::checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{/*
    if(this->checkBox3->Checked == true)
	{
		ulPtInRect = (unsigned long)GetProcAddress(GetModuleHandle("user32.dll"), "PtInRect");
        *(unsigned long*) ItemXYHookAddy = (unsigned long)ItemHook_ASM;
        bLoot = true;
        NewThread(KamiAutoLoot);

		DefineColor(checkBox3, Green);
		this->textBox5->Enabled = false;
    }
    else
    {
        bLoot = false;

		DefineColor(checkBox3, White);
		this->textBox5->Enabled = true;
    }
	*/
}
#pragma endregion

#pragma region Kami (DemonSlayer)

#pragma region DS_AutoAttack
//Kami_DS_AutoAttack
bool bKamiDSAutoAttackEnabled = false;
int iDSAttackCount = 8;
DWORD dwDSAttackKey = 0x43; //C

extern int GetAttackCount();
extern void SendKey(UINT key);
extern void SendKeyUp(UINT key);
extern DWORD GetKey(int Index);

void vDSAutoAttack()
{
	while(bKamiDSAutoAttackEnabled)
	{
		if(GetAttackCount() <= iDSAttackCount)
		{
			SendKey((UINT)dwDSAttackKey);
			Sleep(50);
			SendKeyUp((UINT)dwDSAttackKey);
			Sleep(10);
		}
	}
}

void Form3::comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	dwDSAttackKey = GetKey(this->comboBox1->SelectedIndex);
}

void Form3::checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox4->Checked == true)
	{
		iDSAttackCount = Convert::ToInt32(this->numericUpDown1->Text);
		bKamiDSAutoAttackEnabled = true;
		NewThread(vDSAutoAttack);

		DefineColor(checkBox4, Green);
		this->numericUpDown1->Enabled = false;
		this->comboBox1->Enabled = false;
	}
	else
	{
		bKamiDSAutoAttackEnabled = false;
		CloseThread(vDSAutoAttack);

		DefineColor(checkBox4, White);
		this->numericUpDown1->Enabled = true;
		this->comboBox1->Enabled = true;
	}
}
#pragma endregion

#pragma region DS_ChaosLock
//DS_ChaosLock
bool bDSChaosLockEnabled = false;
int iDSChaosLockCount = 8;
DWORD dwDSChaosLockKey = 0x4C; //L

void vDSChaosLock()
{
	while(bDSChaosLockEnabled)
	{
		if(GetAttackCount() >= iDSChaosLockCount)
		{
			SendKey((UINT)dwDSChaosLockKey);
			Sleep(200);
		}
	}
}

void Form3::comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	dwDSChaosLockKey = GetKey(this->comboBox2->SelectedIndex);
}

void Form3::checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox5->Checked == true)
	{
		iDSAttackCount = Convert::ToInt32(this->numericUpDown2->Text);
		bDSChaosLockEnabled = true;
		NewThread(vDSChaosLock);

		DefineColor(checkBox5, Green);
		this->numericUpDown2->Enabled = false;
		this->comboBox2->Enabled = false;
	}
	else
	{
		bDSChaosLockEnabled = false;
		CloseThread(vDSChaosLock);

		DefineColor(checkBox5, White);
		this->numericUpDown2->Enabled = true;
		this->comboBox2->Enabled = true;
	}
}
#pragma endregion

#pragma region DS_Skill
//DS_Skill_If_Fury_>=
bool bDSSkillIfFuryEnabled = false;
int iDSFury = 60;
DWORD dwDSSkillIfFuryKey = 0x42; //B

extern int GetCharMP();

void vDSSKillIfFury()
{
	while(bDSSkillIfFuryEnabled)
	{
		if(GetCharMP() >= iDSFury)
		{
			SendKey((UINT)dwDSSkillIfFuryKey);
			Sleep(200);
		}
	}
}

void Form3::comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{
	dwDSSkillIfFuryKey = GetKey(this->comboBox3->SelectedIndex);
}

void Form3::checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox6->Checked == true)
	{
		iDSFury = Convert::ToInt32(this->checkBox6->Text);
		bDSSkillIfFuryEnabled = true;
		NewThread(vDSSKillIfFury);

		DefineColor(checkBox6, Green);
		this->textBox6->Enabled = false;
		this->comboBox3->Enabled = false;
	}
	else
	{
		bDSSkillIfFuryEnabled = false;
		CloseThread(vDSSKillIfFury);

		DefineColor(checkBox6, White);
		this->textBox6->Enabled = true;
		this->comboBox3->Enabled = true;
	}
}
#pragma endregion

#pragma endregion