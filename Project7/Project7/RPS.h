#pragma once
#include <iostream>
#include "MyString.h"
class Application
{
public:
	virtual void Start() = 0;
	void Run();
	virtual void Shutdown() = 0;
	Application() { gameover = true; };
	virtual void Update() = 0;
protected:
	bool gameover;
};
class RockPaperScissors : public Application
{
public:
	void Start();
	void Update();
	void Shutdown();
	void RPS();
};
class Math
{
public:
	static int add(int a, int b);
};