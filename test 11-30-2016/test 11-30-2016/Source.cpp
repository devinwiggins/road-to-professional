#include <iostream>

float doStuff(float A, float B, float C)
{
	return (A + B + C) * 5;
}

void popArr(int arr[], int size)
{
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = j += 2;
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

int mostNum(int arr[],int size)
{
	int z = 0;
	for (int i = 0; i <= size; i++)
	{
		//arr[i] = arr[i];
		for (int j = 0; j <= size; j++)
		{
			int x[10];
			if (i == j)
			{
				x[z] = arr[j];
				z++;
			}
		}

	}
	return 0;
}

void IntSwap(int &A, int &B)
{
	A = A + B;
	B = (B - B * 2) + A;
	A = A - B;
}

void strSort(std::string n)
{
	int i = 0;
	std::string *tmp = new std::string;
	tmp = &n;
	std::string firstletter;
	for (i; i != '\0'; i++)// iterates through the string and finds the first letter
	{
		if (i == 0)
		{
			firstletter = n[i];
		}
		else if (n[i] == ' ')
		{
			i++; // moves to the next letter which will be presumed as the first letter of the string
			firstletter = n[i]; //holds the first letter of the sub string 

		}
		for (int j = 0; j != '\0'; j++) // 
		{
			if (tmp[j] == firstletter)
			{
				
			}
		}
	}
}


int main()
{
// 1)
	doStuff(2, 3, 4); //completed
// 2)
	int arr[6];
	popArr(arr, 6); //complete
// 3)
	char name[6] = "Devin";
	strrev(name, 6); //complete
// 4)
	Cat catBox[26]; //completed
	int i = 0;
	char x;
	while (i < 26)
	{
		if (i == 0)
		{
			x = 65;
		}
		while( x < 91)
		{
			catBox[i].NameMe(x);
			

			if (i % 2 == 1)
			{
				catBox[i].NameMe(x += 32);
				x -= 32;
			}
			
			x++;
			break;
		}
		
		i++;
	}
// 5)
	int nums[] = { 1, 1, 2, 3, 4, 5 , 1 , 6 , 6, 1 };
	mostNum(nums, 10); //incomplete
// 6)
	int num1 = 200;
	int num2 = 7;
	IntSwap(num1, num2); //complete
// 7)
	std::string n = "Cash Bush Dandy Eat";
	strSort(n); //incomplete
	system("pause");
	return 0;
} 