// 반복자와 벡터 활용 예제

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // old c++
    for (vector<int>::iterator p = v.begin(); p != v.end(); ++p)
        cout << *p << endl;

    // c++14
    for (auto p = v.begin(); p != v.end(); ++p)
        cout << *p << endl;
    for (auto& n : v)
        cout << n << endl;
}