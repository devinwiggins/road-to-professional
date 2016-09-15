#include <iostream>
#include <time.h>
#include <cstdlib>
int main()
{
	bool cont;
	char answer;
	do {
	int roll;
	int x;
	
	std::cout << "Welcome to the Dice Roll simulator. " <<
		"The dice will roll once." <<
		"You must input a \nnumber (from 1 to 6) That you believe will be or lower than or equal to " <<
		"the \nnumber that the dice will land on. If the number you guessed is lower than or \nequal to what was rolled you win" << std::endl << std::endl;
	std::cout << std::endl << "Take your guess:  " << std::endl;

	std::cin >> x;
	srand(time(NULL));
	for (int i = 0; i < 1; i++)
	{
		roll = rand() % 6 + 1;
		printf("roll...%i\n", roll);
		
	}
	if (x <= roll) {
		std::cout << "You won!";
	}
	if (x > roll) {
		std::cout << "Sorry, You lost" << std::endl;
	}
	std::cout << "Would you like to try again? Y/N" << std::endl;
	std::cin >> answer;
	if (answer == 'y' || 'Y') {
		cont = true;
	}
	else if (answer == 'n' || 'N') {
		cont = false;
	}
	system("cls");
	} while (answer != 'n');

	system("pause");
}