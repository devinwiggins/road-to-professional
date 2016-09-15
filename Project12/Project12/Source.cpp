#include <iostream>
class student
{
	char m_race;
	int m_age;
	int m_items;
public:
	student(char skinColor, int yearsOld, int stuff)
	{
		m_race = skinColor;
		m_age = yearsOld;
		m_items = stuff;// stuff they brought with them to school
	} // everything that belongs to said person(s)

};
bool swap(student &a, student &b)
{

	student tmp = a;
	a = b;
	b = tmp;
	return 1;
}
int main()
{
	student devin = student('b', 19, 1);
	student dylan = student('w', 20, 2);
	student placeInClassroom[2] = { devin, dylan };
	swap(placeInClassroom[0], placeInClassroom[1]);
	/* the classroom only has two seats and I am moving these students' seats because I like change they will be moving
	and they will be taking everything with them including their races */
	system("pause");
}