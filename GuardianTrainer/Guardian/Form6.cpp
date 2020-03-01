#include <windows.h>
#include "Form6.h"
#include "Functions.h"

using namespace Guardian;

#pragma warning(disable:4793) //Disable ASM function maked as "naked"
/***********************************************************************************/

#pragma region ScriptHacks

#pragma region SuperTubi
//SuperTubi
DWORD SuperTubiAddress = 0x004A5CE7; // 89 86 ?? ?? ?? ?? E8 ?? ?? ?? ?? 89 86 ?? ?? ?? ?? 5E C2 ?? ?? CC CC

void Form6::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox1->Checked)
	{
		WriteMemory(SuperTubiAddress, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
	else
	{
		WriteMemory(SuperTubiAddress, 6, 0x89, 0x86, 0x0C, 0x21, 0x00, 0x00);
	}
}

#pragma endregion

#pragma region NoCharKnockback (NoKB)
//NoCharKB
DWORD NoCharKnockBackAddress = 0x007FE1CB; // 01 00 00 00 D8 D1 DF E0 ?? C4 05 7A ?? DC 91 ?? ?? ?? ??

void Form6::checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox2->Checked)
	{
		WriteMemory(NoCharKnockBackAddress, 1, 0x00);
	}
	else
	{
		WriteMemory(NoCharKnockBackAddress, 1, 0x01);
	}
}
#pragma endregion

#pragma region HideDamage
//HideDamage
DWORD HideDamageAddress = 0x0079AF30; // 7E 22 8B 54 24 ?? 52 50 E8 ?? ?? ?? ?? 8B 88 ?? ?? ?? ?? 51 05

void Form6::checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox3->Checked)
	{
		WriteMemory(HideDamageAddress, 1, 0x7F);
	}
	else
	{
		WriteMemory(HideDamageAddress, 1, 0x7E);
	}
}
#pragma endregion

#pragma region Face Left After CC (FLACC)
//FLACC
DWORD FLACCAddress = 0x0046B5CA; // 83 E1 ?? 83 C9 ?? C6 44 24 ?? ?? 89 8E ?? ?? ?? ??

void Form6::checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox4->Checked)
	{
		WriteMemory(FLACCAddress, 6, 0xB9, 0x07, 0x00, 0x00, 0x00, 0x90);
	}
	else
	{
		WriteMemory(FLACCAddress, 6, 0x83, 0xE1, 0x01, 0x83, 0xC9, 0x06);
	}
}
#pragma endregion

#pragma region NoAranMovement
//No Aran Movement
DWORD NAMAddress1 = 0x00A88F4F; // 01 00 00 00 E8 ? ? ? ? 8D 8E ? ? ? ? 5E E9
DWORD NAMAddress2 = 0x007FE1CF; // D8 D1 DF E0 ? C4 05 7A ? DC 91 ? ? 00 00 DF (1st result)

void Form6::checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox5->Checked)
	{
		WriteMemory(NAMAddress1, 1, 0x00);
		WriteMemory(NAMAddress2, 2, 0xDB, 0xD2);
	}
    else
	{
		WriteMemory(NAMAddress1, 1, 0x01);
		WriteMemory(NAMAddress2, 2, 0xD8, 0xD1);
	}
}
#pragma endregion

#pragma region JumpDownAnywhere
//JDA - Jump Down Anywhere
DWORD JDAAddress1 = 0x00A8F28D; // 74 06 3B 5C 24 ?? 75 ?? 8B 4C 24 ?? 6A 01
DWORD JDAAddress2 = 0x00A8F2CA; // 7D ?? 8B 16 8B 52 ?? 8D 44 24 ?? 50
DWORD JDAAddress3 = 0x00A8F2E8; // 74 ?? 8B CF C7 87 ?? ?? ?? ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? 6A ?? 6A ?? 8B CF 89

void Form6::checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox6->Checked)
	{
		WriteMemory(JDAAddress1, 1, 0xEB);
		WriteMemory(JDAAddress2, 1, 0xEB);
		WriteMemory(JDAAddress3, 2, 0x90, 0x90);
	}
    else
	{
		WriteMemory(JDAAddress1, 1, 0x74);
		WriteMemory(JDAAddress2, 1, 0x7D);
		WriteMemory(JDAAddress3, 2, 0x74, 0x22);
	}
}
#pragma endregion

#pragma region ItsRainingMine
//IRM w/out walking - Its Raining Mine
DWORD IRMAddress = 0x00A323D4; // 74 ?? E8 ?? ?? ?? ?? 2B 86 ?? ?? ?? ?? 89 44 24 ?? DB 44 24 ?? 85 C0 (Multi Address)

void Form6::checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox7->Checked)
	{
		WriteMemory(IRMAddress, 2, 0x90, 0x90);
	}
    else
	{
		WriteMemory(IRMAddress, 2, 0x74, 0x7E);
	}
}
#pragma endregion

#pragma region FreezeMobs / MobLag
//MobLag aka Freeze Mobs
DWORD MobAddress= 0x006B95EA; // 77 ?? 89 54 24 ?? E9 ?? ?? ?? ?? 8D 49 ??

void Form6::checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox8->Checked)
	{
		WriteMemory(MobAddress, 1, 0xEB);
	}
	else 
	{
		WriteMemory(MobAddress, 1, 0x77);
	}
}
#pragma endregion

#pragma region VacRight (DC)
//VacRight (DC)
DWORD VacRightAddress1 = 0x00B4099E; // 8B 8E ? ? 00 00 6A 01 E8 ? ? ? FF EB

void Form6::checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox9->Checked)
	{
		WriteMemory(VacRightAddress1, 2, 0x75, 0x48);
	}
	else
	{
		WriteMemory(VacRightAddress1, 2, 0x75, 0x23);
	}
}
#pragma endregion

#pragma region Filter_Mob_Walking_Animation
//Filter Mob Walking Animation
DWORD FMWAAddress = 0x006B62D7; // 75 ?? 8B ?? ?? 8B 51 ?? 8B 82 ?? ?? ?? ?? 83 C1 ?? 6A 00 FF D0 EB ?? 8B ?? E8 ?? ?? ?? ?? 83 E0 01

void Form6::checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox10->Checked)
	{
		WriteMemory(FMWAAddress, 1, 0x74);
	}
	else
	{
		WriteMemory(FMWAAddress, 1, 0x75);
	}
}
#pragma endregion

#pragma region FullMobDisarm + OutOfRangeFullMobDisarm
//Full Mob Disarm
DWORD FMDAddress = 0x006B58F2; // 75 0E 8B CE E8 ?? ?? ?? FF 8B CE E8 ?? ?? ?? FF
DWORD OORMDAddress = 0x006B5B45; // 74 ? 39 9E ? ? ? ? 75 ? 8B 45 [Address + 8]

void Form6::checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox11->Checked)
	{
		WriteMemory(FMDAddress, 9, 0xE9, 0x72, 0x02, 0x00, 0x00, 0x90, 0x90, 0x90, 0x90); // 8B 45 ?? 83 C0 ?? 83 F8 ?? 77 ?? 39 9E
		WriteMemory(OORMDAddress, 1, 0x74); //OutOfRangeFullMobDisarm
	}
    else
	{
		WriteMemory(FMDAddress, 9, 0x75, 0x0E, 0x8B, 0xCE, 0xE8, 0xE5, 0x59, 0xFF, 0xFF);
		WriteMemory(OORMDAddress, 1, 0x75); //OutOfRangeFullMobDisarm
	}
}
#pragma endregion

#pragma region FasterMobsWalkingSpeed
//Faster Mob Walk Speed
DWORD FMWSAddress = 0x006C7933; // 75 ?? 33 DB 8D 55 ?? B9 ?? ?? ?? ?? E8 ?? ?? ?? ?? 89 85 ?? ?? ?? ??

void Form6::checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox12->Checked)
	{
		WriteMemory(FMWSAddress, 2, 0x90, 0x90);
	}
    else
	{
		WriteMemory(FMWSAddress, 2, 0x75, 0x9B);
	}
}
#pragma endregion

#pragma region SafeGodMode
//Safe Godmode
DWORD SafeGodmodeAddress = 0x00AD19FC; // 0F 84 ?? ?? ?? ?? 8B 83 ?? ?? ?? ?? 83 B8 ?? ?? ?? ?? ?? 75 ?? 8B 88 ?? ?? ?? ?? 51

void Form6::checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox13->Checked)
	{
		WriteMemory(SafeGodmodeAddress, 2, 0x90, 0xE9);
	}
	else
	{
		WriteMemory(SafeGodmodeAddress, 2, 0x0F, 0x84);
	}
}
#pragma endregion

#pragma region BlinkGodMode
//Blink Godmode
DWORD BlinkGodmodeAddress1 = 0x00A7EA26; // 83 ? 1E ? 8B ? E8 ? ? ? FF 85 ? 7D [1st result]
DWORD BlinkGodmodeAddress2 = 0x00A7EA1B; // 7E ? 8B ? E8 ? ? ? FF 8B ? 83 [1st result]

void Form6::checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox14->Checked)
	{
		WriteMemory(BlinkGodmodeAddress1, 2, 0x83, 0xCE);
		WriteMemory(BlinkGodmodeAddress2, 2, 0xEB, 0x09);
	}
	else
	{
		WriteMemory(BlinkGodmodeAddress1, 2, 0x83, 0xEF);
		WriteMemory(BlinkGodmodeAddress2, 2, 0x7E, 0x21);
	}
}
#pragma endregion

#pragma region PhysicalGodMode
//Physical GodMode
DWORD PGAddress = 0x00AD19FC; // 0F 84 ?? ?? ?? ?? 8B 83 ?? ?? ?? ?? 83 B8 ?? ?? ?? ?? ?? 75 ?? 8B 88 ?? ?? ?? ?? 51

void Form6::checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox15->Checked)
	{
		WriteMemory(PGAddress, 2, 0x90, 0xE9);
	}
    else
	{
		WriteMemory(PGAddress, 2, 0x0F, 0x84);
	}
}
#pragma endregion

#pragma region CPUHack
//CPU Hack
DWORD CPUAddress1 = 0x0066C37B; // E8 ?? ?? ?? ?? C6 45 ?? ?? 85 F6 74 ?? 8B 06 8B 48 ?? 56 FF D1 47
DWORD CPUAddress2 = 0x0066F10D; // E8 ?? ?? ?? ?? 8B 06 8B 48 ?? 56 C6 45 ?? ?? FF D1 8B 75 ?? 43 3B 5D ??
DWORD CPUAddress3 = 0x006738C9; // E8 ?? ?? ?? ?? 8B 0E 8B 51 ?? 56 C6 45 ?? ?? FF D2 8B 45 ?? 40 3B 45 ?? 89 45 ?? 0F 8C ?? ?? ?? ?? 8B 5D DC

void Form6::checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox16->Checked)
	{
		WriteMemory(CPUAddress1, 5, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(CPUAddress2, 5, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(CPUAddress3, 5, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
    else
	{
		WriteMemory(CPUAddress1, 5, 0xE8, 0x10, 0x84, 0xFF, 0xFF);
		WriteMemory(CPUAddress2, 5, 0xE8, 0x2E, 0xD3, 0xFF, 0xFF);
		WriteMemory(CPUAddress3, 5, 0xE8, 0x52, 0xD7, 0xFF, 0xFF);
	}
}
#pragma endregion

#pragma region NoBackground/Cloud
//No Background/Cloud
DWORD NoBackgroundAddress1 = 0x0066F10D; // E8 ?? ?? ?? ?? 8B 06 8B 48 ?? 56 C6 45 ?? ?? FF D1 8B 75 ?? 43
DWORD NoBackgroundAddress2 = 0x0066DFFB; // E8 ?? ?? ?? ?? 8B 06 8B 48 08 56 C7 44 24 34 FF FF FF FF FF D1 8B 4C 24 28 64 89 0D 00 00 00 00 59 5F 5E 5D 83 C4 24

void Form6::checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox17->Checked)
	{
		WriteMemory(NoBackgroundAddress1, 5, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(NoBackgroundAddress2, 5, 0x90, 0x90, 0x90, 0x90, 0x90);
	}
    else
	{
		WriteMemory(NoBackgroundAddress1, 5, 0xE8, 0x2E, 0xD3, 0xFF, 0xFF);
		WriteMemory(NoBackgroundAddress2, 5, 0xE8, 0xE0, 0x8C, 0xFF, 0xFF);
	}
}
#pragma endregion

#pragma region ViewSwear
//View Swear
DWORD ViewSwearAddress = 0x007FB6CB; // 74 ?? 80 3E ?? 75 ?? 0F B6 13 52 FF 15 ?? ?? ?? ??

void Form6::checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox18->Checked)
	{
		WriteMemory(ViewSwearAddress, 2, 0x90, 0x90);
	}
	else
	{
		WriteMemory(ViewSwearAddress, 2, 0x74, 0x27);
	}
}
#pragma endregion

#pragma region PinTyper
//Pin Typer
DWORD PTAddress1 = 0x0064AEE6; // 0F 85 ?? ?? ?? ?? 68 ?? ?? ?? ?? B9 ?? ?? ?? ?? E8 ?? ?? ?? ?? 89 44 24 ?? C6 44 24 ?? ?? 85 C0 0F 84 ?? ?? ?? ?? 6A ?? 8B C8
DWORD PTAddress2 = 0x0064C5B7; // 0F 85 ?? ?? ?? ?? 68 ?? ?? ?? ?? B9 ?? ?? ?? ?? E8 ?? ?? ?? ?? 89 44 24 ?? C7 44 24 ?? ?? ?? ?? ?? 85 C0 0F 84 ?? ?? ?? ?? 6A ?? 8B C8

void Form6::checkBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox19->Checked)
	{
		WriteMemory(PTAddress1, 2, 0x0F, 0x84);
		WriteMemory(PTAddress2, 2, 0x0F, 0x84);
	}
    else
	{
		WriteMemory(PTAddress1, 2, 0x0F, 0x85);
		WriteMemory(PTAddress2, 2, 0x0F, 0x85);
	}
}
#pragma endregion

#pragma region MobsFilter/ForceFadeMobs
//Mobs filter a.k.a ForceFade (Renamed by Leech)
DWORD ForceAddress = 0x006B959D; // 77 ? 0F B6 80 ? ? ? 00 FF 24 85 ? ? ? 00 8B 54 24 ? 52 E8 ? ? ? FF C2 08 00 [2nd result]

void Form6::checkBox20_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox20->Checked)
	{
		WriteMemory(ForceAddress, 1, 0xEB);
	}
	else
	{
		WriteMemory(ForceAddress, 1, 0x77);
	}
}
#pragma endregion

#pragma region PerfectLoot
//Perfect loot
DWORD PLSuperTubiAddress = 0x004A5CE7; // 89 86 ?? ?? ?? ?? E8 ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 5E C2 [SuperTubi, 1st result]
DWORD PLInstantDropAddress = 0x00521095; // 0D ?? ?? ?? ?? 83 C4 ?? E9 ?? ?? ?? ?? DD 05 ?? ?? ?? ?? DC C9 [InstantDrop, 1st result]
DWORD PLNoLootAnimationAddress = 0x00440B29; // 81 FE ?? ?? ?? ?? 0F 8D ?? ?? ?? ?? 85 ED 0F 84 ?? ?? ?? ?? 81 FE ?? ?? ?? ?? BF ?? ?? ?? ?? 7E ?? B8 ?? ?? ?? ?? 2B C6 [NoLootAnimation, 1st result]

void Form6::checkBox21_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox21->Checked)
	{
		WriteMemory(PLSuperTubiAddress, 6, 0x90, 0x90, 0x90, 0x90 ,0x90, 0x90);
		WriteMemory(PLInstantDropAddress, 1, 0x25);
		WriteMemory(PLNoLootAnimationAddress, 6, 0x81, 0xFE, 0x00, 0x00, 0x00, 0x00);
	}
	else
	{
		WriteMemory(PLSuperTubiAddress, 6, 0x89, 0x86, 0x0C, 0x21, 0x00, 0x00);
		WriteMemory(PLInstantDropAddress, 1, 0x0D);
		WriteMemory(PLNoLootAnimationAddress, 6, 0x81, 0xFE, 0xBC, 0x02, 0x00, 0x00);
	}
}
#pragma endregion

#pragma region InstantDrop
//Instant Drop
DWORD InstantDropAddress = 0x00521095; // 0D ?? ?? ?? ?? 83 C4 ?? E9 ?? ?? ?? ?? DD 05 ?? ?? ?? ?? DC C9 D9 C9

void Form6::checkBox22_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox22->Checked)
	{
		WriteMemory(InstantDropAddress, 1, 0x25);
	}
	else
	{
		WriteMemory(InstantDropAddress, 1, 0x0D);
	}
}
#pragma endregion

#pragma region WiredItemDrop
//Wired Item Drop
DWORD WiredItemDropAddress = 0x00521073; // 74 ** DD D8 DD D8 DD 05 ** ** ** ** DD 05 ** ** ** ** DD 14 24 8B 44 24 ** 3B 44 24 ** 7F ** DD D9

void Form6::checkBox23_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox23->Checked)
	{
		WriteMemory(WiredItemDropAddress, 1, 0x75);
	}
	else
	{
		WriteMemory(WiredItemDropAddress, 1, 0x74);
	}
}
#pragma endregion

#pragma region HideLoginInfo
//Hide Login Info
DWORD HideLoginInfoAddress = 0x004E737C; // 74 ** 80 38 ** 0F 85 ** ** ** ** 8B 86 ** ** ** ** 89 44 24 ** 85 C0 75 ** 68

void Form6::checkBox24_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox24->Checked)
	{
		WriteMemory(HideLoginInfoAddress, 1, 0xEB);
	}
	else
	{
		WriteMemory(HideLoginInfoAddress, 1, 0x74);
	}
}
#pragma endregion

#pragma region ShowPassword
//Show Password
DWORD ShowPasswordAddress = 0x004E47DF; // 74 ** 33 FF 89 ** ** ** 8D 4C ** ** C6 44 ** ** ** 33 F6 E8 ** ** ** ** 85 C0 7E ** EB ** 8D

void Form6::checkBox25_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox25->Checked)
	{
		WriteMemory(ShowPasswordAddress, 1, 0x75);
	}
	else
	{
		WriteMemory(ShowPasswordAddress, 1, 0x74);
	}
}
#pragma endregion

#pragma region RainingMobs
//Raining Mobs
DWORD RainingMobAddress = 0x006C5D26; // D9 C0 D8 C9 D9 C0

void Form6::checkBox26_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox26->Checked)
	{
		WriteMemory(RainingMobAddress, 2, 0xD9, 0xC1);
	}
	else
	{
		WriteMemory(RainingMobAddress, 2, 0xD9, 0xC0);
	}
}
#pragma endregion

#pragma region AlwaysSit
//Always Sit
DWORD AlwaysSitAddress = 0x00A8B181; // 74 ** 8B ** ** ** 83 ** ** 83 ** ** EB ** 83

void Form6::checkBox27_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox27->Checked)
	{
		WriteMemory(AlwaysSitAddress, 1, 0x75);
	}
	else
	{
		WriteMemory(AlwaysSitAddress, 1, 0x74);
	}
}
#pragma endregion

#pragma region SlowMobs
//Slow Mob
DWORD SlowMobAddress = 0x006C60CB; // B8 ? ? ? ? 39 ? ? 7C ? 85 ? 75 ? 39

void Form6::checkBox28_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox28->Checked)
	{
		WriteMemory(SlowMobAddress, 5, 0xB8, 0x00, 0x00, 0x00, 0x00);
	}
	else
	{
		WriteMemory(SlowMobAddress, 5, 0xB8, 0xE8, 0x03, 0x00, 0x00);
	}
}
#pragma endregion

#pragma region AllMobsKnockback
//All Mob KB (Mob Freeze)
DWORD AllMobKBAddress = 0x006B623F; // 74 ? 8B CE E8 ? ? ? ? 85 C0 75 ? 8B CE E8 ? ? ? FF 8B

void Form6::checkBox29_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox29->Checked)
	{
		WriteMemory(AllMobKBAddress, 1, 0x75);
	}
	else
	{
		WriteMemory(AllMobKBAddress, 1, 0x74);
	}
}
#pragma endregion

#pragma region FastTeleportMobs
//Fast Teleport Mob
DWORD FTMAddress = 0x006C6A44; // 0F 8C ?? ?? ?? ?? 8B 96 ?? ?? ?? ?? 52 53 E8 ?? ?? ?? ?? 0F BF 4F ?? 2B C1

void Form6::checkBox30_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox30->Checked)
	{
		WriteMemory(FTMAddress, 2, 0x0F, 0x84);
	}
	else
	{
		WriteMemory(FTMAddress, 2, 0x0F, 0x8C);
	}
}
#pragma endregion

#pragma region InstantAirLoot
//Instant Air Loot
DWORD IALAddress = 0x0052222F; // 75 68 2B 56 ** 81 FA ** ** ** ** 7C ** 8B ** ** 3D

void Form6::checkBox31_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox31->Checked)
	{
		WriteMemory(IALAddress, 1, 0x74);
	}
	else
	{
		WriteMemory(IALAddress, 1, 0x75);
	}
}
#pragma endregion

#pragma region AntiAircheck(Aran,Bowman,Mage)
//Anti Airchecks (Aran, Bowman, Mage)
DWORD AranAntiAircheckAddress = 0x00AB7524; // 8D 8D ?? ?? ?? ?? E8 ?? ?? ?? ?? 8B 85 ?? ?? ?? ?/ E9 ?? ?? ?? ?? E8 ?? ?? ?? ?? 8B C8 E8 ?? ?? ?? ?? 85 C0 74 ?? 8B 95 ?? ?? ?? ?? 52 E8 ?? ?? ?? ?? 83 C4 ?? 85 C0 74 [2nd result]
DWORD BowmanAntoAircheckAddress = 0x00A9485B; // 75 ?? 8B 8D ?? ?? ?? ?? E8 ?? ?? ?? ?? 85 C0 75 
DWORD MageAntiAircheckAddress = 0x00AE0F08; // 74 ?? 8B 8D ?? ?? ?? ?? E8 ?? ?? ?? ?? 85 C0 75 ?? 8B

void Form6::checkBox32_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox32->Checked)
	{
		WriteMemory(AranAntiAircheckAddress, 6, 0xEB, 0x14, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(BowmanAntoAircheckAddress, 1, 0xEB); //Not sure it's 0xEB or 0x74
		WriteMemory(MageAntiAircheckAddress, 1, 0xEB);
	}
	else
	{
		WriteMemory(AranAntiAircheckAddress, 6, 0x8D, 0x8D, 0xE0, 0xF4, 0xFF, 0xFF);
		WriteMemory(BowmanAntoAircheckAddress, 1, 0x75);
		WriteMemory(MageAntiAircheckAddress, 1, 0x74);
	}
}
#pragma endregion

#pragma region CycloneMissGodMode
//Cyclone Miss Godmode
DWORD CycloneMissGodmodeAddress = 0x00A86840; // F7 D8 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC 8B 01 8B 50 ? FF D2 8B 88 ? ? 00 00 51 [4th result]

void Form6::checkBox33_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox33->Checked)
	{
		WriteMemory(CycloneMissGodmodeAddress, 2, 0xF7, 0xD0);
	}
	else
	{
		WriteMemory(CycloneMissGodmodeAddress, 2, 0xF7, 0xD8);
	}
}
#pragma endregion

#pragma region NoMobsKnockback
//No Mob KB
DWORD NoMobKBAddress = 0x00811566; // 75 ?? 57 E8 ?? ?? ?? ?? 83 C4 ?? 85 C0 0F 84 ?? ?? ?? ?? E9 ?? ?? ?? ?? 83 FD

void Form6::checkBox34_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox34->Checked)
	{
		WriteMemory(NoMobKBAddress, 1, 0x74);
	}
	else
	{
		WriteMemory(NoMobKBAddress, 1, 0x75);
	}
}
#pragma endregion

#pragma region CSMobsLag
//CS Mob Lag
DWORD CSMobLagAddress = 0x006C6D6E; // B8 ?? ?? ?? ?? 5F 5E 5B 8B E5 5D C2 ?? ?? 8D 4E ?? E8

void Form6::checkBox35_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox35->Checked)
	{
		WriteMemory(CSMobLagAddress, 2, 0xB8, 0x00);
	}
	else
	{
		WriteMemory(CSMobLagAddress, 2, 0xB8, 0x01);
	}
}
#pragma endregion

#pragma region UnlimitedSiegeMode
//Unlimited Seige Mode (Mech)
DWORD USMAddress1 = 0x00A60B18; // 0f 85 ? ? ? ? 8b 06 8b 50 ? 8b ce ff d2 8b 88 [1st result]
DWORD USMAddress2 = 0x00A773F7; // 0f 8f ? ? ? ? 0f 84 ? ? ? ? 3d ? ? ? ? 0f 84 [4th result] (Multi Address)
DWORD USMAddress3 = 0x00B47EFD; // 0f 84 ? ? ? ? 6a 01 6a 01

void Form6::checkBox36_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox36->Checked)
	{
		WriteMemory(USMAddress1, 6, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
		WriteMemory(USMAddress2, 6, 0xE9, 0x0D, 0x02, 0x00, 0x00, 0x90);
		WriteMemory(USMAddress3, 6, 0xE9, 0xA8, 0x00, 0x00, 0x00, 0x90);
	}
	else
	{
		WriteMemory(USMAddress1, 6, 0x0F, 0x85, 0xBD, 0x02, 0x00, 0x00);
		WriteMemory(USMAddress2, 6, 0x0F, 0x8F, 0x82, 0x01, 0x00, 0x00);
		WriteMemory(USMAddress3, 6, 0x0F, 0x84, 0xA7, 0x00, 0x00, 0x00);
	}
}
#pragma endregion

#pragma region FallThroughFloor
//Fall Through Floor
DWORD FTFAddress = 0x00AAD388; // 02 00 00 00 89 ? ? ? 89 ? ? ? 89 ? ? ? C7 (Multi Address)

void Form6::checkBox37_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox37->Checked)
	{
		WriteMemory(FTFAddress, 1, 0x00);
	}
	else
	{
		WriteMemory(FTFAddress, 1, 0x02);
	}
}
#pragma endregion

#pragma region AutoAggro
//Auto Aggro
DWORD AutoAggroAddy = 0x00B435CC; // E8 ?? ?? ?? ?? 8B F8 3B FB 75 ?? 33 C0 5F 5E 5B 8B E5 5D
DWORD AutoAggroCall = 0x00B3A370;
DWORD AutoAggroRet = AutoAggroAddy + 5;

void __declspec(naked) AutoAggroASM()
{
	_asm
	{
		call dword ptr ds:[AutoAggroCall]
		mov edx,ds:[0x00F5BB4C] //CharAddy
		mov edx,ds:[edx+0x23D0] //CharpID
		mov edx,ds:[edx+0x0C] //Aggro ID // 8B 42 ?? 8B CE FF D0 8B 16 8B D8 8B 42 ?? 8B CE [3rd]
		mov ds:[esi+0x2B0],edx // 83 BE ? ? 00 00 00 74 ? 8D 8E ? ? 00 00 E8 ? ? ? FF 85 C0 75
		jmp dword ptr ds:[AutoAggroRet]
	}
}

void Form6::checkBox38_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox38->Checked)
	{
		Jump(AutoAggroAddy, AutoAggroASM, 0);
	}
	else
	{
		WriteMemory(AutoAggroAddy, 5, 0xE8, 0x9F, 0x6D, 0xFF, 0xFF);
	}
}
#pragma endregion

#pragma region FusionAttack
//Fusion Attack
DWORD FusionAttackAddy = 0x006B773E; // 89 34 81 40 89 44 24 ?? 8B 44 24 ?? 85 C0
DWORD FusionAttackRet = FusionAttackAddy + 8;

void __declspec(naked) FusionAttackASM()
{
	_asm
	{
		Hook:
		mov ds:[ecx+eax*4],esi
		inc eax
		cmp eax,ds:[esp+0x5C] // 3B 44 24 ??e 0F 8D ?? ?? ?? ?? 8D 4C 24 ?? 51 E8 ?? ?? ?? ?? 8B 70 ?? 8B 96 ?? ?? ?? ?? 52 (3rd result)
		jl Hook
		mov ds:[esp+0x18],eax
		jmp dword ptr ds:[FusionAttackRet]
	}
}

void Form6::checkBox39_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox39->Checked)
	{
		Jump(FusionAttackAddy, FusionAttackASM, 3); // 0x90, 0x90, 0x90
	}
	else
	{
		WriteMemory(FusionAttackAddy, 8, 0x89, 0x34, 0x81, 0x40, 0x89, 0x44, 0x24, 0x18);
	}
}
#pragma endregion

#pragma region ItemVac(CharPosition)
//ItemVac(CharPosition)
DWORD ItemVacAddy = 0x006886A4; // E8 ?? ?? ?? ?? 8B C8 8B 44 24 ?? 89 38 5F 89 48 ?? 5E C2 ?? ?? CC CC CC CC CC CC CC 56 8D B1 ?? ?? ?? ?? 57 8D 4E ?? E8 ?? ?? ?? ?? [4th result]
DWORD ItemVacCall = 0x00699B60;
DWORD ItemVacRet = ItemVacAddy + 5;

void __declspec(naked) ItemVacASM()
{
	_asm
	{
		call dword ptr ds:[ItemVacCall] //Opcode
		mov ecx,eax
		mov eax,ds:[esp+0x0C]
		mov edi,ds:[0x00F5BB4C] //CharAddy
		mov edi,ds:[edi+0x5F08] //CharOriginX
		mov [eax],edi
		pop edi
		mov ecx,ds:[0x00F5BB4C] //CharAddy
		mov ecx,ds:[ecx+0x5F0C] //CharOriginY
		mov ds:[eax+0x04],ecx
		pop esi
		ret 0004
	}
}

void Form6::checkBox40_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox40->Checked)
	{
		Jump(ItemVacAddy, ItemVacASM, 0);
	}
	else
	{
		WriteMemory(ItemVacAddy, 5, 0xE8, 0xB7, 0x14, 0x01, 0x00);
	}
}
#pragma endregion

#pragma region WalkingUnrandomLeft
//Walking Unrandom Left
DWORD WalkingUnrandomLeftAddress = 0x00B4021B; // 0F 8F ? ? 00 00 83 BE ? ? 00 00 00 0F 84 (1st result)

void Form6::checkBox41_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox41->Checked)
	{
		WriteMemory(WalkingUnrandomLeftAddress, 6, 0xE9, 0xA9, 0x00, 0x00, 0x00, 0x90);
	}
	else
	{
		WriteMemory(WalkingUnrandomLeftAddress, 6, 0x0F, 0x8F, 0x9E, 0x01, 0x00, 0x00);
	}
}
#pragma endregion

#pragma region WalkingUnrandomRight
//Walking Unrandom Right
DWORD WalkingUnrandomRightAddress = 0x00B4021B; // 0F 8F ? ? 00 00 83 BE ? ? 00 00 00 0F 84 (1st result)

void Form6::checkBox42_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox42->Checked)
	{
		WriteMemory(WalkingUnrandomRightAddress, 6, 0xE9, 0x95, 0x00, 0x00, 0x00, 0x90);
	}
	else
	{
		WriteMemory(WalkingUnrandomRightAddress, 6, 0x0F, 0x8F, 0x9E, 0x01, 0x00, 0x00);
	}
}
#pragma endregion

#pragma region JumpingUnrandomLeft
//Jumping Unrandom Left
DWORD JumpingUnrandomLeftAddress = 0x00B4071F; // 0F 84 ? ? 00 00 83 BE ? 00 00 00 00 0F 84 ? ? 00 00 8B 50 ?

void Form6::checkBox43_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox43->Checked)
	{
		WriteMemory(JumpingUnrandomLeftAddress, 6, 0xE9, 0x99, 0x02, 0x00, 0x00, 0x90);
	}
	else
	{
		WriteMemory(JumpingUnrandomLeftAddress, 6, 0x0F, 0x84, 0x1B, 0x01, 0x00, 0x00);
	}
}
#pragma endregion

#pragma region JumpingUnrandomRight
//Jumping Unrandom Right
DWORD JumpingUnrandomRightAddress = 0x00B4071F; // 0F 84 ? ? 00 00 83 BE ? 00 00 00 00 0F 84 ? ? 00 00 8B 50 ?

void Form6::checkBox44_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox44->Checked)
	{
		WriteMemory(JumpingUnrandomRightAddress, 6, 0xE9, 0x7A, 0x02, 0x00, 0x00, 0x90);
	}
	else
	{
		WriteMemory(JumpingUnrandomRightAddress, 6, 0x0F, 0x84, 0x1B, 0x01, 0x00, 0x00);
	}
}
#pragma endregion

#pragma region InstantMining
//Instant Mining
DWORD InstantMiningAddress1 = 0x00A92A62; // 7C ?? 83 BE ?? ?? ?? ?? ?? 7F ?? 6A ?? 6A ?? 8B CE E8 ?? ?? ?? ?? 5F 5E //Bypass Timestamp
DWORD InstantMiningAddress2 = 0x00A92A6B; // 7F ?? 6A ?? 6A ?? 8B CE E8 ?? ?? ?? ?? 5F 5E 83 C4 ?? C2 ?? ?? 8B //Bypass Slash-limit
DWORD InstantMiningAddress3 = 0x00AA02E7; // 75 ?? 55 6A ?? 6A ?? 8B CB E8 ?? ?? ?? ?? 5F 5E 5D 5B C2 ?? ?? 8B 0D ?? ?? ?? ?? //Bypass time between mines

void Form6::checkBox45_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox45->Checked)
	{
		WriteMemory(InstantMiningAddress1, 2, 0x90, 0x90);
		WriteMemory(InstantMiningAddress2, 1, 0xEB);
		WriteMemory(InstantMiningAddress3, 2, 0x90, 0x90);
	}
	else
	{
		WriteMemory(InstantMiningAddress1, 2, 0x7C, 0x41);
		WriteMemory(InstantMiningAddress2, 1, 0x7F);
		WriteMemory(InstantMiningAddress3, 2, 0x75, 0x13);
	}
}
#pragma endregion

#pragma region InstantCharge100%DMG
//Instant Charge 100% DMG
DWORD InstantChargeAddress1 = 0x00ABC706; // 7C ?? 8B E8 89 6C 24 ?? 39 7C 24 ?? 74 ?? 8B E8 89 6C 24 ?? 8D //get_max_gauge_time
DWORD InstantChargeAddress2 = 0x00A66289; // 0F 84 ?? ?? ?? ?? E8 ?? ?? ?? ?? 2B 86 ?? ?? ?? ?? 8B 7D ?? B8 ?? ?? ?? ?? 0F 98 //Instant Charge Skill Check 1
DWORD InstantChargeAddress3 = 0x00AE75D1; // 7C ?? 8B 17 52 E8 ?? ?? ?? ?? 83 C4 ?? 8B D8 E8 ?? ?? ?? ?? 03 D8 8D 44 24 ?? 50 57 //Instant Charge Skill Check 2

void Form6::checkBox46_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox46->Checked)
	{
		WriteMemory(InstantChargeAddress1, 2, 0x90, 0x90);
		WriteMemory(InstantChargeAddress2, 2, 0x90, 0xE9);
		WriteMemory(InstantChargeAddress3, 2, 0x90, 0x90);
	}
	else
	{
		WriteMemory(InstantChargeAddress1, 2, 0x7C, 0x06);
		WriteMemory(InstantChargeAddress2, 2, 0x0F, 0x84);
		WriteMemory(InstantChargeAddress3, 2, 0x7C, 0x3A);
	}
}
#pragma endregion

#pragma region ReactorDEM
//Reactor DEM //Hit boxes with no cooldown
DWORD ReactorDEMAddress = 0x00A94D91; // 74 ?? 83 7D ?? ?? 74 ?? 8B 8D ?? ?? ?? ?? 81 C1 ?? ?? ?? ?? E8 ?? ?? ?? ?? 8B F0 F7 DE 1B F6 83

void Form6::checkBox47_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox47->Checked)
	{
		WriteMemory(ReactorDEMAddress, 2, 0x90, 0x90);
	}
	else
	{
		WriteMemory(ReactorDEMAddress, 2, 0x74, 0x73);
	}
}
#pragma endregion

#pragma region OneHitGodMode
//1 hit Godmode
DWORD OneHitGodmodeAddress = 0x0055D9F0; // 33 C0 C3 CC CC CC CC CC CC CC CC CC CC CC CC CC B8 ?? ?? ?? ?? C3 CC CC CC CC CC CC CC CC (Multi Address)

void Form6::checkBox48_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox48->Checked)
	{
		WriteMemory(OneHitGodmodeAddress, 2, 0x90, 0x90);
	}
	else
	{
		WriteMemory(OneHitGodmodeAddress, 2, 0x33, 0xC0);
	}
}
#pragma endregion

#pragma region PerfectSilence
//Perfect Silence
DWORD PSAddress1 = 0x0044DD56; // 74 ?? 66 83 F8 ?? 75 ?? 83 C6 ?? 89 75 ?? 52 8D 45 ?? 8D 4B ?? 50 E8 ?? ?? ?? ?? 8B F8 85 FF 74 ?? 8B 07 85 C0 74 (1st result)
DWORD PSAddress2 = 0x004431CA; // 0F 85 ?? ?? ?? ?? 8B 75 ?? 89 7D ?? 39 7D ?? 75 ?? 56 8D 4B ?? E8 ?? ?? ?? ?? 84 C0 0F 85

void Form6::checkBox50_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox50->Checked)
	{
		WriteMemory(PSAddress1, 5, 0xE9, 0x86, 0x00, 0x00, 0x00); //CSoundMan::PlaySE
		WriteMemory(PSAddress2,	5, 0xE9, 0x97, 0x04, 0x00, 0x00); //CSoundMan::PlayBGM
	}
	else
	{
		WriteMemory(PSAddress1, 6, 0x74, 0x06, 0x66, 0x83, 0xF8, 0x5C);
		WriteMemory(PSAddress2, 6, 0x0F, 0x85, 0x96, 0x04, 0x00, 0x00);
	}
}
#pragma endregion

#pragma region NDFA
//No Delay Final Attack / Advance
DWORD NDFAAddress = 0x00AD9D5D; // 83 BE ? ? 00 00 00 0F 84 ? ? 00 00 2B AE ? ? 00 00

void Form6::checkBox49_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox49->Checked == true)
	{
		this->comboBox1->Enabled = false;

		//NDFA - Fighter
		if(this->comboBox1->SelectedIndex == 0) 
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0xE2, 0xC8, 0x10, 0x00, 0x90, 0x90, 0x90);}

		//NDFA - Page
		else if(this->comboBox1->SelectedIndex == 1)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x82, 0x4F, 0x12, 0x00, 0x90, 0x90, 0x90);}

		//NDFA - Spearman
		else if(this->comboBox1->SelectedIndex == 2) 
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x22, 0xD6, 0x13, 0x00, 0x90, 0x90, 0x90);}

		//NDFA - Hunter
		else if(this->comboBox1->SelectedIndex == 3)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x61, 0x4D, 0x2F, 0x00, 0x90, 0x90, 0x90);}

		//NDFA - CrossBowMaster
		else if(this->comboBox1->SelectedIndex == 4)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x01, 0xD4, 0x30, 0x00, 0x90, 0x90, 0x90);}

		//NDFA - SoulMaster
		else if(this->comboBox1->SelectedIndex == 5)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x4A, 0x63, 0xA9, 0x00, 0x90, 0x90, 0x90);}

		//NDFA - WindBreaker
		else if(this->comboBox1->SelectedIndex == 6)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0xCA, 0xE7, 0xC7, 0x00, 0x90, 0x90, 0x90);}

		//NDFA - WildHunter
		else if(this->comboBox1->SelectedIndex == 7)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0xE9, 0x10, 0xF9, 0x01, 0x90, 0x90, 0x90);}

		//NDFA - Mercedes
		else if(this->comboBox1->SelectedIndex == 8)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x66, 0x7A, 0x60, 0x01, 0x90, 0x90, 0x90);}

		//NDFA - Evan(DragonSpark)
		else if(this->comboBox1->SelectedIndex == 9)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x74, 0xFB, 0x51, 0x01, 0x90, 0x90, 0x90);}

		//NDFA - Aran
		else if(this->comboBox1->SelectedIndex == 10)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0xEA, 0xF5, 0x41, 0x01, 0x90, 0x90, 0x90);}

		//Advance NDFA - Aran
		else if(this->comboBox1->SelectedIndex == 11)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x0C, 0x44, 0x42, 0x01, 0x90, 0x90, 0x90);}

		//Advance NDFA - WildHunter
		else if(this->comboBox1->SelectedIndex == 12)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x0B, 0x5F, 0xF9, 0x01, 0x90, 0x90, 0x90);}

		//Advance NDFA - Mercedes
		else if(this->comboBox1->SelectedIndex == 13)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x8C, 0xC8, 0x60, 0x01, 0x90, 0x90, 0x90);}

		//Advance NDFA - Hero
		else if(this->comboBox1->SelectedIndex == 14)
		{WriteMemory(NDFAAddress, 13, 0xC7, 0x86, 0x9C, 0x4E, 0x00, 0x00, 0x0D, 0x17, 0x11, 0x00, 0x90, 0x90, 0x90);}
	}
	else
	{
		WriteMemory(NDFAAddress, 13, 0x83, 0xBE, 0x50, 0x4B, 0x00, 0x00, 0x00, 0x0F, 0x84, 0x38, 0x01, 0x00, 0x00);
		this->comboBox1->Enabled = true;
	}
}
#pragma endregion

#pragma region MercedesComboBlind
DWORD MercedesComboBlindAddress = 0x00AE5EF6; // 74 ?? 8B 53 ?? 52 53 E8 ?? ?? ?? ?? 83 C4 ?? 50 8B CF E8

void Form6::checkBox51_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox51->Checked == true)
	{
		WriteMemory(MercedesComboBlindAddress, 2, 0xEB, 0x19); //jmp [opcode]
	}
	else
	{
		WriteMemory(MercedesComboBlindAddress, 2, 0x74, 0x19); //je [opcode]
	}
}
#pragma endregion

#pragma region Block HP/MP Regeneration
DWORD BlockRegenerationAddress1 = 0x00B7B011; // 7E ?? 8B 44 24 ?? 8B 48 ?? 51 83 C0 ?? 50 E8 ?? ?? ?? ?? 0F B7 C0 0F BF
DWORD BlockRegenerationAddress2 = 0x00B7AE97; // 7E ?? 8B 4C 24 ?? 51 6A ?? 56

void Form6::checkBox52_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox52->Checked == true)
	{
		WriteMemory(BlockRegenerationAddress1, 2, 0xEB, 0x47);
		WriteMemory(BlockRegenerationAddress2, 2, 0xEB, 0x21);
	}
	else
	{
		WriteMemory(BlockRegenerationAddress1, 2, 0x7E, 0x47);
		WriteMemory(BlockRegenerationAddress2, 2, 0x7E, 0x21);
	}
}
#pragma endregion

#pragma region NoName (For Filming, ClientSided)
DWORD NoNameCSAddress1 = 0x009C5035; // 75 ?? 2B C3 8B D8 53 51 6A ?? 53 8B CD E8 ?? ?? ?? ?? 50 E8 ?? ?? ?? ?? 83 C4 ?? 53 8B (Last result) //Status Bar Name
DWORD NoNameCSAddress2 = 0x00623EB7; // EB ?? BA ?? ?? ?? ?? 89 54 24 ?? 3B DD 74 //Name Tag

void Form6::checkBox53_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox53->Checked == true)
	{
		WriteMemory(NoNameCSAddress1, 2, 0x90, 0x90);
		WriteMemory(NoNameCSAddress2, 2, 0xEB, 0x76);
	}
	else
	{
		WriteMemory(NoNameCSAddress1, 2, 0x75, 0xF9);
		WriteMemory(NoNameCSAddress2, 2, 0xEB, 0x05);
	}
}

#pragma endregion

#pragma region Move Unmoveable/Skill Bind - cam1596
DWORD MoveUnmoveableAddress1 = 0x009BEF6E; // 75 ? 8b 0d ? ? ? ? 50 56 - 1st //CUIKeyConfig::TryBeginDragFuncKeyMappedIcon
DWORD MoveUnmoveableAddress2 = 0x009BEF7F; // 74 ?? 8B 4D ?? 6A ?? 6A ?? 6A ?? 8D 45 ?? 50 56 51 8B // CUIStatusBar::DrawDragFuncKeyMappedIcon
DWORD MoveUnmoveableAddress3 = 0x00992812; // 74 ? 83 fa ? 75 ? 55 51 - 1st // CUISkill::OnMouseButton
DWORD MoveUnmoveableAddress4 = 0x005AAD09; // E8 ?? ?? ?? ?? 0F B6 C0 53 3B C3 74 ?? E8 ?? ?? ?? ?? 83 C4 ?? 85 C0 74 // CFuncKeyMappedMan::OnInit // //Stops the keys being loaded from the server so bad keys stick on CC - Redwinter

void Form6::checkBox54_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox54->Checked == true)
	{
		WriteMemory(MoveUnmoveableAddress1, 2, 0x90, 0x90);
		WriteMemory(MoveUnmoveableAddress2, 2, 0x90, 0x90);
		WriteMemory(MoveUnmoveableAddress3, 2, 0x90, 0x90);
		WriteMemory(MoveUnmoveableAddress4, 5, 0xE9, 0x3B, 0x03, 0x00, 0x00);
	}
	else
	{
		WriteMemory(MoveUnmoveableAddress1, 2, 0x75, 0x11);
		WriteMemory(MoveUnmoveableAddress2, 2, 0x74, 0x80);
		WriteMemory(MoveUnmoveableAddress3, 2, 0x74, 0x05);
		WriteMemory(MoveUnmoveableAddress4, 5, 0xE8, 0x92, 0xBB, 0xE5, 0xFF);
	}
}

#pragma endregion

#pragma region FiftySecGM
DWORD FiftySecGMAddress1 = 0x00AC06B2; // 7F ?? 81 C1 ?? ?? ?? ?? E8 ?? ?? ?? ?? 33 C9 85 C0 0F 9E C1 49 81
DWORD FiftySecGMAddress2 = 0x00AC06CD; // 81 C1 ?? ?? ?? ?? 51 8D 8D ?? ?? ?? ?? E8 ?? ?? ?? ??

void Form6::checkBox55_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox55->Checked == true)
	{
		WriteMemory(FiftySecGMAddress1, 1, 0x7E);
		WriteMemory(FiftySecGMAddress2, 4, 0x81, 0xC1, 0xD4, 0x36);
	}
	else
	{
		WriteMemory(FiftySecGMAddress1, 1, 0x7F);
		WriteMemory(FiftySecGMAddress2, 4, 0x81, 0xC1, 0x24, 0xFA);
	}
}
#pragma endregion

#pragma region FilterChat - [D.R.T]
DWORD FilterChatAddress = 0x00A5EF8A; // 0f b6 c0 8d 4c ? ? 51 8b ce 89 44 24 ? e8 ? ? ? ? 8b ce 89 [- 3A <-- o.o?]

void Form6::checkBox56_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox56->Checked == true)
	{
		WriteMemory(FilterChatAddress, 7, 0x31, 0xC0, 0xC2, 0x08, 0x00, 0x90, 0x90);
	}
	else
	{
		WriteMemory(FilterChatAddress, 7, 0x6A, 0xFF, 0x68, 0x61, 0x60, 0xC0, 0x00);
	}
}
#pragma endregion

#pragma region Show PIC
DWORD ShowPICAddress = 0x0047C0BD; // 0F 84 ? ? 00 00 8B 5C 24 ? 3B D9 0F ? ? ? 00 00

void Form6::checkBox57_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if(this->checkBox57->Checked == true)
	{
		WriteMemory(ShowPICAddress, 2, 0x0F, 0x85);
	}
	else
	{
		WriteMemory(ShowPICAddress, 2, 0x0F, 0x84);
	}
}

#pragma endregion

#pragma endregion