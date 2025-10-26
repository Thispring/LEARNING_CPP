// 초등학교 학생들을 위한 산수 문제를 자동으로 출제하는 프로그램을 작성

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // 난수를 만들어 switch 문으로 어떤 사칙연산인지 정하고
    // 연산에 사용되는 두 숫자는 0부터 99까지의 난수로 생성
    // 안쪽 if 문을 통해 정답여부 판별

    int math; // 0~3 까지 랜덤으로 0: 덧샘, 1: 뺄샘, 2: 곱셈, 3: 나눗셈 부여
    int num1;
    int num2;
    int res;
    cout << "산수 문제를 자동으로 출제합니다." << endl;

    srand(time(0));
    math = rand() % 4;
    num1 = rand() % 100;
    num2 = rand() % 100;

    switch (math)
    {
    case 0:
        cout << num1 << "+" << num2 << "=";
        cin >> res;
        if (res == (num1 + num2))
            cout << "정답입니다." << endl;
        else
            cout << "정답이 아닙니다." << endl;
        break;
    case 1:
        cout << num1 << "-" << num2 << "=";
        cin >> res;
        if (res == (num1 - num2))
            cout << "정답입니다." << endl;
        else
            cout << "정답이 아닙니다." << endl;
        break;
    case 2:
        cout << num1 << "*" << num2 << "=";
        cin >> res;
        if (res == (num1 * num2))
            cout << "정답입니다." << endl;
        else
            cout << "정답이 아닙니다." << endl;
        break;
    case 3:
        cout << num1 << "/" << num2 << "=";
        cin >> res;
        if (res == (num1 / num2))
            cout << "정답입니다." << endl;
        else
            cout << "정답이 아닙니다." << endl;
        break;

    default:
        break;
    }

    return 0;
}