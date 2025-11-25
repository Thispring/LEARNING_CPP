// 상속이 중첩될 때 접근 지정 사례 중
// 컴파일 오류가 발생하는 부분을 찾아라

#include <iostream>
using namespace std;

class Base {
    int a;
protected:
    void setA(int a) {this->a=a;}
public:
    void showA() {cout<<a;}
};

class Derived : private Base {
    int b;
protected:
    void setB(int b) {this->b=b;}
public:
    void showB() {
        setA(5);
        showA();
        cout << b;
    }
};

class GrandDerived : private Derived {
    int c;
protected:
    void setAB(int x) {
        //setA(x);
        //showA();
        setB(x);
        showB();
    }
};