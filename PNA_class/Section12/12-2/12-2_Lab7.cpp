// 캡쳐 리스트와 리턴 타입을 가지는 람다식 예제
// 반지름이 r, 지역 변수 pi를 활용해 원의 면적으로 리턴하는 람다식 만들기

#include <iostream>
using namespace std;

int main() {
    double pi = 3.14;

    auto calc = [pi](int r) -> double { return pi * r * r; };

    cout << "면적은 " << calc(3);
}