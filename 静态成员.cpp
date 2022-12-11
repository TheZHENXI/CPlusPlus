#include <iostream>
using namespace std;
//静态成员变量
class Person
{
	//1.所有对象共享同一份数据
	//2.编译阶段就完成内存分配
	//3.类内声明，类外初始化
public:
	static int m_A;
private:
	static int m_B;
};
int Person::m_A = 100;
int Person::m_B = 200;

void test01()
{
	Person p1;
	//静态成员访问方式
	//1.通过对象访问
	//2.通过类名访问
	cout << p1.m_A << endl;
	cout << Person::m_A << endl;
	cout << &p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	//p2.m_B = 300;//静态成员也可以设置访问权限
	cout << p1.m_A << endl;
	cout << &p2.m_A << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}