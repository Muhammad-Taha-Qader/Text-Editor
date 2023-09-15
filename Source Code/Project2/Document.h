#pragma once
#include"Line.h"
#include"TextEditor.h"
#include<iostream>

#include<string>
using namespace std;
class Document
{
	/*int dri, dci;
	int NofLines;
	Line* Ls;*/


	friend class TextEditor;
	friend class Line;
	Line* Ls;
	int NoLs = 1;
	string DName;
	int dri = 0, dci = 0;
	//void Deepcopy(Line& NLs, const Line& L);
	void Deepcopy(Line*& NLs, const Line* L);
	friend void EraseInstructionPannel();
public:
	Document(string fname);
	Document();
	Document(const Document& A);
	void Load(string Fname);
	void Load(Line Fname);
	void LoadEncodedFile(string Fname);
	void SimpleUpdater(string saveFileName, char PasswordApply,int NoDs);   //Has both functality of Simple and pasword protected
	//void UpdaterEncodeedFiles();          
	void Enter_AddNewLine(int i, int c); 

	Line getLine(int cr);                      //Added myself
	int getTotalLineNum();

	void BackSpace_LineRemover(int Ln);
	void BackSpace_Concat(int Ln);
	void FindCaseSens(string Tofind);
	void FindInCaseSens(string Tofind);
	double AvgWordLen();
	int SmallestWordLen();
	int LargestWordLength();
	int WordCount();
	int SpecialCharCount();
	int SentencesCount();
	int ParagraphCount();
	void FindAllSubStrings(string toFind);
	void Prefix(string Tofind, string PreFix);
	void PostFix(string Tofind, string PostFix);
	void FindAndReplaceFirst(string tofind, string toreplace);
	void FindAndReplaceAll(string tofind, string toreplace);
	//void FindingSentence();
	void FindReplaceNext(string find, string replace, int cr, int cc);
	void FindReplaceAllNext(string find, string replace, int cr, int cc);
	void FindReplacePrev(string find, string replace, int cr, int cc);
	void FindReplaceAllPrev(string find, string replace, int cr, int cc);
	//void FindAndReplaceMenu(int cr, int cc) {
	//	cout << "Ctrl + N to find and replace only the next word." << endl;
	//	cout << "Ctrl + Q to find and replace All next words." << endl;
	//	cout << "Ctrl + P to find and replace only the previous 1 word." << endl;
	//	cout << "Ctrl + O to find and replace all of the previous words." << endl;
	//	//You can use any Shortcut keys.
	//}
	string WordGame(); //Feature no. 16
	void PrintDocument();
	//void ExitDocument();
	//void DeleteAllLines();
	~Document();


};

