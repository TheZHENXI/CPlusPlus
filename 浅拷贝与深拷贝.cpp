#include <iostream>
using namespace std;

class Person
{
public:
	//Person()
	//{
	//	cout << "无参默认构造" << endl;
	//}
	Person(int age, int height)
	{
		_age = age;
		_height = new int(height);
	}
	//拷贝构造
	Person(const Person& p)
	{
		cout << "拷贝构造调用" << endl;
		//深拷贝在堆区创建新内存，防止浅拷贝带来的重复释放堆区问题
		_age = p._age;
		_height = new int(*p._height);
	}
	//析构函数
	~Person()
	{
		cout << "析构函数调用" << endl;
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