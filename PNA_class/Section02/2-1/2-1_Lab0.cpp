// 사용자로부터 받은 두 개의 정수 중에서 더 큰 수를 찾는 프로그램을 작성

#include <iostream>
using namespace std;

int main()
{
    int num1;    
    int num2;

    cout << "두 개의 정수 입력" << endl;
    cin >> num1 >> num2;

    if (num1 < num2)
        cout << "더 큰 수는" << num2 << "입니다." << endl;
    else if (num1 == num2)
        cout << "두 수는 같은 수 입니다." << endl;
    else
        cout << "더 큰 수는" << num1 << "입니다." << endl;

    return 0;
}