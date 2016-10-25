#include "Weapon.h"

Weapon::Weapon(std::string name, float min, float max, float speed)
{
	m_name = name;
	m_minimumDamage = min;
	m_maximumDamage = max;
	m_attackSpeed = speed;
}

float Weapon::DamagePerSecond()
{
	float averageDamage = m_minimumDamage + m_maximumDamage / 2;
	return averageDamage * m_attackSpeed;
}
