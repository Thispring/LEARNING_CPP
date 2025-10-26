// 문자열 "When in Rome, do as the Romans."중에서 "Rome"이 몇 번째 위치에 있는지를 계산하는 프로그램

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string a = "When in Rome, do as the Romans.";
    string b = "Rome";

    int c;
    c = a.find(b);
    cout << c;
    
    return 0;
}