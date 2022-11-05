#include <iostream>
using namespace std;

class Date
{
public:
    //构造函数：在对象构造时调用的函数，完成对对象的初始化
    // Date(int year,int month,int day)
    // {
    //     _year  = year;
    //     _month = month;
    //     _day   = day;
    // }
    // //1.无参构造函数也称默认构造函数
    // Date()
    // {
    //     _year  = 2022;
    //     _month = 11;
    //     _day   = 11;
    // }
    //2.全缺省构造函数（最常用、），也成为默认构造函数；1和2不能同时存在
    Date(int year = 0,int month = 0,int day = 0)
    {
        _year  = year;
        _month = month;
        _day   = day;
    }
    //3.不写构造函数，编译器默认会有存在一个构造函数，
    // 但是会存在双标（初始化自定的变量，不初始化基本变量）
    void Print()
    {
        cout << _year << '/' << _month  << '/' << _day << endl;
    }
private:
    int _year;
    int _month;
    int _day;    
};
int main()
{
    Date d1;
    d1.Print();

    Date d2;
    d2.Print();
    return 0;
}