// 예외처리를 함수를 통해 처리하는 방법

#include <iostream>
using namespace std;

int divide(int a, int b);   // a/b의 몫만 반환

int divide(int a, int b)
{
    if (b==0)
        throw b;
    return a/b;
}

int main()
{
    int a, b;
    cout << "두개의 숫자 입력: ";
    cin >> a >> b;
    try {
        cout << "a/b의 몫: " << divide(a, b) << endl;
    } 
    catch (int exception) {
        cout << exception << " 입력." << endl;
        cout << "입력오류! 다시 실행 하세요." << endl;
    }

    return 0;
}

