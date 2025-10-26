// 생성자

#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;

    // 생성자
    Time (int h = 0, int m = 0) {
        hour = h;
        minute = m;
    }
    
    void print() {
        cout << hour << ":" << minute << endl;
    }
};

int main()
{
    Time a;
    Time b{10, 25}; 
    // class Time의 생성자에 접근해
    // h에 10, m에 25 전달

    a.print();
    b.print();

    return 0;
}