// tic tac toe sim
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "source.h"
void instructions_g()
{
	std::cout << "Welcome to the Tic Tac Toe Simulator." << std::endl;
	std::cout << "please do not overwrite another players space" << std::endl;
	std::cout << "1 | 2 | 3\n"
		<< "___________\n"
		<< "4 | 5 | 6\n"
		<< "___________\n"
		<< "7 | 8 | 9\n";
	
}
void gameplay::playerturn()
{
	//ex:
	/*x | O | X
	___________
	X | O | X
	___________
	O | X | O  */
	std::cout << "what space would you like to place your call\n";
	std::cin >> playerSpace;
	switch (playerSpace)
	{
	case 1: playerSpace = a[0][0];
		break;
	case 2: playerSpace = a[0][1];
		break;
	case 3: playerSpace = a[0][2];
		break;
	case 4: playerSpace = a[1][0];
		break;
	case 5: playerSpace = a[1][1];
		break;
	case 6: playerSpace = a[1][2];
		break;
	case 7: playerSpace = a[2][0];
		break;
	case 8: playerSpace = a[2][1];
		break;
	case 9: playerSpace = a[2][2];
		break;
	}
	std::cout << "make a call for space " << playerSpace << std::endl;
	std::cin >> gameplay::playerCall;
	if (playerCall == 'x' && playerSpace == a[0][0])
	{
		playerchoice = 1;
		space1 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[0][0])
	{
		playerchoice = 1;
		space1 = 'o';
		results();
	}
	if (playerCall == 'x' && playerSpace == a[0][1])
	{
		playerchoice = 2;
		space2 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[0][1])
	{
		playerchoice = 2;
		space2 = 'o';
		results();
	}
	if (playerCall == 'x' && playerSpace == a[0][2])
	{
		playerchoice = 3;
		space3 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[0][2])
	{
		playerchoice = 3;
		space3 = 'o';
		results();
	}
	if (playerCall == 'x' && playerSpace == a[1][0])
	{
		playerchoice = 4;
		space4 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[1][0])
	{
		playerchoice = 4;
		space4 = 'o';
		results();
	}
	if (playerCall == 'x' && playerSpace == a[1][1])
	{
		playerchoice = 5;
		space5 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[1][1])
	{
		playerchoice = 5;
		space5 = 'o';
		results();
	}
	if (playerCall == 'x' && playerSpace == a[1][2])
	{
		playerchoice = 6;
		space6 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[1][2])
	{
		playerchoice = 6;
		space6 = 'o';
		results();
	}
	if (playerCall == 'x' && playerSpace == a[2][0])
	{
		playerchoice = 7;
		space7 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[2][0])
	{
		playerchoice = 7;
		space7 = 'o';
		results();
	}
	if (playerCall == 'x' && playerSpace == a[2][1])
	{
		playerchoice = 8;
		space8 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[2][1])
	{
		playerchoice = 8;
		space8 = 'x';
		results();
	}
	if (playerCall == 'x' && playerSpace == a[2][2])
	{
		playerchoice = 9;
		space9 = 'x';
		results();
	}
	if (playerCall == 'o' && playerSpace == a[2][2])
	{
		playerchoice = 9;
		space9 = 'o';
		results();
	}

}
void gameplay::computerturn()
{

}
void gameplay::results()
{
	std::cout
		<< space1 << " | " << space2 << " | "<< space3 << "\n"
		<< "___________\n"
		<< space4 << " | " << space5 << " | " << space6 << "\n"
		<< "___________\n"
		<< space7 << " | " << space8 << " | " << space9 << "\n";
}
int main()
{
	srand(time(NULL));
	bool cont = true;
	while (cont)
	{
		instructions_g();
		gameplay game;

	}

	system("pause");
}