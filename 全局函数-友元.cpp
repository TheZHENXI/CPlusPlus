#include <iostream>
using namespace std;

class Building
{
	//���߱�������ȫ�ֺ���goodGay����Building�ĺ����ѣ����Է������е�˽�г�Ա����
	friend void goodGay(Building* building);
public:
	Building()
	{
		sittingRoom = "����";
		bedRoom = "����";
	}
public:
	string sittingRoom;//����
private:
	string bedRoom;//����
};

void goodGay(Building* building)
{
	cout << "�û������ڷ�����ģ�" << building->sittingRoom << endl;
	cout << "�û������ڷ�����ģ�" << building->bedRoom << endl;
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