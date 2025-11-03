// 문자열 find 및 replace
// &가 입력될 때까지 여러 줄의 영문 문자열을 입력 받고, 찾는 문자열과
// 대치할 문자열을 각각 입력 받아 문자열을 변경하라

// Ctrl + F 로 단어를 찾고, 해당 단어를 다른 단어로 대치하는 프로그램
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
    getline(cin, s, '&'); // &을 만날때 까지 입력받기
    cin.ignore();   // & 뒤에 따라오는 <Enter> 키를 제거하기 위한 함수
    string f, r;
    cout << endl << "find: ";
    getline(cin, f, '\n');  // 검색할 문자열 입력
    cout << "replace: ";
    getline(cin, r, '\n');  // 대치할 문자열 입력

    int startIndex = 0;
    while (true)
    {
        int findex = s.find(f, startIndex); // startIndex 부터 문자열 f 검색
        if (findex == -1)
            break;  // 문자열 s의 끝까지 변경하였음
        
        s.replace(findex, f.length(), r);   // finex 부터 문자열 f의 길이만큼 문자열 r로 변경
        startIndex = findex + r.length();
    }
    cout << s << endl;

    return 0;
}
