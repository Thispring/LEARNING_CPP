// Rectangle 클래스 만들기
/*
다음 main() 함수가 잘 작동하도록 Rectangle 클래스를 작성하고 프로그램을 완성하라.
Rectangle 클래스는 width와 height의 두 멤버 변수와 3개의 생성자, 그리고 isSquare() 함수를 가진다.
*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width;
    int height;

    Rectangle();             // 매개 변수가 없는 생성자
    Rectangle(int i);        // 매개 변수가 1개인 생성자
    Rectangle(int w, int h); // 매개 변수가 2개인 생성자

    bool isSquare();
};

// 생성자의 종류마다 구현 방식을 다르게 적어줘야함
Rectangle::Rectangle()
{
    width = height = 1;
}

Rectangle::Rectangle(int i)
{
    width = height = i;
}

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

bool Rectangle::isSquare()
{
    if (width == height)
        return true;
    else
        return false;
}

int main(void)
{
    Rectangle rect1;    
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare())
        cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare())
        cout << "rect2는 정사각형이다." << endl;
    if (rect3.isSquare())
        cout << "rect3은 정사각형이다." << endl;

    return 0;
}
