#include <iostream>
using namespace std;

class Person
{
public:
	Person(int a, int b, int c) :_a(a),_b(b),_c(c)
	{
		cout << _a << ' '<< _b <<  ' ' << _c << endl;
	}
private:
	int _a;
	int _b;
	int _c;
};

void test01()
{
	Person(10, 20, 30);

}

int main()
{
	test01();

	system("pause");

	return 0;
}