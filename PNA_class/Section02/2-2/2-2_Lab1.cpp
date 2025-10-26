// 반복문을 사용하여 구구단을 출력해보자

#include <iostream>
using namespace std;

int main()
{
    int userNum;
    int count = 1;

    cout << "구구단 중에서 출력하고 싶은 단을 입력하세요." << endl;
    cin >> userNum;

    while (count <= 9)
    {
        cout << userNum << "*" << count << "=" << userNum * count << endl;
        count++;
    }
    
    return 0;
}