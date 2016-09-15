#include <iostream>
#include <time.h>
#include <cstdlib>
int main()
{
	int x;
	std::cout << "Welcome to the Rock Paper Scissors simulator. choose a number from 1 - 3. The rules are quite simple Rock beats scissors, Paper beats Rock, and scissors beats Papper." << std::endl;
	std::cout << "1 = rock\n2 = Paper\n3 = scissors" << std::endl;
	std::cout << "Rock Paper scissors shoot!..... ";
	std::cin >> x;
	srand(time(NULL));
	for (int y, i = 0; i < 1; i++)
	{
		y = rand() % 3 + 1;
		std::cout << "CPU: " << y;
		if (y == 1 && x == 1) {
			std::cout << "We both chose rock it's a tie!";
		}
		if (y == 2 && x == 1) {
			std::cout << "I chose Paper. You Chose Rock. You Lose!";
		}
		if (y == 3 && x == 1) {
			std::cout << "I chose Scissors. You chose Rock. You Win!";
		}
		if (y == 1 && x == 2) {
			std::cout << "I chose Rock. You chose Paper. You Win!";
		}
		if (y == 2 && x == 2) {
			std::cout << "We both chose Paper it's a Tie!";
		}
		if (y == 3 && x == 2) {
			std::cout << "I chose Scissors. You chose Paper. You Lose!";
		}
		if (y == 1 && x == 3) {
			std::cout << "I chose Rock. You chose Scissors. You Lose!";
		}
		if (y == 2 && x == 3) {
			std::cout << "I chose Paper. You chose Scissors. You Win!";
		}
		if (y == 3 && x == 3) {
			std::cout << "We both chose Scissors It's a Tie";
		}
		system("pause");
} 