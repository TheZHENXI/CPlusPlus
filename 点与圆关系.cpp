//#include <iostream>
//using namespace std;
//#include "Circle.h"
//
//////����
////class Point
////{
////public:
////	//����X
////	void SetX(int x)
////	{
////		_X = x;
////	}
////	//��ȡX
////	int GetX()
////	{
////		return _X;
////	}
////	//����Y
////	void SetY(int y)
////	{
////		_Y = y;
////	}
////	//��ȡY
////	int GetY()
////	{
////		return _Y;
////	}
////private:
////	int _X;
////	int _Y;
////};
//////Բ��
////class Circle
////{
////public:
////	//���ð뾶
////	void SetR(int r)
////	{
////		_R = r;
////	}
////	//��ȡ�뾶
////	int GetR()
////	{
////		return _R;
////	}
////	//����Բ��
////	void SetCenter(Point center)
////	{
////		_Center = center;
////	}
////	//��ȡԲ��
////	Point GetCenter()
////	{
////		return _Center;
////	}
////private:
////	Point _Center;//�����У�����һ������Ϊ�����еĳ�Ա
////	int _R;
////};
//
//void IsInCircle(Circle& c, Point& p)
//{
//	//����㵽Բ�ĵľ����ƽ��
//	int Distance = ((c.GetCenter().GetX() - p.GetX()) * (c.GetCenter().GetX() - p.GetX())) 
//		         + ((c.GetCenter().GetY() - p.GetY()) * (c.GetCenter().GetY() - p.GetY()));
//	//����뾶��ƽ��
//	int R2 = c.GetR() * c.GetR();
//
//	//�Ƚ�
//	if (Distance > R2)
//		cout << "����Բ��" << endl;
//	else if (Distance < R2)
//		cout << "����Բ��" << endl;
//	else
//		cout << "����Բ��" << endl;
//}
//
//int main()
//{
//	//������
//	Point p;
//	p.SetX(10);
//	p.SetY(19);
//
//	//����Բ
//	Circle c;
//	c.SetR(10);
//	Point center;
//	center.SetX(10);
//	center.SetY(0);
//	c.SetCenter(center);
//
//	IsInCircle(c, p);
//}
