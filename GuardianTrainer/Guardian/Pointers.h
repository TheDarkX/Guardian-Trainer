#include <windows.h>
//MapleStorySEA V1.25 (Zen Version)

//#define SendKey(Key) PostMessage(FindWindowA("MapleStoryClass", 0), WM_KEYDOWN, Key, (MapVirtualKey(Key, 0) << 16))
//#define SendKeyUp(Key) PostMessage(FindWindowA("MapleStoryClass", 0), WM_KEYUP, Key, (MapVirtualKey(Key, 0) << 16))
#define NewThread(Function) CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Function, NULL, 0, NULL)
#define CloseThread(Function) TerminateThread(Function, 0)
#define DefineColor(Item,YourColor) this->Item->ForeColor = System::Drawing::Color::YourColor;

#define CharAddy 0x00F5BB4C
#define FinalAttackIDOffset 0x519C
#define CharpID 0x23D0
#define CharOriginX 0x5F08
#define CharOriginY 0x5F0C //CharOriginX + 4
#define Footholdoffset 0x220
#define CharFacingOffset 0x2478
#define AttackCountOffset 0x53EC
#define AttackX 0x53E4 //AttackCountOffset - 8
#define KBOffset 0x124 //114
#define KBXOffset 0x130 //KBOffset + 0xC
#define KBYOffset 0x138 //KBOffset + 0x14, 0x08
#define MorphOffset 0x594
#define BuffCountOffset 0x53FC
#define ItemAddy 0x00F63A44
#define ItemCountOffset 0x14
#define ItemXOffset 0xB54
#define ItemCountOffset 0x14
#define ItemIDOffset 0x5160
#define ComboOffset 0x606C
#define BreathOffset 0x600
#define CharAnimation 0x604 //BreathOffset + 4 [Search 4 in Standing ,  14 climbing]
#define SuperZaki 0x605 //CharAnimation + 0x1 [Or Simply Search this value 4278190080 in an offset scanner | From PISC Sources]
#define CharAttackDelay 0x608 //CharAnimation + 4
#define CharAnimationDelay 0x614 //CharAnimation + 10
#define PetOffset 0x43F4
#define Pet1Offset 0x4
#define PetFullness 0xB4

#define MouseAddy 0x00F6069C
#define MouseXOffset 0x8C
#define MouseYOffset 0x90 //MouseXoffset + 4
#define MouseLocationOffset 0x978
#define MouseAniOffset 0x418

#define TeleOffset 0x51C8
#define TeleXOffset 0x51D0
#define TeleYOffset 0x51D4 //TeleXOffset + 4

#define MapAddy 0x00F609A0
#define MapIDOffset 0xD30
#define WallAddy 0x00F600C8
#define LeftWallOffset 0x1C
#define TopWallOffset 0x20 //LeftWallOffset + 4
#define RightWallOffset 0x24 //LeftWallOffset + 8
#define ButtomWallOffset 0x28 //LeftWallOffset + C

#define PortalAddy 0x00F63C54
#define PortalCountOffset 0x18

#define MobAddy 0x00F6015C
#define MobCountOffset 0x10 
#define MobDeathOffset 0x494
#define Mob1Offset 0x28
#define Mob2Offset 0x4
#define Mob3Offset 0x118
#define Mob4Offset 0x24
#define MobXOffset 0x58
#define MobYOffset 0x5C //MobXOffset + 4

#define PeopleAddy 0x00F60158
#define PeopleCountOffset 0x18 
#define SettingAddy 0x00F60154
#define HPAlertOffset 0x50
#define MPAlertOffset 0x54 //HPAlertOffset + 4

#define StatAddy 0x00F60410
#define HPOffset 0x189C
#define MPOffset 0x18A0 //HPOffset + 4
#define EXPOffset 0x17D0

#define ServerAddy 0x00F5BB48
#define TubiOffset 0x210C
#define WorldOffset 0x20A0
#define ChannelOffset 0x20A4 //WorldOffset + 4 // Not sure

#define SendAddy 0x004B55A0
#define RecvAddy 0x004AEDF0 //Wrong
#define SendClassAddy 0x004838F7
#define ClientSocketAddy 0x00F5BC10
