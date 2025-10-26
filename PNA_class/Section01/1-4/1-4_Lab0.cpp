// 두 정수를 입력받아 합을 구해 출력하는 프로그램 작성

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;

    cout << "두 정수를 입력하세요" << endl;
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "두 정수의 합:" << sum << endl;

    return 0;
}