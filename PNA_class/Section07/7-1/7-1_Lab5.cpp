// 참조에 의한 호출로 Circle 객체에 참조 전달 예제

#include <iostream>
using namespace std;

class Circle 
{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea() { return 3.14 * radius * radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this -> radius = radius; }
};

Circle::Circle()
{
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius)
{
    this -> radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()
{
    cout << "소멸자 실행 radius = " << radius << endl;
}

void increaseCircle(Circle &c)
{
    int r = c.getRadius();
    c.setRadius(r + 1);
}

int main()
{
    Circle waffle(30);
    increaseCircle(waffle); // 참조 매개 변수를 사용하여, 생성자와 소멸자 실행 X
    cout << waffle.getRadius() << endl;

    return  0;
}
