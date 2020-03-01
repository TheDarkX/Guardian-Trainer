#include <windows.h>

///<Definitions/Marco * IGNORE THIS>
#pragma region Definitions_slash_Marco

#define UL unsigned long
#define UC unsigned char
#define WriteMem WriteMemory
#define _WM WriteMemory
#define Jmp(Jump_From, Jump_To) (int)(((int)Jump_To - (int)Jump_From) - 5)
#define jmp(Jump_From, Jump_To) Jmp(Jump_From, Jump_To)
#define MemorySet memset

#pragma endregion Definitions_slash_Marco

///<All Functions>
#pragma region All_Functions

void WriteMemory(UL ul_Address, UC uc_Amount, ...);
void Jump(unsigned long ul_Address, void* Function, unsigned NOP);
UL ReadPointer(UL ulBase, int iOffset);
DOUBLE ReadDOUBLEPointer(DWORD ulBase, INT iOffset);
ULONG_PTR ReadMultiPointer(ULONG_PTR ul_Base, int PointerLevel, ...);
bool WriteToPointer(UL ul_Base, int i_Offset, int i_nValue);
bool WriteValue(CONST LPDWORD lpdwBase, CONST INT iOffset, CONST INT iValue);

#pragma endregion All_Functions

HWND FindProcessWindow();
unsigned long iGetValue(unsigned long ulBase, int iOffset);