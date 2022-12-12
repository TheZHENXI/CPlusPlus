#include <iostream>
using namespace std;

class Building
{
	//告诉编译器，全局函数goodGay是类Building的好朋友，可以访问类中的私有成员变量
	friend void goodGay(Building* building);
public:
	Building()
	{
		sittingRoom = "客厅";
		bedRoom = "卧室";
	}
public:
	string sittingRoom;//客厅
private:
	string bedRoom;//卧室
};

void goodGay(Building* building)
{
	cout << "好基友正在访问你的：" << building->sittingRoom << endl;
	cout << "好基友正在访问你的：" << building->bedRoom << endl;
}

void test01()
{
	Building b;
	goodGay(&b);
}

int main()
{
	test01();
	return 0;
}