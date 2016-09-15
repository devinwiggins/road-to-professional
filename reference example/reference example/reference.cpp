#include <iostream>
////int main()
////{
////	int dragonHealth = 100;
////	int  *myRef = &dragonHealth;
////	int attackpower = 40;
////	*myRef -= attackpower;
////	std::cout << *myRef << std::endl;
////	system("pause");
////}
void attack(int &defense,int &health, int &result )
{
	int damage;
	int attackpower = 100;
	damage = attackpower / defense;
	result = health - damage;
}
int main()
{
	int dragonEndHP;
	int dragonhealth = 100;
	int dragondefense = 20;
	attack(dragondefense, dragonhealth, dragonEndHP);

	std::cout << dragonEndHP << std::endl;
	system("pause");
}