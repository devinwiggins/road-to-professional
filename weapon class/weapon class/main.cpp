#include "Weapon.h"
int main()
{
	Weapon SMG = Weapon("SMG", 96.2, 96.2, 0.9);
	std::cout << SMG.DamagePerSecond() << std::endl;

}