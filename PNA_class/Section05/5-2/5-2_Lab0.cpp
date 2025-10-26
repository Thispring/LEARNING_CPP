// 소멸자 작성 및 실행 예시

#include <iostream>
using namespace std;

class Circle {
public:
    int radius;

    Circle();
    Circle(int r);
    ~Circle();  // 소멸자
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

// 소멸자 함수
Circle::~Circle() {
    cout << "반지름 " << radius << "원 소멸" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut;
    Circle pizza(30);

    // main 함수 종료 시, main 함수의 스택에 생성된 pizza -> donut 순으로 객체가 소멸
    return 0;
}
