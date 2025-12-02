// deque 활용 예제

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {1,2,3,4,5,6,7,8,9,10};

    dq.pop_front();
    dq.push_back(11);
    for (auto& n:dq)
        cout << n << " ";
    cout << endl;

    deque<string> dq2 = {"naver", "daum", "cnn", "yahoo", "google"};

    dq2.push_front("infinity");
    dq2.pop_back();
    for (auto& e : dq2)
        cout << e << " ";
    cout << endl;

    return 0;
}