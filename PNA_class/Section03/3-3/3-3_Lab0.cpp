// 사용자로부터 이름과 주소를 받아서 친근하게 인사하는 프로그램을 작성

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name;
    string address;
    string greeting;

    cout << "이름을 입력하세요: " << endl;
    cin >> name;
    cin.ignore();   // 버퍼의 엔터키를 없애기 위한 함수
    
    cout << "주소를 입력하세요: " << endl;
    cin >> address;

    greeting = address + "의 " + name + "씨 " + "안녕하세요?";
    cout << greeting << endl;

    return 0;
}