#include <iostream>
using namespace std;

class  Person
{
public:
	 Person()
	 {
		 cout << "���ù��캯��" << endl;
	 }
	 ~Person()
	 {
		 cout << "������������" << endl;
	 }

};

int main() 
{
	Person p;

	system("pause");
	return 0;
}