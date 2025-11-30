// 상속을 활용한 도형 객체 실습

#include <iostream>
using namespace std;

class Shape {
    int x, y;
public:
    Shape(int x = 0, int y = 0) : x{x}, y{y} {}
    void setX(int x) { this -> x = x; }
    void setY(int y) { this -> y = y; }
    int getX() { return x; }
    int getY() { return y; }
    void draw() { cout << "Shape drawing" << endl; }
    int getArea() { return  0; }
};

class Circle : public Shape {
    int r;
public:
    Circle(int r, int x, int y) : Shape(x, y), r{r} {}
    void draw() { cout << "Circle drawing" << endl; }
    double getArea() {
        return  3.14 * r * r ;
    }
};

class Rect : public Shape {
    int w, h;
public:
    Rect(int x, int y, int w, int h) : Shape(x, y), w{w}, h{h} {}
    void draw() { cout << "Rectangle drawing" << endl; }
};

int main()
{
    Circle c(10, 1, 1);
    Rect r(1, 1, 10, 20);
    c.draw();
    r.draw();
    cout << c.getArea() << endl;
    cout << r.getArea() << endl;
}
