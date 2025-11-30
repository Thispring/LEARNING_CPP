// 추상 클래스를 상속받는 파생 클래스 구현 연습
// 다음 코드와 실행 결과를 참고하여 추상 클래스 Calculator를
// 상속받는 Adder와 Subractor 클래스를 구현하라

#include <iostream>
using namespace std;

class Calculator {
    void input() {
        cout << "정수 2개를 입력하세요 >>";
        cin >> a >> b;
    }
protected:
    int a, b;
    virtual int calc(int a, int b) = 0; // 두 정수의 합 리턴
public:
    void run() {
        input();
        cout << "계산된 값은 " << calc(a, b) << endl;
    }
};

class Adder : public Calculator {
    int calc(int a, int b) { return a+b; }
};

class Subtractor : public Calculator {
    int calc(int a, int b) { return a-b; }
};


int main() {
    Adder adder;
    Subtractor subtractor;
    adder.run();
    subtractor.run();
}