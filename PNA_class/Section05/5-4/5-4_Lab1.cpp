// 접근자, 생성자 예제

#include <iostream>
using namespace std;

class Time {
public:
    // 생성자
    Time(int h, int m);
    void inc_hour();
    void print();

    // 접근자 선언
    int getHour() { return hour; }
    int getMinute() { return minute; }
    // 생성자 선언
    void setHour(int h) { hour = h; }
    void setMinute(int m) { minute = m; }
    
private:
    int hour;
    int minute;
};

int main()
{
    Time a{0, 0};
    
    a.setHour(6);
    a.setMinute(30);

    a.print();

    return 0;
}