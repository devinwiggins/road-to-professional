#include <iostream>
#include <string>
#include <time.h>
enum Choice
{
	ROCK = 0,
	PAPER = 1,
	SCISSORS = 2,
};
class Game
{
private:
	//string for results.. b/c enum is not a string
	std::string choicestr_d, choicestr_p;
public:
	Game() {};//default constructor
	Choice dealer = ROCK;
	Choice player = PAPER;
	void Run()
	{
		//return if tie
		if (player == dealer)
		{
			printf("tie....");
			return;
		}

		//check against dealer choice
		switch (dealer)
		{
		case ROCK: (player == PAPER) ? printf("win") : printf("lose");
			break;
		case PAPER: (player == SCISSORS) ? printf("win") : printf("lose");
			break;
		case SCISSORS:(player == ROCK) ? printf("win") : printf("lose");
			break;
		}
		printf("\n");
	}

	void Result()
	{
		choicestr_d = ((int)dealer == 0) ? "rock" : ((int)dealer == 1) ? "paper" : "scissors";
		choicestr_p = ((int)player == 0) ? "rock" : ((int)player == 1) ? "paper" : "scissors";
		std::cout << "you chose " << choicestr_p.c_str() << "\n";
		std::cout << "dealer was " << choicestr_d.c_str() << "\n";
	}
};
int main()
{
	srand(time(NULL));
	int input = -1;
	bool running = true;
	Game *RPS = new Game();
	while (running)
	{
		int randomNumber = rand() % 3;
		printf("choose...\n1. rock \n2. paper \n3. scissors\n4.quit");
		std::cin >> input;
		if (input == 4)
			break;
		RPS->dealer = (Choice)randomNumber;
		RPS->player = (Choice)input;
		RPS->Run();
		RPS->Result();

	}
	return 0;
}