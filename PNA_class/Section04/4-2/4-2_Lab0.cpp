// 클래스 작성과 활용

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
    Circle obj; // 객체 생성

    obj.radius = 100;
    obj.color = "blue";

    cout << "원의 면적= " << obj.caleArea() << endl;

    return 0;
}
