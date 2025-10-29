// array 클래스 예제

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 3>list { 1, 2, 3 };  // int 타입의 크기가 3인 배열 선언과 동시에 초기화
    
    // .size()는 배열의 크기를 구하는 함수
    for (int i = 0; i < list.size(); ++i)
        ++list[i];
    
    for (auto& elem : list)
        cout << elem << " ";
    cout << endl;

    return 0;
}
