#pragma once
#include <iostream>
#include "Point.h"

//Բ��
class Circle
{
public:
	//���ð뾶
	void SetR(int r);
	//��ȡ�뾶
	int GetR();
	//����Բ��
	void SetCenter(Point center);
	//��ȡԲ��
	Point GetCenter();
private:
	Point _Center;
	int _R;
};