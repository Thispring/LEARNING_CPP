// 정수의 제곱 값을 구하는 함수 만들기

#include <iostream>
using namespace std;

int CalculationSquare(int i)
{
    return i * i;
}

int main(void)
{
    int i;
    cout << "정수 입력:" << endl;
    cin >> i;

    cout << "제곱의 값:" << CalculationSquare(i) << endl;
    return 0;
}