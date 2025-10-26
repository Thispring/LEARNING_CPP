// 사용자로부터 영문자를 받아서 자음과 모음의 개수를 세는 프로그램을 작성해보자

#include <iostream>
using namespace std;

//NOTE: while문 조건 탈출과 입력버퍼 출력 알아보기
// 리눅스/macOS 터미널 환경(Bash, Zsh 등) 에서는 Ctrl + D 사용
int main()
{
    string alphabet;
    int consonants = 0; // 자음
    int vowels = 0;     // 모음 (a, e, i, o, u)

    cout << "영문자를 입력, Ctrl + Z 시 프로그램 종료" << endl;
    /*
    char ch;
    while (cin >> ch)
    {
        switch (ch)
        {
        case 'a': case 'e': case 'i': case 'o': case 'l':
            vowels++;
            break;
        
        default:
            consonants++;
            break;
        }
    }
    */
    
    while (cin >> alphabet)
    {
        if (alphabet == "a" || alphabet == "A" || alphabet == "e" || alphabet == "E" ||
            alphabet == "i" || alphabet == "I" || alphabet == "o" || alphabet == "O" || alphabet == "u" || alphabet == "U")
            vowels += 1;
        else
            consonants += 1;
    }
    
    cout << "자음: " << consonants << endl;
    cout << "모음: " << vowels << endl;
    return 0;
}
