// 클래스 선언에서 프렌드를 선언하는 예제

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    friend class B; // B는 A의 프렌드가 된다.
    A(string s = "") : secret{s} {}
private:
    string secret;  // B는 여기에 접근할 수 있다.
};

class B {
public:
    B() { }
    void print(A obj) {
        cout << obj.secret << endl;
    }
};

int main()
{
    A a("이것은 기밀 정보입니다.");
    B b;
    b.print(a);

    return 0;
}
