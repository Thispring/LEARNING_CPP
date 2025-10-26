// 사용자가 "종료"를 입력하기 전까지는 사용자의 입력을 그대로 화면에 출력하는 프로그램을 작성

#include <iostream>
using namespace std;

int main()
{
    string user;

    do
    {
        cout << "문자열을 입력하시오:";
        getline(cin, user); // 사용자로부터 한 줄의 텍스트를 받을 때 사용하는 함수
        //cin >> user;
        cout << "사용자의 입력: " << user << endl; 
    } while (user != "종료");
    
    return 0;
}