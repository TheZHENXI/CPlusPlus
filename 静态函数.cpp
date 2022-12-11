#include <iostream>
using namespace std;
//静态函数
class Person
{
	//1.程序共享同一函数
	//2.静态成员函数只能访问静态成员变量
public:
	static void func()
	{
		m_A = 500;
		//m_C = 120; 静态成员函数不能访问非静态成员变量
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