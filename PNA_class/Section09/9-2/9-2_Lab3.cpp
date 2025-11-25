// 상속에서 멤버 함수 재정의 예제

#include <iostream>
using namespace std;

class ParentClass {
public:
    void print() {
        cout << "부모 클래스의 print() 멤버 함수" << endl;
    }
};

class ChildClass : public ParentClass {
    int data;
public:
    void print() {  // 멤버 함수 재정의
        // 자식 클래스에서 함수를 재정의 하였지만, 부모 클래스의 재정의 함수를 사용하고 싶을 때 
        ParentClass::print();
        cout << "자식 클래스의 print() 멤버 함수" << endl;
    }
};

int main()
{
    ChildClass c;
    c.print();
}