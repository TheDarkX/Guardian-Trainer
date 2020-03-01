#include <windows.h>

#pragma region GetKey
DWORD GetKey(int Index)
{
	DWORD KeyCollection[] = 
	{
		VK_CONTROL,	// Ctrl.
		0xA4,		// Alt.
		VK_HOME,	// Home.
		VK_END,		// End.
		VK_DELETE,	// Delete.
		VK_INSERT,	// Insert.
		VK_SHIFT,	// Shift.
		0x21,		// Page Up.
		0x22,		// Page Down.
		VK_SPACE,	// Space.
		VK_F1,		//F1
		VK_F2,		//F2
		VK_F3,		//F3
		VK_F4,		//F4
		VK_F5,		//F5
		VK_F6,		//F6
		VK_F7,		//F7
		VK_F8,		//F8
		VK_F9,		//F9
		VK_F10,		//F10
		VK_F11,		//F11
		VK_F12,		//F12
		0x30,		// 0.
		0x31,		// 1.
		0x32,		// 2.
		0x33,		// 3.
		0x34,		// 4.
		0x35,		// 5.
		0x36,		// 6.
		0x37,		// 7.
		0x38,		// 8.
		0x39,		// 9.
		0x41,		// A.
		0x42,		// B.
		0x43,		// C.
		0x44,		// D.
		0x45,		// E.
		0x46,		// F.
		0x47,		// G.
		0x48,		// H.
		0x49,		// I.
		0x4A,		// J.
		0x4B,		// K.
		0x4C,		// L.
		0x4D,		// M.
		0x4E,		// N.
		0x4F,		// O.
		0x50,		// P.
		0x51,		// Q.
		0x52,		// R.
		0x53,		// S.
		0x54,		// T.
		0x55,		// U.
		0x56,		// V.
		0x57,		// W.
		0x58,		// X.
		0x59,		// Y.
		0x5A		// Z.

	};

	return KeyCollection[Index]; 
}

/*
Ctrl
Alt
Home
End
Delete
Insert
Shift
Page Up
Page Down
Space
F1
F2
F3
F4
F5
F6
F7
F8
F9
F10
F11
F12
0
1
2
3
4
5
6
7
8
9
A
B
C
D
E
F
G
H
I
J
K
L
M
N
O
P
Q
R
S
T
U
V
W
X
Y
Z
*/
#pragma endregion