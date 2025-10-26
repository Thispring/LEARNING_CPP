// 사용자로부터 나이를 받아서 어린이, 청소년, 성인을 구분하는 프로그램을 작성
// 9세 미만을 어린이, 9세 이상 24세 이하를 청소년, 24세 초과를 성인으로 구분

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "나이를 입력하세요:" << endl;
    cin >> age;

    if (age > 24)
        cout << "성인 입니다." << endl;
    else if (age >= 9 && 24 >= age)
        cout << "청소년 입니다." << endl;
    else
        cout << "어린이 입니다." << endl;

    return 0;
}