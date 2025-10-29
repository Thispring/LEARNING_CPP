// 객체의 동적 생성 예제

#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:
    // 생성자
    Dog() {
        cout << "생성자 호출\n";
        age = 1;
        name = "바둑이";
    }
    // 소멸자
    ~Dog() {
        cout << "소멸자 호출\n";
    }
};

int main()
{
    Dog *pDog = new Dog;
    delete pDog;

    return 0;
}