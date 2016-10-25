#pragma once
#include <iostream>

class Weapon
{
	std::string m_name;
	float m_minimumDamage;
	float m_maximumDamage;
	float m_attackSpeed;
public:
	Weapon(std::string, float, float, float speed);
	float DamagePerSecond();
};