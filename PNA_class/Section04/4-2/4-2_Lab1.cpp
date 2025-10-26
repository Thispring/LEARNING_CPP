// 여러 개의 객체 생성 예제

#include <iostream>
using namespace std;

class Circle{
    public:
        int radius;
        string color;

        double caleArea(){
            return 3.14 * radius * radius;
        }          
};

int main(void)
{
    Circle pizza1, pizza2;

    pizza1.radius = 100;
    pizza1.color = "yellow";
    cout << "피자의 색상: " << pizza1.color << endl;
    cout << "피자의 면적: " << pizza1.caleArea() << endl;

    pizza2.radius = 200;
    pizza2.color = "white";
    cout << "피자의 색상: " << pizza2.color << endl;
    cout << "피자의 면적: " << pizza2.caleArea() << endl;

    return 0;
}