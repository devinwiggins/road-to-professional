#include <iostream>
#include <time.h>
#include <cstdlib>
// coin flip simulator
void instructons_cp()
{
	std::cout << "welcome to the Coin-Flip mini game simulator. choose a number 1 or 2 to begin \nthe game."
		<<"calling a number will begin the game. Depending on which number you\nchose,"
		<<"your choice will either result in a victory or a loss. GLHF" << std::endl;
	std::cout << "Heads = 1\nTails = 2" << std::endl;
}
void play_cp()
{
	std::cout << "type 1 or 2 \n";
	int x;
	std::cin >> x; // player inputs number to indicate heads or tails
	for (int flip, i = 0; i < 1; i++)
	{
		flip = rand() % 2 + 1;
		printf("coin flip...%i\n", flip); // program generates a random number for the coin flip
		if (flip == 1 && x == 1) {
			std::cout << "You guessed it correctly. You win!" << std::endl;
		}
		if (flip == 1 && x == 2) {
			std::cout << "Sorry you guessed wrong. You lose!" << std::endl;
		}
		if (flip == 2 && x == 2) {
			std::cout << "You guessed it correctly. You win!" << std::endl;
		}
		if (flip == 2 && x == 1) {
			std::cout << "Sorry you guessed wrong. You lose!" << std::endl;
		}
	}
}
int main()
{ 
	srand(time(NULL));
	bool cont = true;
	while (cont)
	{
		instructons_cp();
		play_cp();
	}
		system("pause");
		return 0;e
}
	