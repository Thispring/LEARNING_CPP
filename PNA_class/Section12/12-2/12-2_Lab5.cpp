// 매개변수 x, y의 합을 출력하는 람다식 만들기

#include <iostream>
using namespace std;

int main()
{
    // 람다 함수 선언과 동시에 호출
    [](int x, int y) { cout << "합은" << x + y; } (2, 3);
}