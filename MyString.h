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
	char Index(int index); // accesses a character at a certain index
	bool Compare(MyString w);
	char Append(MyString cat);
	char Prepend(MyString tac);
////int
//	void ChangeLow();
};