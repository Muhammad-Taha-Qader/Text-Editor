#pragma once
#include"Document.h"

class TextEditor
{
	friend class Document;
	friend class Lines;
	int cr = 0, cc = 0, NoDs, CDoci;  //cc-> Cursor column
	Document* Doc;
	//friend void changeCourserPos(int kbch, int& cr, int& cc, Document D, Line L, int& LineNo);
	void changeCourserPos(int kbch, Document D, Line L, int& LineNo, int DocNum);
	friend void gotoRowCol(int rpos, int cpos);

public:
	//TextEditor(string Fname);
	TextEditor();
	void Load(string Fname,int );
	void LoadEncod(string Fname, int i);
	void FileManager();

	void Run();
	void PrintShortcuts();
	//void CommandModeShortcutsPrinter();
	//void CommandMode();
	void MergeDocuments(string Fname1, string Fname2,int DocToOpenNum);
	//void OpenMultipleDocs(_____);
};

