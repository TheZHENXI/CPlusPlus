#include <iostream>
using namespace std;

class Person
{
public:
	//Person()
	//{
	//	cout << "�޲�Ĭ�Ϲ���" << endl;
	//}
	Person(int age, int height)
	{
		_age = age;
		_height = new int(height);
	}
	//��������
	Person(const Person& p)
	{
		cout << "�����������" << endl;
		//����ڶ����������ڴ棬��ֹǳ�����������ظ��ͷŶ�������
		_age = p._age;
		_height = new int(*p._height);
	}
	//��������
	~Person()
	{
		cout << "������������" << endl;
		if (_height != NULL)
		{
			delete _height;
			_height = NULL;
		}
	}

//private:
	int _age;
	int* _height;
};
void test01()
{
	Person p1(20, 178);

	Person p2(p1);

	cout << p1._age << ' ' << *p1._height << endl;

	cout << p2._age << ' ' << *p2._height << endl;
}
int main()
{
	test01();

	system("pause");

	return 0;
}