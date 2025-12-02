// STL과 람다식 실습
// 로또 프로그램 예제

#include <iostream>
#include <set>
#include <ctime>
#include <algorithm>
#include <vector>
#include <random>
using namespace std;

bool comp(int x, int y) { return x < y; }
bool reComp(int x, int y) { return x > y; }

int main()
{
    int sum = 0;
    set<int> my_set;
    srand(time(NULL));
    while(my_set.size() != 6)
    {
        my_set.insert(rand() % 45 + 1);
    }
    cout << "생성된 로또 번호: ";
    for (auto& e : my_set)
        cout << e << " ";
    cout << endl;

    for_each(my_set.begin(), my_set.end(), [&sum](int n) { sum += n; });
    cout << "합: " << sum << endl;
    
    for_each(my_set.begin(), my_set.end(), [](int n) { cout << n << " "; });
    cout << endl;

    vector<int> v;
    random_device rd;        // 시드 생성
    mt19937 g(rd());         // 난수 엔진
    for(auto e : my_set) v.push_back(e);
    //random_shuffle(v.begin(), v.end());
    shuffle(v.begin(), v.end(), g);
    for_each(v.begin(), v.end(), [](int n) { cout << n << " "; });
    cout << endl;

    sort(v.begin(), v.end(), comp);
    for_each(v.begin(), v.end(), [](int n) { cout << n << " "; });
    cout << endl;

    sort(v.begin(), v.end(), reComp);
    for_each(v.begin(), v.end(), [](int n) { cout << n << " "; });
    cout << endl;

    cout << "짝수의 수 " << count_if(v.begin(), v.end(), [](int n) { return n % 2 == 0; });
    cout << endl;

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}