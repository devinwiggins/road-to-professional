#pragma once
class MyString
{
private:
	char* word;
public:
	//Todo
	MyString() {};
	MyString(char *a);
	//Constructors

	int Size(); // queries the string's length returning an integer
	char Index(); // accesses a character at a certain index
	int Compare(MyString w);
//	char Append();
//	char Prepend();
//	//int
//	int LCDupe();
};