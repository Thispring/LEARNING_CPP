// 카운트다운 예제를 작성

#include <iostream>
using namespace std;

int main()
{
    int count = 10;

    while (count >= 1)
    {
        cout << count <<" ";
        count--;
    }
    cout << "발사!" << endl;

    return 0;
}