// 정수, 실수, 문자를 모두 출력할 수 있는 print() 함수를 중복 함수로 정의하고 사용해보자

#include <iostream>
using namespace std;

void print(int num)
{
    cout << "정수 출력: " << num << endl;
}

void print(double num)
{
    cout << "실수 출력: " << num << endl;
}

void print(char ch)
{
    cout << "문자 출력: " << ch << endl;
}

int main(void)
{
    print(100);
    print(3.14);
    print('C');

    return 0;
}