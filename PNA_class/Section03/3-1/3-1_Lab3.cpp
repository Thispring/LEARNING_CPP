// 디폴트 매개 변수 실습

#include <iostream>
using namespace std;

int sum(int num1 = 0, int num2 = 0, int num3 = 0, int num4 = 0)
{
    return num1 + num2 + num3 + num4;
}

int main(void)
{
    cout << "sum(10, 15)=" << sum(10, 15) << endl;
    cout << "sum(10, 15, 25)=" << sum(10, 15, 25) << endl;
    cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << endl;        

    return 0;
}