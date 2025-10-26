// 1부터 10까지의 정수를 더하여 합을 구하는 프로그램을 작성

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 1; i < 11; i++)
    {
        sum += i;
    }
    cout << "1부터 10까지의 정수의 합: " << sum;
    return 0;
}