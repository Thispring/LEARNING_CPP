// const 멤버, 포인터 예제

#include <iostream>
using namespace std;

class Circle
{
private:
    int radius;
public:
    Circle(): radius(10) {}
    ~Circle() {}
    void setRadius(int radius) { this -> radius = radius; }
    int getRadius() const { return radius; }    // 멤버변수를 변경할 수 없다.
};

int main()
{
    Circle *p = new Circle();
    const Circle *pConstObj = new Circle(); // const Circle을 가리키도록 선언, 멤버 변수를 변경하는 멤버함수 호출 불가
    Circle *const pConstPtr = new Circle(); // Circle에 대한 상수 포인터로 선언됨, 따라서 다른 객체를 가리킬 수없다. 객체는 변경가능

    cout << "pRect->radius: " << p -> getRadius() << endl;
    cout << "pConstObj->radius: " << pConstObj -> getRadius() << endl;
    cout << "pConstPtr->radius: " << pConstPtr -> getRadius() << endl;

    p -> setRadius(30);
    //pConstObj -> setRadius(30); // set 함수 호출 불가로, 멤버 변수 변경 불가
    pConstPtr -> setRadius(30);

    cout << "pRect->radius: " << p -> getRadius() << endl;
    cout << "pConstObj->radius: " << pConstObj -> getRadius() << endl;
    cout << "pConstPtr->radius: " << pConstPtr -> getRadius() << endl;

    return 0;
}
