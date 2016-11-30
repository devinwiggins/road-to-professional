#include <iostream>

int fSequence(int sum, int prev)
{
	
	int num = sum + prev;
	if (sum < 100)
	{
		std::cout << fSequence(num, sum) << "\n";
		
	}
	return sum;
}

int main()
{
	fSequence(0, 1);
}



// 0 + 1 + 1 + 2 + 3 + 5