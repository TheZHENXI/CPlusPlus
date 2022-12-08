#include <iostream>
using namespace std;

double PI = 3.14;
class Circle
{
public:
	//属性
	int m_r;
	//行为
	double CaculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//实例化
	Circle c1;
	c1.m_r = 10;

	cout << "圆的周长为：" << c1.CaculateZC() << endl;


	return 0;
}