// 예제) 다음 소스의 컴파일 오류가 발생하는 곳은 어디인가?

#include <iostream>
using namespace std;

class PrivateAccessError {
private:
    int a;
    void f();
    PrivateAccessError();
public:
    int b;
    void g();
    PrivateAccessError(int x);
};

PrivateAccessError::PrivateAccessError() {
    a = 1;  // 1
    b = 1;  // 2
}

PrivateAccessError::PrivateAccessError(int x) {
    a = x;  // 3
    b = x;  // 4
}

void PrivateAccessError::f() {
    a = 5;  // 5
    b = 5;  // 6
}

void PrivateAccessError::g() {
    a = 6;  // 7
    b = 6;  // 8
}

int main()
{
    //PrivateAccessError objA;    // 9
    PrivateAccessError objB(100);   // 10
    //objB.a = 10;    // 11
    objB.b = 20;    // 12
    //objB.f();       // 13
    objB.g();       // 14
}

// 9, 11, 13은 private 멤버이므로 main에서 호출할 수 없다.
/*
생성자도 private로 선언할 수 있다.
생성자를 private으로 선언하는 경우는 한 클래스에서
오직 하나의 객체만 생성할 수 있도록 하기 위한 것
*/