// 벡터 사용 예제
// push_back

#include <vector>
#include <iostream>
using namespace std;

int main()
{   
    vector <int> v1;    // 공백 벡터에서 시작
    
    // 추가 될때 마다 벡터의 크기가 확대됨
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    cout << "v1 = ";
    for (auto& e : v1)
    {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}