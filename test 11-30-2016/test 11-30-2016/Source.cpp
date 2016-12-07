#include <iostream>

float doStuff(float A, float B, float C)
{
	return (A + B + C) * 5;
}

void popArr(int arr[], int size)
{
	
	for (int i = 0; i <= size; i++)
	{
		
	}
}

void strrev(char arr[],int size)
{
	
	for (int i = 0; i < size/2; i++)
	{

		char t = arr[i];
		arr[i] = arr[size - 2];
		arr[size - 2] = t;
		size--;
	}
}

class Cat
{
	char m_name;
public:
	Cat() {}
	void NameMe(char a) { m_name = a; };
};

//int mostNum(int arr[],int size)
//{
//	int z = 0;
//	for (int i = 0; i <= size; i++)
//	{
//		//arr[i] = arr[i];
//		for (int j = 0; j <= size; j++)
//		{
//			int x[10];
//			if (i == j)
//			{
//				x[z] = arr[j];
//				z++;
//			}
//		}
//
//	}
//	return 0;
//}

//void IntSwap(int A, int B)
//{
//	
//}

//void strSort(std::string n)
//{
//bool MyString::findIndexSub(int Index, MyString sub)
{
	int it = 0;
	{
		for (int i = Index; i < Size() && i != ' '; i++)// increments i to check continuous character spaces unless it 
														//hits a space character
		{
			if (m_word[i] == sub.m_word[it])
			{
				it++;
				continue;
			}

			if (m_word[i] != sub.m_word[it] && sub.m_word[it] != '\0') // if the letter do not match at any point it returns false
																	   // null character check statement cannot be executed if it is false
			{
				return false;
			}
			if (sub.m_word[it] == '\0')// after full check if the words are equal the loop breaks and returns true
			{
				break;
			}
		}
	}
	return true;
	// this function will return true or false whether the argument string is the sub string specified by Index
}
//}

int main()
{
// 1)
	doStuff(2, 3, 4);
// 2)
	int arr[6];
	popArr(arr, 6);
// 3)
	char name[6] = "Devin";
	strrev(name, 6);
// 4)
	Cat a[26];
	int i = 0;

	while (i < 26)
	{
	char x = 65;
		while( x < 91)
		{
			a[i].NameMe(x);
			x++;
			break;
		}
		i++;
	}
// 5)
	/*int nums[] = { 1, 1, 2, 3, 4, 5 , 1 , 6 , 6, 1 };
	mostNum(nums, 10);*/
// 6)
	//int a = 5;
	//int b = 7;
	//IntSwap(a, b);
// 7)
	std::string n;
	strSort(n);
	system("pause");
	return 0;
}