#include <iostream>
using namespace std;
#include <string.h>

class Student
{
public:
	//���� ��Ա����
	string _NAME;
	int _ID;
	
	//��Ϊ ��Ա����
	void ShowInf()
	{
		cout << "���֣�" << _NAME << endl;
		cout << "ѧ�ţ�" << _ID << endl;
	}
};

int main()
{
	//ʵ����
	Student s1;
	s1._NAME = "��������";
	s1._ID = 250;

	s1.ShowInf();


	return 0;
}