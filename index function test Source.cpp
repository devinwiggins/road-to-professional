#include <iostream>
int main()
{
	char arr[6] = "hello";
	int x = arr[3];
	int i;
	for (i = arr[0]; i <= x; i++)
	{
		if (arr[i] == x)
		{
			return i;
		}
		std::cout << i << std::endl;
	}
	system("pause");
	return 0;
}