// STL 템플릿에 람다식 활용 예제
// STL에 들어 있는 for-each()와 람다식을 이용하여 벡터의 모든 원소 출력

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5};

    // for_each()는 벡터 v의 첫번째 원소부터 끝까지 검색하면서,
    // 각 원소에 대해 print(int n) 호출, 매개 변수 n에 각 원소 값 전달
    for_each(v.begin(), v.end(), [](int n) { cout << n << " "; });
}