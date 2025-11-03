// Circle 객체의 동적 생성과 반환 응용
// 정수 반지름을 입력 받고 Circle 객체를 동적 생성하여 면적을 출력하라.
// 음수가 입력되면 프로그램은 종료한다.

#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int r);
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(int r)
{
    radius = r;
}

int main()
{
    int user = 0;
    Circle *pc;
    cout << "Input Radius: " << endl;
    cin >> user;
    
    if (user <= 0) return 0;
    pc = new Circle(user);
    cout << "Circle radius is " << pc -> getArea() << endl;

    delete pc;

    return 0;
}
