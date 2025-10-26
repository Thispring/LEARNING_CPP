// 아래 클래스를 가지고 하나의 객체를 생성하는 프로그램을 작성

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width, height;
    int caleArea()
    {
        return width * height;
    }
};

int main(void)
{
    Rectangle box1, box2;

    box1.width = 20;
    box1.height = 20;
    cout << "박스의 넓이는 " << box1.caleArea() << endl;

    box2.width = 10;
    box2.height = 50;
    cout << "박스의 넓이는 " << box2.caleArea() << endl;

    return 0;
}