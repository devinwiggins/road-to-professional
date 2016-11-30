#include <iostream>
#include "MyString.h"
#include "RPS.h"
int main()
{
	Application* gameplay = new RockPaperScissors();
	gameplay->Start();
	gameplay->Run();
	gameplay->Shutdown();

	int sum = Math::add(9, 10);
	system("pause");
}