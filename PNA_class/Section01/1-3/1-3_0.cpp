// 문자열
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Good";
    string s2 = "Morning";
    string s3 = s1 + " " + s2 + "!";
    cout << s3 << endl;

    string s4 = "사과";
    string s5;

    s5 = s4 + " " + to_string(10)+ "개";
    cout << s5 << endl;
    
    return 0;
}