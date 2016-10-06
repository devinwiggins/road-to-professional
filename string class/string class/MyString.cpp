#include <iostream>
#include <string>
#include "MyString.h"

MyString::MyString(char *a)
{
	m_word = a;
}

char MyString::Index(int index)
{
	/*as function is called the input index being searched will loop through
	the string and return the index */
	//char i;
	if (index >= 0 && index < Size()) // if index(the variable) is greater than or
		// equal to 0 and less the the size the index will be returned
		return m_word[index];
	
	return '?'; // if the input is invalid the functiopn returns '?'

	// no less than 0 no greater than size
};
bool MyString::Compare(MyString w)
{
	int x = 0;
	if (Size() != w.Size()) //checks the two strings to see if they are the same
		return false;
	for (x = 0; x < Size(); x++)
	{
		if (m_word[x] != w.m_word[x])
			return false;
	}
	//Check if words are the same length.
	//Loop through all characters of both words until a character is different at 
	// that index.
	//If no characters are different the words are the same.

	return true;
}
char* MyString::Append(MyString cat)
{
	char *arr = new char[cat.Size() + Size() - 4]; //allocates dynamic memory of strings 
	int it = 0;
	for (int i = 0; i < Size(); i++) //increments i until it reaches the numberless the sixe of the string
	{
		arr[i] = m_word[i];
	}                        // sets arr pointer to word
	for (int i = Size(); i < cat.Size() + Size(); i++)
	{
		arr[i] = cat.m_word[it]; //increments cat string into object string
		it++;
		
	}
	return m_word;
}
char* MyString::Prepend(MyString tac)
{
	char *arr = new char[tac.Size() + Size() - 4]; // same as Append function except it append the object to the parameters string
	int it = 0;
	for (int i = 0; i < tac.Size(); i++)
	{
		arr[i] = tac.m_word[i];
	}
	for (int i = tac.Size(); i < Size() + tac.Size(); i++)
	{
		arr[i] = m_word[it]; //increments parameter string into empty spaces in arr
		it++;
	}
	arr = m_word;
	return tac.m_word;
}
const char * MyString::ToConstant()
{
	return m_word; //returns object string as a const char
}
char* MyString::ToLower()
{

	for (int i = 0; i < Size(); ++i)
		// i is supposed to go through the string checking each letter
	{
		if (m_word[i] <= 'A' && m_word[i] >= 'Z')
		{
			m_word[i] = m_word[i] + 32;
		}
		
	}
			// this is supposed to return the value of 
			// the letter that i's address is equal to, plus 32.
			// the 32 takes the ascii character's place value on the ascii table
			// and adds it by 32 in order to match its lowercase counterpart
	return m_word;
}
char* MyString::ToUpper()
{

	for (int i = 0; i < Size(); ++i)
	{
		if (m_word[i] > 'a' && m_word[i] < 'z')
		{
			m_word[i] = m_word[i] - 32;
		}
		
		// this is supposed to return the value of 
		// the letter that i's address is equal to, minus 32.
		// the 32 takes the ascii character's place value on the ascii table
		// and substract it by 32 in order to match its lowercase counterpart
	}
	return m_word;
}

bool MyString::getSub(MyString sub)
{
	int it = 0;
	for (int i = 0; i < Size() + sub.Size(); i++)
	{
		if (m_word[i] == sub.m_word[it])
		{
			it++;
		}
		else if (m_word[i] != sub.m_word[it])
		{
			
		}
		else
			return 0;
	}
	if (sub.m_word == m_word)
	return 1;
};

char MyString::SubByIndex()
{
	return 0;
	
}

char MyString::SwapSub()
{
	return 0;
}

char MyString::To_cstr()
{
	return 0;
}
