#pragma once
#include"Header.h"
class Seah
{
public:
	const int size = 10;
	int arr[10];
	Seah();
	HWND hSearch, hReport, hBSearch, hWords, hDialog, hFile;
	HANDLE hMutex;
public:
	static BOOL CALLBACK DlgProc(HWND hWnd, UINT mes, WPARAM wp, LPARAM lp);
	static Seah* ptr;
	BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);
	void OnBrowse();
	void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
	void Cls_OnClose(HWND hwnd);
	~Seah(void);
};

