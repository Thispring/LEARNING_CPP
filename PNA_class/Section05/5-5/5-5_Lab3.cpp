// 객체 배열 생성 시 기본 생성자 호출


#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    // 생성자가 없다면, 컴파일러가 자동으로 기본 생성자 삽입
    // 기본생성자 -> Circle() {}
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main()
{
    // 객체 배열은 기본 생성자가 있어야함
    Circle circleArray[3];

    return 0;
}


/*
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int r) { radius = r; }
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle waffle(15);
    // 객체 배열은 기본 생성자가 있어야함
    // 기본 생성자가 없어서 컴파일 오류
    Circle circleArray[3];

    return 0;
}
*/