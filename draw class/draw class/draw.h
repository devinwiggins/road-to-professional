#pragma once
#include <math.h>
//We need you to create a set of classes that represent 2D shapes that we can use for various reasons in our new game.
//We need the following shapes available to us :
//Point
//Rectangle
//Circle
//Line
//Triangle
//
//The following rules need to be applied :
//-All shapes need to have a common base class called : BaseShape.
//- BaseShape needs to define a pure virtual function called : void DebugPrint().
//- Each shape's implementation of DebugPrint should print out all of the attributes for the shape. How that string is formatted is up to you.
//- Everything else is up to you, what attributes each shape is made up of, how those attributes are accessed, etc
class BaseShape
{
public:
	virtual void DebugPrint();
};

class Point : BaseShape
{
	
public:
	
	Point() {}
	Point(float x, float y);
	virtual void DebugPrint();
	float m_x;
	float m_y;
};

class Line : BaseShape
{
	Point one, two;
	float line;
public:
	Line() {}
	Line(float x1, float y1, float x2, float y2);
	Line(Point one, Point two);
	virtual void DebugPrint();

};

class Square : BaseShape
{

	Line top, left, bottom, right;
public:
	Square(Line north, Line west, Line south, Line east);
	virtual void DebugPrint();
	float Paremeter();
	float Area();
};

 class Rectangle : BaseShape
{
public:
	Rectangle(Line north, Line west, Line south, Line east);
	virtual void DebugPrint();
	float Paremeter();
	float Area();
};

class Triangle : BaseShape
{
public:
	Triangle(Line left, Line base, Line right);
	virtual void DebugPrint();
	float Paremeter();
	float Area();
};

class Circle : BaseShape
{
public:
	Circle(Line circle);
	virtual void DebugPrint();
	float circumference();
	float Volume();
};