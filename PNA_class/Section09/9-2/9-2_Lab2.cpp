// 멤버 함수 재정의 예제

#include <iostream>
using namespace std;

class Animal {
public:
    void speak()
    {
        cout << "동물이 소리를 내고 있음" << endl;
    }
};

class Dog : public Animal {
public:
    // Dog 클래스에서 speak 함수 재정의
    void speak()
    {
        cout << "멍멍!" << endl;
    }
};
 
int main()
{
    Dog obj;
    obj.speak();
}
