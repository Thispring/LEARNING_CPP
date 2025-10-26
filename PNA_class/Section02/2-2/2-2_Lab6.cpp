// 프로그램은 1부터 100사이의 정수를 저장하고 있고, 사용자는 질문을 통하여 그 정수를 알아맞히는 프로그램

#include <iostream>
#include <cstdlib>  // 난수 생성
using namespace std;

int main()
{
    int com;
    int user;
    int count = 0;

    srand(time(0));
    com = (rand() % 100) + 1;
    cout << com << endl;

    do
    {
        cin >> user;
        count++;

        if (user < com)
            cout << "UP" << endl;
        else
            cout << "DOWN" << endl;
        
    } while (user != com);
    
    cout << "축하합니다!" << "시도 횟수: " << count << endl;
    return 0;
}