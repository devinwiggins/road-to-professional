#include <string>
#include "MyString.h"

MyString::MyString(char mString[])
{
	int i;
	for (i = 0; mString[i] != '\0'; i++)
	{
		m_arr[i] = mString[i];
	}
	mString[i] != '\0';
}
int MyString::Size()
{
	int len = 0;
	while (m_word[len] != '\0')
	{
		len++;
	}
	return len;
}
char MyString::Index()
{
	
	char i;
	for (i = 0; i <= Size(); i++)
	{
		if (m_arr[i] == x)
			return i;
	}
}
