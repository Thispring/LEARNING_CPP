// 두개 이상의 타입 매개 변수를 가지는 클래스 템플릿 예제

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Box2 {
    T1 first_data;
    T2 second_data;
public:
    Box2() { }
    T1 get_first();
    T2 get_second();
    void set_first(T1 value) {
        first_data = value;
    }
    void set_second(T2 value) {
        second_data = value;
    }
};

template <typename T1, typename T2>
T1 Box2<T1, T2>::get_first() {
    return first_data;
}

template <typename T1, typename T2>
T2 Box2<T1, T2>::get_second() {
    return second_data;
}

int main()
{
    Box2<int, double> b;    // T1은 int, T2는 double 형을 사용
    b.set_first(10);
    b.set_second(3.14);
    cout << "(" << b.get_first() << ", " << b.get_second() << ")" << endl;
}