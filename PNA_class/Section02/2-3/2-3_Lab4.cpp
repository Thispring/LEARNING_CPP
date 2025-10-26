// 2차원 배열로 구구단 저장

#include <iostream>
using namespace std;

int main()
{
    int user;
    cout << "출력할 구구단 입력: " << endl;
    cin >> user;
    int arry[user][9];

    for (int i = 0; i < user; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            arry[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < user; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << " " << arry[i][j];
        }
        cout << endl;
    }

    return 0;
}