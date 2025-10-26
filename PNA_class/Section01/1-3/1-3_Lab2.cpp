// Lab: 주사위 게임
// 2개의 주사위를 던져서 주사위의 합을 표시하는 프로그램을 작성해보자.

/*
기존 C 프로그램 헤더파일에서 
이름 앞에 c를 붙이면 c++의 헤더파일 
<string.h> -> <cstring>
<stdlib.h> -> <cstdlib>
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;

    cout << "두 주사위 합=" << dice1 + dice2 << endl;
    return 0;
}