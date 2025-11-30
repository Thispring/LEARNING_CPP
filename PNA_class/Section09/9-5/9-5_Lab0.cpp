// 상향 형변환 예제

#include <iostream>
using namespace std;

class Animal {
public:
    void speak() { cout << "Animal speak()" << endl; }
};

class Dog : public Animal {
public:
    int age;
    void speak() { cout << "멍멍" << endl; }
};

class Cat : public Animal {
public:
    void speak() { cout << "야옹" << endl; }
};

int main()
{
    Animal *a1 = new Dog();
    a1 -> speak();

    Animal *a2 = new Cat();
    a2 -> speak();

    //a1 -> age = 10;   // 오류
}