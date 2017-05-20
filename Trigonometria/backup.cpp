#include "stdafx.h"  //________________________________________ Trigonometria.cpp
#include "Trigonometria.h"
#include <math.h>
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Trigonometria app;
	return app.BeginDialog(IDI_Trigonometria, hInstance);
}

void Trigonometria::Window_Open(Win::Event& e)
{
	wstring texto;
	Sys::Format(texto, L"Par\r\tImpar\r\n");
	tbxSalida.Text += texto;
	Sys::Format(texto, L"--------------------\r\n");
	tbxSalida.Text += texto;
}

