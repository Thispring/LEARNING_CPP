// 다중상속 예제

#include <iostream>
using namespace std;

class PassangerCar {
public:
    int seats;   // 정원
    void set_seats(int n) {seats = n;}
};

class Truck {
public:
    int payload;    // 적재 하중
    void set_payload(int load) {payload = load;}
};

// PassangerCar와 Truck 클래스를 상속
class Pickup : public PassangerCar, public Truck {
public:
    int tow_capability; // 견인 능력
    void set_tow(int capa) {tow_capability = capa;}
};

int main()
{
    Pickup my_car;
    my_car.set_seats(4);
    my_car.set_payload(10000);
    my_car.set_seats(30000);
}
