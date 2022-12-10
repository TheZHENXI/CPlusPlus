#include <iostream>
using namespace std;

class  Person
{
public:
	 Person()
	 {
		 cout << "调用构造函数" << endl;
	 }
	 ~Person()
	 {
		 cout << "调用析构函数" << endl;
	 }

};

int main() 
{
	Person p;

	system("pause");
	return 0;
}