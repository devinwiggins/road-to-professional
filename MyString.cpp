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
char MyString::Index(int index)
{
	/*as function is called the input index being searched will loop through
	the string and return the index */
	//char i;
	if (index >= 0 && index < Size()) // if index(the variable) is greater than or
		// equal to 0 and less the the size the index will be returned
		return word[index];
	
	return '?'; // if the input is invalid the functiopn returns '?'

	// no less than 0 no greater than size
};
bool MyString::Compare(MyString w)
{
	int x = 0;
	if (Size() != w.Size())
		return false;
	for (x = 0; x < Size(); x++)
	{
		if (word[x] != w.word[x])
			return false;
	}
	//Check if words are the same length.
	//Loop through all characters of both words until a character is different at 
	// that index.
	//If no characters are different the words are the same.

	return true;
}char MyString::Append(MyString cat)
{
	char *arr = new char[cat.Size() + Size()]; //allocates dynamic memory of strings 
	int it = 0;
	for (int i = 0; i < Size(); i++)
	{
		arr[i] = word[i];
	}                        // sets arr pointer to word
	for (int i = Size(); i < cat.Size() + Size(); i++)
	{
		arr[i] = cat.word[it];
		it++;
	}
}

char MyString::Prepend(MyString tac)
{

}
//void MyString::ChangeLow()
//{
//	int x;
//	while (word[x] <= 'A' &&  word[x] >= 'Z')
//	{
//
//	}
//}

//unable to find a solution to incompleted functions. i could understand how they work
// i could not figure out how to optimize what ive learned to make those functions work
// i have also come to the conclusion that alot of the functions required a higher level \
// of knowledge to complete but because i spent so much time trying to figure it out 
// on my own the time that i asked for help was too late. i try to 
// do what i can without as much help in order to understand better.