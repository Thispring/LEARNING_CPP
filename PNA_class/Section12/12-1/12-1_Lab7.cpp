// Map을 가지고 영어 사전을 구현하는 예제
// 사용자로부터 단어를 받아서 단어의 설명을 출력한다.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, string> dic;
    dic["boy"] = "소년";
    dic["school"] = "학교";
    dic["office"] = "직장";
    dic["house"] = "집";
    dic["morning"] = "아침";
    dic["evening"] = "저녁";
    
    string word;
    while (true) {
        cout << "단어를 입력하시오.";
        cin >> word;
        if (word == "quit") break;
        string meaning = dic[word];
        if (meaning != "")
            cout << word << "의 의미는 " << meaning << endl;
        else
            cout << "사전에 없는 단어 입니다." << endl;
    }

    return 0;
}
