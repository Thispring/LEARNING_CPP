// 순수 가상 함수 예제

#include <iostream>
using namespace std;

class Date {
protected:
    int year, month, day;
public:
    Date(int y, int m, int d)
        { year = y; month = m; day = d; }
    virtual void print() = 0;   // 순수 가상함수 선언
};

class Adate : public Date {
public:
    Adate(int y, int m, int d) : Date(y, m, d)
        { /*no operation*/ }
    void print()    // 가상함수 구현
        { cout << year << '.' << month << '.' << day << '.' << endl; }
};

class Bdate : public Date {
public:
    Bdate(int y, int m, int d) : Date(y, m, d)
        { /*no operation*/ }
    void print();   // 가상함수
};

void Bdate::print()
{
    static char *mn[] = {
        "Jan", "Feb", "Mar", "Apr", "May",
        "June", "July", "Aug", "Sep", "Oct", 
        "Nov", "Dec" };
    cout << mn[month - 1] << ' ' << day << ' ' << year << endl;
}

int main()
{
    Adate a(1994, 6, 1);
    Bdate b(1945, 8, 15);
    Date &r1 = a, &r2 = b;  // 참조자
    r1.print();
    r2.print();
}