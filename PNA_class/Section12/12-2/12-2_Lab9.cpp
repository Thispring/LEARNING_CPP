// STL for-each() 함수를 이용하여 벡터의 모든 원소 출력 예제
// STL에 들어 있는 for-each() 함수는 컨테이너의 각 원소를
// 검색하는 함수이며, 3번째 매개변수로 주어진 함수를 호출한다.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n) {
    cout << n << " ";
}

int main() {
    vector<int> v = {1,2,3,4,5};

    // for_each()는 벡터 v의 첫번째 원소부터 끝까지 검색하면서,
    // 각 원소에 대해 print(int n) 호출, 매개 변수 n에 각 원소 값 전달
    for_each(v.begin(), v.end(), print);
}