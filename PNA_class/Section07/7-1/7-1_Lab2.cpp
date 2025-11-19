// 객체의 주소를 함수로 전달하기

#include <iostream>
using namespace std;

class Pizza {
    int radius;
public:
    Pizza(int r = 0) : radius{r} { }
    ~Pizza() { }
    void setRadius(int r) { radius = r; }
    void print() { cout << "Pizza(" << radius << ")" << endl; }
};

void upgrade(Pizza *p)
{
    p -> setRadius(20);
}

int main()
{
    Pizza obj(10);
    // 객체 obj의 주소가 p에 전달됨 -> 객체가 아니기 때문에 생성자나 소멸자가 호출되지 않음
    upgrade(&obj);   
    obj.print();

    return 0;
}