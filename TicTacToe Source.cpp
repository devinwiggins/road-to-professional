// tic tac toe sim
#include <iostream>
#include <time.h>
enum action
{
	o = 0,
	x = 1,
};

void instructions_g()
{
	std::cout << "Welcome to the Tic Tac Toe Simulator." << std::endl;
	std::cout << "1 | 2 | 3\n"
		<< "___________\n"
		<< "4 | 5 | 6\n"
		<< "___________\n"
		<< "O | X | O\n";
}
void play()
{
	int space;
	char a[3][3] = {
		{ '1', '2', '3' }, // 1st row
		{ '4', '5', '6' }, // 2nd row
		{ '7', '8', '9' } };// 3rd row
							//ex:   
							/*x | O | X
							___________
							X | O | X
							___________
							O | X | O  */
	std::cout << "would space would you like to place your call\n";
	std::cin >> space;
	std::cout << "make a call for space " << space <<  std::endl; //supposed to allow player to choose a space needs to be updated
	std::cin >> a[0][0];

	if (a[0][0] = 'x' || 'X' && a[0][0] != 'o' || 'O')
	{
		std::cout
			<< "x | 2 | 3\n"
			<< "___________\n"
			<< "4 | 5 | 6\n"
			<< "___________\n"
			<< "7 | 8 | 9\n";
	}
	if (a[0][0] = 'o' || 'o' && a[0][0] != 'x' || 'X') {
		std::cout
			<< "o | 2 | 3\n"
			<< "___________\n"
			<< "4 | 5 | 6\n"
			<< "___________\n"
			<< "7 | 8 | 9\n";
	}
	for (int i = 0; i < 1; i++) {
		//cpu next action action
	}
}
int main()
{
	srand(time(NULL));
	char call;
	int place;
	instructions_g();
	play();
	system("pause");
}