#pragma once
 
#ifndef _CPACKETS_H_
#define _CPACKETS_H_
 
#include <Windows.h>
#include "Pointers.h"
 
#pragma warning (disable: 4200)
#pragma warning (disable: 4244)
 
struct COutPacket
{
  int Loopback;
  union
  {
      char* Data;
      void* Unk;
      unsigned short* Header;
  };
  unsigned long Size;
  unsigned int Offset;
  int EncryptedByShanda;
};
 
struct CInPacket
{
  BOOL fLoopback;
  INT iState;
  union
  {
      LPVOID lpvData;
      struct
      {
        DWORD dw;
        WORD wHeader;
      } *pHeader;
      struct
      {
        DWORD dw;
        BYTE bData[0];
      } *pData;
  };
  USHORT usLength;
  USHORT usRawSeq;
  USHORT usDataLen;
  USHORT usUnknown;
  UINT uOffset;
  LPVOID lpv;
};
 
class CPackets
{
  public:
      inline char* atohx(char* szDestination, const char* szSource);
 
      bool SendPacket(char* szPacket, unsigned long ulSize);
      bool RecvPacket(char* szPacket, unsigned long ulSize);
 
      bool SendPacket(__in LPCSTR lpcszPacketString);
      bool RecvPacket(__in LPCSTR lpcszPacketString);
};
 
#endif // _CPACKETS_H_