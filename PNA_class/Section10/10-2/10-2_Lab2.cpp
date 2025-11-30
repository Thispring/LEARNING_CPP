// 클래스 템플릿 예제

#include <iostream>
using namespace std;

template <typename T>
class Box {
    T data; // T는 타입을 나타낸다.
public:
    Box() { }
    void set(T value) {
        data = value;
    }
    T get() {
        return data;
    }
};

int main()
{
    Box<int> box;   // 명시적으로 타입을 적어주어야 함
    box.set(100);
    cout << box.get() << endl;

    Box<double> box1;
    box1.set(3.141592);
    cout << box1.get() << endl;
}