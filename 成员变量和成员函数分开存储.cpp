#include <iostream>
using namespace std;

class Person
{
public:
	int m_A; //ֻ�о�̬��Ա���� ������Ķ�����
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