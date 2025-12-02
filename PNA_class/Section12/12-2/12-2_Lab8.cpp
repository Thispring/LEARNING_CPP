// 캡쳐 리스트에 참조를 활용하는 람다식 예제
// 지역 변수 sum에 대한 참조를 캡쳐 리스트를 통해 받고,
// 더한 결과를 지역변수 sum에 저장하는 프로그램

#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    [&sum](int x, int y) { sum = x + y; } (2, 3);

    cout << "합은 " << sum;
}