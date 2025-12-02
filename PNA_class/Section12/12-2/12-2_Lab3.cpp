// for_each() 함수 예제

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printEven(int n) {
    if (n % 2 == 0)
        cout << n << ' ';
}

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    for_each(v.begin(), v.end(), printEven);
    cout << endl;
    return 0;
}