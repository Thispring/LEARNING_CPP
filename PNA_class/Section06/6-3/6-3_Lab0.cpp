// string 배열 선언과 문자열 키 입력 응용
// 5개의 string 배열을 선언하고 getline()을 이용하여 문자열을 입력 받아
// 사전 순으로 가장 뒤에 나오는 문자열을 출력하는 프로그램
// 문자열 비교는 <, > 연산자를 활용

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Input String";
        getline(cin, s1[i], '\n');  // 입력 스트림 cin을 이용해 개행문자를 만날때 까지 입력 받기
    }

    string s2 = s1[0];  // s1의 첫번째 데이터를 s2에 저장하고
    for (int i = 0; i < 5; i++)
    {
        // 문자 비교 시, 더 큰 값이 사전 순서 뒤 이므로
        if (s2 < s1[i])
        {
            // s2보다 크다면 해당 s1[i] 값을 저장하고 계속 비교
            s2 = s1[i];
        }
    }

    cout << "Last String is: " << s2 << endl;

    return 0;
}