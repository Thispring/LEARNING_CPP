// STL에 auto 활용 예제

#include <iostream>
#include <time.h>
#include <list>
using namespace std;

int main()
{
    list<int> values;   // 리스트 생성

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        values.push_back(rand()%100);   // 리스트 끝에 데이터를 추가
    }
    values.sort();  // 리스트 정렬

    for (auto& e:values) {  // 범위 기반 루프
        cout << e << ' ';
    }
    cout << endl;
}