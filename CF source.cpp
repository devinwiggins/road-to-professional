#include <iostream>
#include <time.h>
#include <cstdlib>
// coin flip simulator
int main() { 
	bool cont;
	char answer;

	do {
		std::cout << "welcome to the Coin-Flip mini game simulator."
			<< "choose a number 1 or 2 to begin \nthe game. calling a number will begin the game."
			<< "Depending on which number you\nchose, your choice will either result in a victory or a loss. GLHF" << std::endl;
		std::cout << "Heads = 1\nTails = 2" << std::endl;
		std::cout << "type 1 or 2 \n";
		int x;
		std::cin >> x; // player inputs number to indicate heads or tails
		srand(time(NULL));
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
		std::cout << "Would you like to try again? Y/N" << std::endl;
		std::cin >> answer;
		if (answer == 'y' || 'Y') {
			cont = true;
		}
		else if ( answer == 'n' || 'N') {
			cont = false;
		}
		
	} while ( answer != 'n') ;
		system("pause");
		return 0;
		// if player inputs y(yes) the program restarts and the player gets to try again until they decide otherwise
}
	