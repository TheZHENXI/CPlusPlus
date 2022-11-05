#include <iostream>
using namespace std;

class Stack
{
public:
    Stack(int n = 10)//全缺省构造
    {
        _data = (int*)malloc(sizeof(int)*n);
        _size = 0;
        _capacity = n;
        cout << "Stack()" << this << endl;
    }
    void StackPush();
    void StackPop();
    ~Stack() //析构函数：在对象生命周期结束后自动调用
    {
        free(_data);
        cout << "~Stack()" << this << endl;
        _data = nullptr;
        _size = _capacity = 0;
    }

private:
    int* _data;
    int _size;
    int _capacity;    
};
int main()
{
    Stack s1;
    Stack s2;
    return 0;
}