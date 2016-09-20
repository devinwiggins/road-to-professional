#include <iostream>
#include <string>
#include "MyString.h"

MyString::MyString(char *a)
{
	word = a;
}
int MyString::Size()
{
	int len = 0;
	while (word[len] != '\0')
	{
		len++;
	}
	return len;
}
char MyString::Index()
{
	/*as function is called the input index being searched will loop through
	the string and return the index */
	//char i;
	int x;
	std::cin >> x; // user can input the character placement by 0 through < stringlength
	int place = word[x];
	std::cout << place << std::endl;
	return place;
};
bool MyString::Compare(MyString w)
{
	int x = 0;
	bool ruling = 0;
	bool cont = true;
	for (x = 0; x < 1; x++)
	{
		if (word[x] != w.word[x])
			return false;
		else if (word[x] > w.word[x])
			ruling = 1;
		else if (word[x] < w.word[x])
			ruling = -1;
		else 
		/*if (word[x] == 0 && w[x] == 0)
		{
			ruling = 0;
			break;
		}
		else if (word[x] > w[x])
		{
			ruling = 1;
			break;
		}
		else if (word[x] < w[x])
		{
			ruling = -1;
			break;
		}
		else
		{
			++x;
		}
		*/
	}

	//Check if words are the same length.
	//Loop through all characters of both words until a character is different at 
	// that index.
	//If know characters are different the words are the same.

	return ruling;
}
//char MyString::Append()
//{
//	int attach = Size() + 1;
//	int origin = 0;
//	while (word2[origin] != 0)
//	{
//		word[attach] = word2[origin];
//		++attach;
//		++origin;
//	}
//	word[attach] = 0;
//	return;
//}
//char MyString::Prepend()
//{
//	int attach = Size() + 1;
//	int origin = 0;
//	while (/*need some type of variable here*/[origin] != 0)
//	{
//		word[attach] = /* need some type of variable here*/[origin];
//		attach++;
//		origin++;
//	}
//	word[attach] = 0;
//	return;
//}
//int MyString::LCDupe()
//{
//	int arr;
//}
