#pragma once
#include <iostream>
class MyString
{
private:
	int x;
	char m_arr2[255];
	char m_arr[9];
	char* m_word;
	char* m_word2;
public:
	MyString() {};
	MyString(char a[]);

	//Todo
	//Constructors
	
	int Size(); // queries the string's length returning an integer
	char Index();
	char Compare();
	char Append();
};
int main()
{
	MyString call = MyString ("hello");
	std::cout << call.Index() << std::endl;
}