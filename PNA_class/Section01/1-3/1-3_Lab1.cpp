// Lab: 섭씨 -> 화씨 온도 변환
/*
우리나라는 섭씨 온도를 사용하지만 미국에서는 화씨 온도를 사용한다.
화씨 온도를 섭씨 온도로 바꾸는 프로그램을 작성하여 보자.
*/
#include <iostream>

using namespace std;

int main()
{
    // 섭씨 -> 화씨
    // 섭씨 온도 수치에 1.8을 곱한 후 32를 더한다.

    // 화씨 -> 섭씨
    // 화씨 온도 수치에서 32를 뺀 후 5/9를 곱한다.
    double Temp;
    double CTemp;  // 섭씨온도
    double FTemp;  // 화씨온도 

    cout << "화씨 온도 입력:" << endl;
    cin >> Temp;
    FTemp = Temp;
    CTemp = (5.0 / 9.0) * (FTemp - 32);

    cout << "화씨온도" << FTemp << "도는 섭씨온도" << CTemp << "입니다." << endl;

    cout << "섭씨 온도 입력:" << endl;
    cin >> Temp;
    CTemp = Temp;
    FTemp = (CTemp * 1.8) + 32.0;

    cout << "화씨온도" << CTemp << "도는 섭씨온도" << FTemp << "입니다." << endl;

    return 0;
}
// 도전문제
// 화씨 온도를 사용자로부터 받게끔 수정하라.
// 이 프로그램과는 반대로 섭씨 온도를 입력하여 화씨 온도로 변환하는 프로그램을 작성하라.