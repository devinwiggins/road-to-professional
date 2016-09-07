#include <iostream>
#include <time.h>
void instructions_G()
{
	std::cout << "Welcome to the Rock Paper Scissors simulator. choose a number from 1 - 3. The\nrules are quite simple Rock beats scissors, Paper beats Rock, and scissors\nbeats Papper." << std::endl;
	std::cout << "1 = rock\n2 = Paper\n3 = scissors" << std::endl;
	return;
}
	void play()
	{
		int x;
		std::cout << "Rock Paper scissors shoot!..... ";
		std::cin >> x;
		for (int y, i = 0; i < 1; i++)
		{
			y = rand() % 3 + 1;
			std::cout << "CPU: " << y << std::endl;
			if (y == 1 && x == 1) {
				std::cout << "We both chose rock it's a tie!" << std::endl;
			}
			if (y == 2 && x == 1) {
				std::cout << "I chose Paper. You Chose Rock. You Lose!" << std::endl;
			}
			if (y == 3 && x == 1) {
				std::cout << "I chose Scissors. You chose Rock. You Win!" << std::endl;
			}
			if (y == 1 && x == 2) {
				std::cout << "I chose Rock. You chose Paper. You Win!" << std::endl;
			}
			if (y == 2 && x == 2) {
				std::cout << "We both chose Paper it's a Tie!" << std::endl;
			}
			if (y == 3 && x == 2) {
				std::cout << "I chose Scissors. You chose Paper. You Lose!" << std::endl;
			}
			if (y == 1 && x == 3) {
				std::cout << "I chose Rock. You chose Scissors. You Lose!" << std::endl;
			}
			if (y == 2 && x == 3) {
				std::cout << "I chose Paper. You chose Scissors. You Win!" << std::endl;
			}
			if (y == 3 && x == 3) {
				std::cout << "We both chose Scissors It's a Tie" << std::endl;
			}
		}
	}
void main()
{
	bool cont = true;
	while (cont)
	{
		instructions_G();
		play();
	}
	
	system("pause");
}