// 사각형을 나타내는 Rectangle 클래스에 생성자를 추가해보자
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    // 생성자
    Rectangle(int w, int h);
    int caleArea();
};

Rectangle::Rectangle (int w, int h) 
{
    width = w;
    height = h;
}

int Rectangle::caleArea()
{
    return width * height;
}

int main()
{
    Rectangle r{3, 4};

    cout << "사각형의 넓이: " << r.caleArea() << endl;
    return 0;
}