#include <iostream>
using namespace std;
//��̬����
class Person
{
	//1.������ͬһ����
	//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
public:
	static void func()
	{
		m_A = 500;
		//m_C = 120; ��̬��Ա�������ܷ��ʷǾ�̬��Ա����
	}
	static int m_A;
	int m_C;
private:
	static int m_B;
};
int Person::m_A = 100;
int Person::m_B = 200;

void test01()
{
	Person p1;
	cout << p1.m_A << endl;
	p1.func();
	cout << Person::m_A << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}