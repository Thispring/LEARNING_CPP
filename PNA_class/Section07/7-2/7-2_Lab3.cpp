// 복사생성자가 필요없는 경우 예제

#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    Person(int a) : age{a} { }
    // 객체에 주소를 사용하는 포인터나 참조자가 없고 일반변수만 있다면
    // 복사생성자를 명시적으로 구현할 필요 X
};

int main()
{
    Person kim(21);
    Person clone {kim}; // 복사 생성자 호출
    cout << "kim의 나이: " << kim.age << "clone의 나이: " << clone.age << endl;
    kim.age = 23;
    cout << "kim의 나이: " << kim.age << "clone의 나이: " << clone.age << endl;
    
    return 0;
}
// 아래 경우는 복사 생성자가 필요
/*
class MyArray
{
public:
    int size;
    int* data;

    MyArray(int size)
    {
        this -> size = size;
        data = new int[size];
    }
    ~MyArray()
    {
        if(data != NULL) delete []this -> data;
    }
};

int main()
{
    MyArray buffer(10);
    buffer.data[0] = 1;
    {
        MyArray clone = buffer; // 기본 복사 생성자 호출, 포인터만 복사됨
    }
    buffer.data[0] = 2;

    return 0;
}
*/