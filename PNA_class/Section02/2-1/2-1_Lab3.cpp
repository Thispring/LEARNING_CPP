// 사용자로부터 받은 3개의 정수 중에서 가장 큰 수를 찾는 프로그램을 작성

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int max; 

    cout << "3개의 정수를 입력하시오." << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
        max = num1;
    else if (num2 > num1 && num2 > num3)
        max = num2;
    else
        max = num3;
    
    cout << "가장 큰 정수는" << max << endl;

    return 0;
}