#include <iostream>
using namespace std;
#include <string.h>

class Student
{
public:
	//属性 成员变量
	string _NAME;
	int _ID;
	
	//行为 成员函数
	void ShowInf()
	{
		cout << "名字：" << _NAME << endl;
		cout << "学号：" << _ID << endl;
	}
};

int main()
{
	//实例化
	Student s1;
	s1._NAME = "德玛西亚";
	s1._ID = 250;

	s1.ShowInf();


	return 0;
}