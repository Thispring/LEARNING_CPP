// Car 클래스 작성

#include <iostream>
using namespace std;

class Car
{
public:
    int speed;
    int gear;
    string color;

    void speedUP(int sp, int gear)
    {
        speed += (sp * gear);
    }

    void speedDown(int sp, int gear)
    {
        speed -= (sp * gear);
    }

    void Print_Info()
    {
        cout << "현재 차의 정보: " << endl;
        cout << "색상: " << color << endl;
        cout << "속도: " << speed << "km/h" << endl;
        cout << "기어: " << gear << "단" << endl;
    }
};

int main(void)
{
    Car car;

    car.speed = 100;
    car.gear = 3;
    car.color = "red";
    car.Print_Info();

    car.speedUP(50, car.gear = 2);
    cout << "속도 증가" << endl;
    car.Print_Info();

    car.speedDown(40, car.gear = 1);
    cout << "속도 감소" << endl;
    car.Print_Info();

    return 0;
}