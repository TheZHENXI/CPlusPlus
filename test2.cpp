#include <iostream>
using namespace std;
class Student
{
public:
    size_t _age;
    size_t _id;
    char _name[20] = "zhang";
public:
    void ShowInfo()
    {
        cout << _age << endl;
        cout << _name << endl;
        cout << _id << endl;
    }
    size_t GetAge()
    {
        return _age;
    }
};

int main()
{
    Student s1;
    s1._age = 20;
    // s1._name = "zhang";
    s1._id = 8;
    s1.ShowInfo();
    
    cout << "hello world" << endl;
    return 0;
}
//1 2 3
//3 4 5
