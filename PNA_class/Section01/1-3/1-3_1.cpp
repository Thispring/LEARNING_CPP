// 자동 타입 추론
#include <iostream>
#include <string>
using namespace std;

// auto는 값을 추론하여 알맞은 형으로 리터럴
// 일반 함수 매개변수에 auto 키워드를 사용할 수 없음
// C++20 이후 auto 매개변수가 지원됨
/*
auto add(auto x, auto y)
{
    return x + y;
}
*/

auto add(int x, int y)
{
    return x + y;
}

int main()
{
    auto d = 1.0;   // d는 double형 리터럴

    auto sum = add(5, 6);   // sum은 int형 리터럴
    cout << sum;

    return 0;
}