// 포인터 연산자의 중복 예제

#include <iostream>
using namespace std;

class Pointer {
    int *p;
public:
    Pointer(int *p) : p{p} {}
    ~Pointer() { delete  p; }
    int* operator->()const { return p; }    // 포인터 리턴
    int& operator*()const { return *p; }    // 참조자 리턴
};

int main()
{
    Pointer p(new int);

    *p = 100;
    cout << *p << endl;
    
    return 0;
}
