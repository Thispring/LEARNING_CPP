#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    // class 이름과 같은 생성자
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time(int h, int m, int s):hour{h}, minute{m}, second{s} {}

    // 시간을 사용자의 값으로 바꾸는 메서드
    void set_hour(int h) { if(h>=24) hour = 0; else hour = h; } // 메서드의 조건문을 대괄호를 통해 작성 가능
    void set_minute(int m) { minute = m; }

    // private 멤버인 hour를 외부에서 읽기 위한 메서드
    int get_hour() {return hour;}

    // 함수의 인터페이스만 작성
    void inc_hour();
    void print_time();
};

void Time::inc_hour()
{
    ++hour;
    if (hour > 23)
        hour = 0;
}

void Time::print_time()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{   
    // 디폴트 생성자 호출
    Time t;
    // 매개변수가 3개인 생성자 호출
    Time t2(13, 30, 30);
    t.inc_hour();
    t.print_time();

    t.set_hour(25);
    t.set_minute(30);
    t.print_time();
    
    t2.print_time();

    cout << "t time: " << t.get_hour() << endl;
    return 0;
}