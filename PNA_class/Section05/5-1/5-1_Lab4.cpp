// 생성자가 하나라도 선언된 클래스의 경우
// 컴파일러는 기본 생성자를 자동 생성하지 않음

#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    double getArea();
    Circle(int r);
};

Circle::Circle(int r) {
    radius = r;
}

int main()
{
    Circle pizza(30);
    //Circle donut;   // 기본 생성자가 없어 컴파일 오류

    return 0;
}