#pragma once
#include <iostream>
#include "Point.h"

//圆类
class Circle
{
public:
	//设置半径
	void SetR(int r);
	//获取半径
	int GetR();
	//设置圆心
	void SetCenter(Point center);
	//获取圆心
	Point GetCenter();
private:
	Point _Center;
	int _R;
};