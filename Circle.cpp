#include <iostream>
using namespace std;

double PI = 3.14;
class Circle
{
public:
	//����
	int m_r;
	//��Ϊ
	double CaculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//ʵ����
	Circle c1;
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.CaculateZC() << endl;


	return 0;
}