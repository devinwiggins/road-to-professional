#include "draw.h"

Point::Point(float x, float y)
{
	float m_x;
	float m_y;
}

Line::Line(float x1, float y1, float x2, float y2)
{
	one.m_x = x1;
	one.m_y = y2;
	two.m_x = x1;
	two.m_y = y2;
	float result = ((two.m_x - one.m_x) * (two.m_x - one.m_x)) + ((two.m_y - one.m_y)*(two.m_y - one.m_y));
	line = sqrt(result);

}

Line::Line(Point left, Point right)
{
	one.m_x = left.m_x;
	one.m_y = left.m_y;
	two.m_x = right.m_x;
	two.m_y = right.m_y;
	float result = ((two.m_x - one.m_x) * (two.m_x - one.m_x)) + ((two.m_y - one.m_y)*(two.m_y - one.m_y));
	line = sqrt(result);
}

Square::Square(Line north, Line west, Line south, Line east)
{
	top = north;
	left = west;
	bottom = south;
	right = east;
}
