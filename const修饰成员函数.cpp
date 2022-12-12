#include <iostream>
using namespace std;

class Person
{
public:
	//相当于 const Person* const this
	//在成员函数后加const，修饰的是*this，
	void ShowName() const
	{
		m_B = 10;
		//this->m_A = 10;
		//this = NULL; //谁调用this指向谁，默认为Person * const this，不能在更改
	}

	int m_A; 
	mutable int m_B;//特殊变量，即使在常函数中，也可以修改该变量，加mutable
};

void test01()
{
	Person p;
	p.ShowName();
	
}
void test02()
{
	const Person p1; //常对象
	p1.m_B = 20; //特殊变量 在常对象中也可以修改
}

int main()
{
	test01();
	return 0;
}