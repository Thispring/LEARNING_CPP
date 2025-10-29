// 벡터의 사용 예제
// push, pop

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector <int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i); // 벡터 끝에서 데이터 추가
    }

    cout << "현재의 v = ";
    for (auto& e : v)
        cout << e << " ";
    cout << endl;

    cout << "삭제 요소= ";
    // 벡터가 공백이 될 때까지 pop_back() 호출
    while (v.empty() != true) {
        cout << v.back() << " ";
        v.pop_back();
    }
    cout << endl;

    return 0;
}