#pragma once
class MyString
{
private:
	char* word;
	char* word2;
public:
	//Todo
	//Constructors

	int Size(); // queries the string's length returning an integer
	int Index();
	int Compare();
	char Append();
	char Prepend();
	//int
	int LCDupe();
};