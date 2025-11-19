// 간단한 참조 리턴 예제

#include <iostream>
using namespace std;

char& find(char s[], int index)
{
    // s[index] 공간의 참조 리턴
    return s[index];    // 참조 리턴
}

int main()
{
    char name[] = "Mike";
    cout << name << endl;

    find(name, 0) = 'S';    // name[0]이 'S'로 변경
    cout << name << endl;

    char& ref = find(name, 2);  // ref는 name[2] 참조
    ref = 't';  // name = "Site"
    cout << name << endl;

    return 0;
}
