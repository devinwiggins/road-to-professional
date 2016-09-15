#pragma once
class gameplay
{
	char a[3][3] = {
		{ '1', '2', '3' }, // 1st row
		{ '4', '5', '6' }, // 2nd row
		{ '7', '8', '9' }// 3rd row
	};
public:
	gameplay();
	char space1, space2, space3, space4, space5, space6, space7, space8, space9;
	char playerCall;
	char playerSpace;
	int playerchoice;
	void playerturn();
	void results();
	void computerturn();
};