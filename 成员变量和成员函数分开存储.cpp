#include <iostream>
using namespace std;

class Person
{
public:
	int m_A; //只有静态成员变量 属于类的对象上
	static int m_B;
	void func() {};
	static void func1() {};
};

void test01()
{
	Person p;
	cout << "size of p:" << sizeof(p) << endl;
}

int main()
{
	test01();
	return 0;
}