#include <iostream>
using namespace std;
//��̬��Ա����
class Person
{
	//1.���ж�����ͬһ������
	//2.����׶ξ�����ڴ����
	//3.���������������ʼ��
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
	//��̬��Ա���ʷ�ʽ
	//1.ͨ���������
	//2.ͨ����������
	cout << p1.m_A << endl;
	cout << Person::m_A << endl;
	cout << &p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	//p2.m_B = 300;//��̬��ԱҲ�������÷���Ȩ��
	cout << p1.m_A << endl;
	cout << &p2.m_A << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}