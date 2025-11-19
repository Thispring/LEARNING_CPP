// 전역함수 연산자 오버로딩 예제

#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int _x = 0, int _y = 0):x(_x), y(_y){}
    void ShowPosition();
    friend Point operator+(const Point& p1, const Point& p2);
};
void Point::ShowPosition(){
    cout << x << " " << y << endl;
}

// 클래스 외부에 연산자 오버로딩 정의
Point operator+(const Point& p1, const Point& p2)
{
    Point temp(p1.x+p2.x, p1.y+p2.y);
    return temp;
}

int main()
{
    Point p1(1, 2);
    Point p2(2, 1);
    Point p3 = p1 + p2; // p3 = operator + (p1, p2)
    p3.ShowPosition();

    return 0;
}
