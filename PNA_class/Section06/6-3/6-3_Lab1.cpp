// 문자열을 입력 받고 회전시키기
// 빈칸을 포함하는 문자열을 입력 받고, 한 문자씩 왼쪽으로 회전하도록 문자열을 변경하고 출력하는 프로그램

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "문자열 입력: " << endl;
    getline(cin, s, '\n');

    int len = s.length();  // s의 문자열 길이 저장

    for (int i = 0; i < len; i++)
    {
        string first = s.substr(0, 1);  // 맨 앞의 문자 1개를 문자열로 분리
        string sub = s.substr(1, len-1);    // 나머지 문자들을 문자열로 분리
        s = sub + first;    // 두 문자열을 연결하여 새로운 문자열로 만듦
        cout << s << endl;
    }

    return 0;
}
