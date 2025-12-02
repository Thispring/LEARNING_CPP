// 단어 빈도 계산하는 프로그램
// Map을 이용하여서 사용자로부터 문장을 받아들이고
// 각 단어가 나오는 빈도를 계산하는 프로그램

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> table;
    string s;

    cout << "문장을 입력하시오(종료는 Ctrl-Z): ";
    while (true) {
        cin >> s;
        table[s]++;
        if (cin.eof()) break;
    }
    // table.begin()은 임시 iterator를 반환하는데
    // auto& (non-const lvalue reference)로 받으려고 해서 오류 발생
    for (auto iter = table.begin(); iter != table.end(); iter++) {
        cout << iter -> first << " : " << iter -> second << endl;
    }
    return 0;
}