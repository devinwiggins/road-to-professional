#include <string>
#include "MyString.h"


int MyString::Size()
{
	int len = 0;
	while (word[len] != '\0')
	{
		len++;
	}
	return len;
}
int MyString::Index()
{

}
int MyString::Compare()
{
	int cmp = 0;
	int point = 0;
	bool cont = true;
	while (cont)
	{
		if (word[cmp] == 0 && word2[cmp] == 0)
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
char MyString::Append()
{
	int attach = Size() + 1;
	int origin = 0;
	while (word2[origin] != 0)
	{
		word[attach] = word2[origin];
		++attach;
		++origin;
	}
	word[attach] = 0;
	return;
}
char MyString::Prepend()
{
	int attach = Size() + 1;
	int origin = 0;
	while (word2[origin] != 0)
	{
		word[attach] = word2[origin];
		attach++;
		origin++;
	}
	word[attach] = 0;
	return;
}
int MyString::LCDupe()
{
	int arr
}
