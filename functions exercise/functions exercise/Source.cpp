////#include <iostream>
////void PrintInteger(int variable)
////{
////	std::cout << variable << std::endl;
////}
////int main()
////{
////	int the_variable = 1;
////	PrintInteger(the_variable); // prints 1
////	{
////		PrintInteger(the_variable); // prints 1 again
////		int the_variable = 2;
////		PrintInteger(the_variable); // prints 2 
////		{
////			PrintInteger(the_variable); // prints 2 again
////			int the_variable = 3;
////			PrintInteger(the_variable); // prints 3
////		}
////		PrintInteger(the_variable); // prints 2 instead of 3 because of scope placement
////	}
////	PrintInteger(the_variable); // prints 1 instead of 2 or 3 because of scope placement
////	system("pause");
////}
//// functions prints variable within ()
//// #2
////#include <iostream>
////void minimum(double &a, double &b)
////{
////	if (a < b)
////	{
////		std::cout << a << std::endl;
////	}
////	else 
////	{
////		std::cout << b << std::endl;
////	}
////
////}
////int main()
////{
////	double x;
////	double y;
////	std::cout << "input 2 numbers" << std::endl;
////	std::cin >> x;
////	std::cin >> y; 
////	minimum(x, y);
////	system("pause");
////}
//// #3
////#include <iostream>
////void minimum(float &a, float &b, float &c)
////{
////	if (a < b && a < c)
////	{
////		std::cout << a << std::endl;
////	}
////	else if (b < a && b < c )
////	{
////		std::cout << b << std::endl;
////	}
////	else
////	{
////		std::cout << c << std::endl;
////	}
////}
////int main()
////{
////	float x;
////	float y;
////	float z;
////	std::cout << "input 3 numbers" << std::endl;
////	std::cin >> x;
////	std::cin >> y;
////	std::cin >> z;
////	minimum(x, y, z);
////	system("pause");
////}
////// this is called calling a function
//// #4
////#include <iostream>
////void half(double &a, double &b)
////{
////	a /= b;
////}
//// #5
////#include <iostream>
////#include <cstdlib>
////void cointoss(int toss)
////{
//// for (int i = 0; i < toss; i++)
//// {
////	 int flip;
////	flip = rand() % 2;
////	if (flip == 0)
////	{
////		std::cout << "heads" << std::endl;
////	}
////	if (flip == 1)
////	{
////		std::cout << "tails" << std::endl;
////	}
//// }
////}
////int main()
////{
////	bool cont = true;
////	while (cont)
////	{
////		int input;
////		std::cout << "how many times would you like to flip the coin? Enter below" << std::endl;
////		std::cin >> input;
////		cointoss(input);
////	}
////		system("pause");
////}
//// #6
////#include <iostream>
////int sum(int x, int y)
////{
////	int result;
////	result = x + y;
////}
//// this function does not return an int value
////int sum(int n)
////{
////	if (0 == n) 
////		return 0;
////	
////	else
////		n = n + n;
////}
////n deletes the value of its self when a number is input for n so the equation doesnt execute.
////and the control paths dont all return an integer value
////#include <iostream>
////int main()
////{
////	double x = 13.6;
////	std::cout << "square of 13.6 = " << square(x) << std::endl;
////}
////int square(int x)
////{                                                                    //needs to be returned to
////	return x * x;
#include <iostream>
int SumTo(int N)
{
	return 1 < N;
}
int main()
{
	int result = SumTo(3); //result = 1 + 2 + 3 = 6
	std::cout << result << std::endl;
	result = SumTo(15); //result should now be 120
	std::cout << result << std::endl;
	system("pause");
}
