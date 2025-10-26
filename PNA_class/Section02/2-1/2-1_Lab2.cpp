// 컴퓨터가 숨기고 있는 비밀 코드를 추측하는 게임을 작성
// 비밀 코드는 a부터 z사이의 문자입니다.

#include <iostream>
#include <cstdlib> // 난수 생성
using namespace std;

int main()
{
    char secretCode;
    char user;

    srand(time(0));
    secretCode = (rand() % 25) + 97; // 97 ~ 122
    // rand() % 범위숫자 -> 나머지 연산자를 사용해, 엄청 큰 수를 범위숫자로 나누어
    // 0부터 범위숫자 까지의 나머지를 추출
    // https://blockdmask.tistory.com/308

    cout << secretCode << endl;

    do
    {
        cout << "비밀 코드를 입력하세요" << endl;
        cin >> user;

        if (user < secretCode)
            cout << user << "위에 있음" << endl;
        else if (user == secretCode)
            cout << "비밀 코드는" << secretCode << endl;
        else
            cout << user << "밑에 있음" << endl;

    } while (user != secretCode);
    
    return 0;
}