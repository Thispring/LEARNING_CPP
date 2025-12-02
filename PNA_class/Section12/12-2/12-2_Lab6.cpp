// auto로 람다식 저장 및 호출 예제

#include <iostream>
#include <string>
using namespace std;

int main() {
    auto love = [](string a, string b) {
        cout << a << "보다 " << b << "가 좋아" << endl;
    };

    love("돈", "너");
    love("냉면", "만두");

    auto sum = [](int x, int y) { return x + y; };
    cout << sum(1, 2) << endl;
    cout << sum(10, 20) << endl;
    return 0;
}