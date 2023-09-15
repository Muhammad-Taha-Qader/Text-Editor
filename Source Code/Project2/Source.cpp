#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<fstream>
#include<string>

using namespace std;

#include"Line.h"
#include"Document.h"
#include"TextEditor.h"

int main()
{
	HANDLE txt = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(txt, 120);
	_getch();

	Line L;
	Document D;
	TextEditor Te;
	Te.Run();
}