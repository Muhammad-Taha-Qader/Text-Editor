#pragma once
#include<iostream>
#include<string>
using namespace std;
class Line
{
	friend class TextEditor;
	friend class Document;
	int Size;
	char* Cs;
	/*static bool isChar(char c);
	static bool islower(char c);
	static bool isupper(char c);*/
	static bool isChar(char c)
	{
		return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
	static bool islower(char c)
	{
		return(c >= 'a' && c <= 'z');
	}
	static bool isupper(char c)
	{
		return(c >= 'A' && c <= 'Z');
	}
	friend void gotoRowCol(int rpos, int cpos);
	int* SubStringsCaseInsence(string Tofind);
public:
	Line();
	Line(const Line& A);
	void Deepcopy(const Line& A);
	void InsertCharAt_i(int i, int kbch);
	void CharRemoverAt_i(int& i, int kbch);
	int Length();
	void print(int currentCourserPos);
	//void ToUpper( int ci);
	int* ToUpper(int ci);
	void printInRange(int* range, int lineNo);
	int* ToLower(int ci);

	int* SubStrings(string Tofind);
	void AddPrefix(string ToFind, string Prefix);
	void AddPostfix(string toFind, string PostFix);
	bool Replacefirst(string toFind, string toReplace);
	void ReplaceAll(string toFind, string toReplace);

	bool FindNextOnly(string find, int cr, int cc);
	bool FindPrevOnly(string find, int cr, int cc);
	void FindNextAll(string find, int cr, int cc);
	void FindPrevAll(string find, int cr, int cc);

	bool FindAndReplaceNextOnly(string find, string replace, int cr, int cc);
	bool FindAndReplacePrevOnly(string find, string replace, int cr, int cc);
	void FindAndReplaceNextAll(string find, string replace, int cr, int cc);
	void FindAndReplacePrevAll(string find, string replace, int cr, int cc);
	//void PrintLine(----);*/
	void clear();
	void Writer(ofstream& wtr);
	void EncodeWriter(ofstream& wtr);
	~Line();


};

