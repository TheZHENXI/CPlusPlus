#include <iostream>
using namespace std;

class Person
{
public:
	string _name;

protected:
	string _car;

private:
	int _password;
};

int main()
{
	Person p;
	p._name = "уехЩ";
	p._car = "123";
}