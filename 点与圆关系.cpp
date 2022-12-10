//#include <iostream>
//using namespace std;
//#include "Circle.h"
//
//////点类
////class Point
////{
////public:
////	//设置X
////	void SetX(int x)
////	{
////		_X = x;
////	}
////	//获取X
////	int GetX()
////	{
////		return _X;
////	}
////	//设置Y
////	void SetY(int y)
////	{
////		_Y = y;
////	}
////	//获取Y
////	int GetY()
////	{
////		return _Y;
////	}
////private:
////	int _X;
////	int _Y;
////};
//////圆类
////class Circle
////{
////public:
////	//设置半径
////	void SetR(int r)
////	{
////		_R = r;
////	}
////	//获取半径
////	int GetR()
////	{
////		return _R;
////	}
////	//设置圆心
////	void SetCenter(Point center)
////	{
////		_Center = center;
////	}
////	//获取圆心
////	Point GetCenter()
////	{
////		return _Center;
////	}
////private:
////	Point _Center;//在类中，让另一个类作为本类中的成员
////	int _R;
////};
//
//void IsInCircle(Circle& c, Point& p)
//{
//	//计算点到圆心的距离的平方
//	int Distance = ((c.GetCenter().GetX() - p.GetX()) * (c.GetCenter().GetX() - p.GetX())) 
//		         + ((c.GetCenter().GetY() - p.GetY()) * (c.GetCenter().GetY() - p.GetY()));
//	//计算半径的平方
//	int R2 = c.GetR() * c.GetR();
//
//	//比较
//	if (Distance > R2)
//		cout << "点在圆外" << endl;
//	else if (Distance < R2)
//		cout << "点在圆内" << endl;
//	else
//		cout << "点在圆上" << endl;
//}
//
//int main()
//{
//	//创建点
//	Point p;
//	p.SetX(10);
//	p.SetY(19);
//
//	//创建圆
//	Circle c;
//	c.SetR(10);
//	Point center;
//	center.SetX(10);
//	center.SetY(0);
//	c.SetCenter(center);
//
//	IsInCircle(c, p);
//}
