// swap(a, b)와 같이 호출하면 변수 a와 변수 b의 값을 교환

#include <iostream>
using namespace std;

void swap(int&, int&);

int main(void)
{
    int a = 100, b = 200;
    cout << "a: " << a << " b: " << b << endl;
    swap(a, b);
    cout << "a: " << a << " b: " << b << endl;

    return 0;
}

void swap(int &a, int &b)
{
    int c;
    
    c = a;
    a = b;
    b = c;    
}