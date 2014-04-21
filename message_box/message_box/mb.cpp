#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,PSTR szCmdLine,int iCmdShow)
{
	MessageBox(NULL,TEXT("Hello Win"),TEXT("HEllo msg"),MB_OK| 0x30);
	return 0;
}