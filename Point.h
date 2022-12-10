#pragma once
#include <iostream>

//点类
class Point
{
public:
	//设置X
	void SetX(int x);
	//获取X
	int GetX();
	//设置Y
	void SetY(int y);
	//获取Y
	int GetY();
private:
	int _X;
	int _Y;
};