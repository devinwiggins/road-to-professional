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
	/*for (i = word[0]; i <= place; i++)
	{
		if (i == place)
		{*/
			std::cout << place << std::endl;
	//	}
	//}
	return place;
};
int MyString::Compare(MyString w)
{
	int cmp = 0;
	int point = 0;
	bool cont = true;
	while (cont)
	{
		if (word[cmp] == 0 && [cmp] == 0)
		{
			point = 0;
		}
		else if (word[cmp] > word2[cmp])
		{
			point = 1;
		}
		else if (word[cmp] < word2[cmp])
		{
			point = -1;
		}
		else
		{
			++cmp;
		}
		
	}
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
