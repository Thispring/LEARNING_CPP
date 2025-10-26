// 참조자 버전 예제
// 배열 요소의 변경이 필요하다면 반드시 참조자를 사용해야 한다.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int & i : list) {
        i = i * i;
    }
    for (int i : list) {
        cout << i << " ";
    }
}