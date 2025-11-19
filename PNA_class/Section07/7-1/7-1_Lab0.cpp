// 객체 리턴 예제

#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this -> radius = radius; } // this는 자기 자신을 가리키는 객체 포인터
    void setRadius(int radius) { this -> radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle getCircle() {
    Circle tmp(30);
    return tmp; // 객체 tmp를 리턴한다.
    // tmp 객체의 복사본이 리턴된다.
}

int main()
{
    Circle c;   // 객체 생성, radius 1로 초기화
    cout << c.getArea() << endl;

    c = getCircle();    // tmp 객체가 c에 복사된다.
    // c의 radius는 30이 된다.
    cout << c.getArea() << endl;

    return 0;
}
