// 해밍 거리 구하기
// 유전자를 나타내는 2개의 문자열을 받아서 동일한 위치에 틀린 글자가 몇 개나 있는지를 계산하는 프로그램 작성
// 이것을 해밍 거리(Hamming distance)라고 한다.

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int hamming = 0;
    string DNA1;
    string DNA2;

    cout << "DNA1: " << endl;
    cin >> DNA1;
    cout << "DNA2: " << endl;
    cin >> DNA2;

    // 동일한 위치에 다른 글자 찾기
    if (DNA1.length() != DNA2.length())
    {
        cout << "오류: 길이가 다름" << endl;
    }
    else
    {
        for (int i = 0; i < DNA1.length(); i++)
        {
            if (DNA1[i] != DNA2[i])
                hamming++;
        }
    }

    cout << "해밍 거리는: " << hamming << endl;

    return 0;
}