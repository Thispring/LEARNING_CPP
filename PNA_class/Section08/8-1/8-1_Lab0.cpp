// 멤버 함수 연산자 오버로딩 예제

#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int _x = 0, int _y = 0) { x = _x; y = _y; }
    void ShowPosition();
    // 클래스 내부에 연산자 오버로딩 정의
    Point operator+(const Point& p);
};

void Point::ShowPosition()
{
    cout << x << " " << y << endl;
}

Point Point::operator+(const Point& p)
{
    /*
    Point temp;
    temp.x = x + p.x;
    temp.y = y + p.y;
    */
    Point temp(x+p.x, y+p.y); // 와 같이 작성가능
    return temp;
}

int main()
{
    Point p1(1, 2);
    Point p2(2, 1);
    Point p3 = p1 + p2; // p3 = p1.operator + (p2);
    p3.ShowPosition();
    
    return 0;
}
