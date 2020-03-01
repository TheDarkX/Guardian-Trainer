#include "SendPacket.h"
 
unsigned long ulFakeReturnAddy = SendAddy - 9;
 
typedef void (__fastcall* lpfnSendPacket)(LPVOID lpvClass, LPVOID lpvEDX, COutPacket* pPacket);
typedef void (__fastcall* lpfnRecvPacket)(LPVOID lpvClass, LPVOID lpvEDX, CInPacket* pPacket);
 
lpfnSendPacket MSSendPacket = reinterpret_cast<lpfnSendPacket>(SendAddy);
lpfnRecvPacket MSRecvPacket = reinterpret_cast<lpfnRecvPacket>(RecvAddy);
 
const LPVOID* lppvCClientSocket = reinterpret_cast<const LPVOID*>(ClientSocketAddy);
const LPVOID lpvSomeRet = reinterpret_cast<const LPVOID>(ulFakeReturnAddy);
 
void __declspec(naked) InjectPacket(COutPacket* pPacket)
{
  __asm
  {
      mov ecx,[lppvCClientSocket]
      mov ecx,[ecx]
      push [esp+4]
      push [lpvSomeRet]
      jmp [MSSendPacket]
  }
}
 
void InjectPacket(CInPacket* pPacket)
{
  MSRecvPacket(*lppvCClientSocket, NULL, pPacket);
}
 
inline char* CPackets::atohx(char* szDestination, const char* szSource)
{
  char* szReturn = szDestination;
  for(int lsb, msb; *szSource; szSource += 2)
  {
      msb = tolower(*szSource);
      lsb = tolower(*(szSource + 1));
      msb -= isdigit(msb) ? 0x30 : 0x57;
      lsb -= isdigit(lsb) ? 0x30 : 0x57;
      if((msb < 0x0 || msb > 0xf) || (lsb < 0x0 || lsb > 0xf))
      {
        *szReturn = 0;
        return NULL;
      }
      *szDestination++ = (char)(lsb | (msb << 4));
  }
  *szDestination = 0;
  return szReturn;
}
 
bool CPackets::SendPacket(char* szPacket, unsigned long ulSize)
{
  COutPacket Packet = {0};
 
  Packet.Size = ulSize;
  Packet.Data = szPacket;
 
  try
  {
      InjectPacket(&Packet);
      return true;
  }
  catch (...)
  {
      return false;
  }
}
 
bool CPackets::RecvPacket(char* szPacket, unsigned long ulSize)
{
  CInPacket Packet;
  SecureZeroMemory(&Packet, sizeof(CInPacket));
  Packet.lpvData = szPacket;
  Packet.usLength = ulSize;
 
  try
  {
      InjectPacket(&Packet);
      return true;
  }
  catch (...)
  {
      return false;
  }
}
 
bool CPackets::SendPacket(__in LPCSTR lpcszPacketString)
{
  SIZE_T stLength = strlen(lpcszPacketString);
  COutPacket Packet = {0};
 
 
  Packet.Size = stLength / 2;
  byte bPacket[150];
  Packet.Data = atohx((char*)bPacket, lpcszPacketString);
 
  try
  {
      InjectPacket(&Packet);
      return true;
  }
  catch (...)
  {
      return false;
  }
}
 
bool CPackets::RecvPacket(__in LPCSTR lpcszPacketString)
{
  SIZE_T stLength = strlen(lpcszPacketString);
  CInPacket Packet;
  SecureZeroMemory(&Packet, sizeof(CInPacket));
 
 
  Packet.usLength = stLength / 2;
  byte bPacket[150];
  Packet.lpvData = atohx((char*)bPacket, lpcszPacketString);
 
  try
  {
      InjectPacket(&Packet);
      return true;
  }
  catch (...)
  {
      return false;
  }
}