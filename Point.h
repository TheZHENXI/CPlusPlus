#pragma once
#include <iostream>

//����
class Point
{
public:
	//����X
	void SetX(int x);
	//��ȡX
	int GetX();
	//����Y
	void SetY(int y);
	//��ȡY
	int GetY();
private:
	int _X;
	int _Y;
};