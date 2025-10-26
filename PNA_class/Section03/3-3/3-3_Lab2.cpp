// 사용자가 입력한 주민등록번호에서 '-' 문자를 삭제하는 프로그램을 작성

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string registerNum;
    cout << "주민등록번호를 입력하세요. 입력 시 '-' 포함" << endl;
    cin >> registerNum;

    /*
    registerNum.erase(6, 1);
    cout << "-가 제거된 주민등록번호: " << registerNum << endl;
    */

    cout << "-가 제거된 주민등록번호: ";
    for (auto &ch : registerNum) {
        if (ch == '-') continue;
        cout << ch;
    }
    cout << endl;
    
    return 0;
}