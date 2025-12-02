// 이진 탐색 예제

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool comp(string s1, string s2) {
    return (s1 == s2);
}

int main() {
    vector<string> v = {"one","two","three"};
    bool result;

    result = binary_search(v.begin(), v.end(), "two", comp);
    if (result == true)
        cout << "문자열\"two\"은 벡터 안에 있음." << endl;
    return 0;
}