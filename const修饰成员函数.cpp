#include <iostream>
using namespace std;

class Person
{
public:
	//�൱�� const Person* const this
	//�ڳ�Ա�������const�����ε���*this��
	void ShowName() const
	{
		m_B = 10;
		//this->m_A = 10;
		//this = NULL; //˭����thisָ��˭��Ĭ��ΪPerson * const this�������ڸ���
	}

	int m_A; 
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸ĸñ�������mutable
};

void test01()
{
	Person p;
	p.ShowName();
	
}
void test02()
{
	const Person p1; //������
	p1.m_B = 20; //������� �ڳ�������Ҳ�����޸�
}

int main()
{
	test01();
	return 0;
}