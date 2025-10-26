// 팩토리얼 값을 계산하여 보자

#include <iostream>
using namespace std;

int main()
{
    long num;
    int sum = 1;
    cout << "정수를 입력하세요" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }
    cout << num << "!은" << sum << "입니다.";
    return 0;
}