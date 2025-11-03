// 객체 배열의 동적 생성과 반환 응용
// 원의 개수를 입력 받고 Circle 배열을 동적 생성하라
// 반지름 값을 입력 받아 Circle 배열에 저장하고, 면적이 100에서 200 사이인 원의 개수를 출력하라

#include <iostream>
using namespace std;

class Circle
{
    int radius;

public:
    Circle();
    ~Circle();
    void setRadius(int r);
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() 
{
    radius = 1;
}

Circle::~Circle()
{

}

void Circle::setRadius(int r)
{
    radius = r;
}

int main()
{
    int circleNum;
    int radiusNum;  
    int count = 0;

    cout << "Input CircleNumber: " << endl;
    cin >> circleNum;

    Circle *p = new Circle[circleNum];

    for (int i = 1; i <= circleNum; i++)
    {
        cout << "Input RadiusNumber[" << i << "]: " << endl;
        cin >> radiusNum;
        p[i].setRadius(radiusNum);
    }

    for (int i = 1; i <= circleNum; i++)
    {
        cout << p[i].getArea() << endl;
        if (100 <= p[i].getArea() && 200 >= p[i].getArea())
        {
            count++;
        }
    }
    
    cout << "Circle area 100 ~ 200 = " << count << endl;

    delete []p;
    
    return 0;
}