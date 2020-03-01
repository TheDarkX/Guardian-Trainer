#include "Functions.h"

///<CanWriteOnPage Function>
#pragma region CanWriteOnPage_Function
;void CanWriteOnPage(UL ul_Address, UL ul_Amount){
	/*MEMORY_BASIC_INFORMATION* MBI = new MEMORY_BASIC_INFORMATION;
	VirtualQuery((void*)ul_Address, MBI, ul_Amount);
	if(MBI->Protect != 0x40){
		UL* ul_Protect = new UL; VirtualProtect((void*)ul_Address, 
			ul_Amount, PAGE_EXECUTE_READWRITE, ul_Protect);
	}
	delete MBI;*/
};
#pragma endregion CanWriteOnPage_Function

#pragma region _WriteMemory_Function
;void WriteMemory(UL ul_Address, UC uc_Amount, ...){
	/*CanWriteOnPage(ul_Address, (unsigned long)uc_Amount);
	typedef char* type_c; 
	type_c* tc = new type_c;
	_crt_va_start(*tc, uc_Amount);
	for(unsigned char ByteToWrite = _crt_va_arg(*tc, unsigned char), 
		uc_Index = 0; uc_Index < uc_Amount; uc_Index++, ByteToWrite 
		= _crt_va_arg(*tc, unsigned char)){
		*(unsigned char*)(ul_Address + uc_Index) = ByteToWrite;
	}
	_crt_va_end(*tc);
	delete tc;*/
};
#pragma endregion _WriteMemory_Function

#pragma region Jump_Function
;void Jump(unsigned long ul_Address, void* Function, unsigned NOP){
	/*CanWriteOnPage(ul_Address, NOP + 5); *(UC*)ul_Address = 0xE9; 
	*(UL*)(ul_Address + 1) = jmp(ul_Address, Function);
	MemorySet((void*)(ul_Address + 5), 0x90, NOP);*/
};
#pragma endregion Jump_Function

///<ReadPointer Function>
#pragma region ReadPointer_Function
unsigned long ReadPointer(unsigned long ulBase, int iOffset){
	/*__try{ return *(unsigned long*)(*(unsigned long*)ulBase + iOffset); }
	__except (EXCEPTION_EXECUTE_HANDLER){ return 0; }*/
	return 0;
};
#pragma endregion ReadPointer_Function

//Reads a double Pointer
double ReadDOUBLEPointer(DWORD ulBase, INT iOffset)
{
  /*__try { return (*(DOUBLE*)(*(DWORD*)ulBase + iOffset)); }
  __except (EXCEPTION_EXECUTE_HANDLER) { return 0.0; }*/
	return 0.0;
}

///<ReadMultiPointer Function>
#pragma region ReadMultiPointer_Function
ULONG_PTR ReadMultiPointer(ULONG_PTR ul_Base, int PointerLevel, ...){
	/*ULONG_PTR ul_Result = -1;
	int i, offset;
	va_list	vl;
	_crt_va_start(vl, PointerLevel);

	if(!IsBadReadPtr((void*)ul_Base, sizeof(ULONG_PTR))){
		ul_Base = *(ULONG_PTR*)ul_Base;
		for(i = 0; i < PointerLevel; i++){
			offset = _crt_va_arg(vl, int);
			
			if(IsBadReadPtr((void*)(ul_Base + offset), sizeof(ULONG_PTR))){
				_crt_va_end(vl);
				return -1;
			}
		ul_Base = *(ULONG_PTR*)(ul_Base + offset);
		}
	ul_Result = ul_Base;
	}
	_crt_va_end(vl);
	return ul_Result;*/
};
#pragma endregion ReadMultiplePointer_Function

///<WriteToPointer>
#pragma region WriteToPointer_Function
;bool WriteToPointer(UL ul_Base, int i_Offset, int i_nValue){
	/*__try{ 
		*(int*)(*(UL*)ul_Base + i_Offset) = i_nValue; 
		return true; 
	}
	__except (EXCEPTION_EXECUTE_HANDLER){ 
		return false; 
	}*/
	return true;
};
#pragma endregion WriteIntPointer_Function

//Write Addy
bool WriteValue(CONST LPDWORD lpdwBase, CONST INT iOffset, CONST INT iValue)
{
   /*__try { *(INT*)((LPBYTE)lpdwBase + iOffset) = iValue; return true; }
   __except (EXCEPTION_EXECUTE_HANDLER) { return false; }*/
	return false;
}

//iGetValue
unsigned long iGetValue(unsigned long ulBase, int iOffset)
{
   /*__try { return *(unsigned long*)(ulBase + iOffset); }
   __except (EXCEPTION_EXECUTE_HANDLER) { return 0; }*/
	return 0;
}

//Find MapleStory Windowk
HWND FindProcessWindow()
{
  /*TCHAR szBuffer[200];
  DWORD dwTemp;

  for (HWND hWnd = GetTopWindow(NULL); hWnd != NULL; hWnd = GetNextWindow(hWnd, GW_HWNDNEXT))
  {
	if (!GetClassName(hWnd, szBuffer, 200))
	  continue;

	if (strcmp(szBuffer, "MapleStoryClass") != 0)
	  continue;

	GetWindowThreadProcessId(hWnd, &dwTemp);

	if (dwTemp == GetCurrentProcessId())
	  return hWnd;
  }

  return NULL;*/
	return NULL;
}