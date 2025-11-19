// 객체를 함수로 전달하기 예제

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

void upgrade(Pizza p)
{
    p.setRadius(20);
}

int main()
{
    Pizza obj(10);
    upgrade(obj);   // 복사 생성자가 호출되어서 객체 obj의 내용이 그대로 p로 복사
    obj.print();

    return 0;
}