#include "stdafx.h"  //________________________________________ Trigonometria.cpp
#include "Trigonometria.h"
#include <math.h>
#define PI 3.14159265358979323846
int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Trigonometria app;
	return app.BeginDialog(IDI_Trigonometria, hInstance);
}

void Trigonometria::Window_Open(Win::Event& e)
{
	wstring texto;
	Sys::Format(texto, L"X\r\tSin(X)\r\tCos(X)\r\n");
	tbxSalida.Text += texto;
	Sys::Format(texto, L"--------\r\t--------\r\t--------\r\n");
	tbxSalida.Text += texto;
	for (int i = 0; i <= 90; i=i+10)
	{
		Sys::Format(texto, L"%d\r\t%.4f\r\t%.4f\r\n",i,sin(i*PI/180),cos(i*PI/180));
		tbxSalida.Text += texto;
	}
}

