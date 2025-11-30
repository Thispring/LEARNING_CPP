// 두 양수를 입력 받아 나누기한 결과를 출력하는 프로그램에,
// 음수가 입력된 경우와 0으로 나누기가 발생하는 경우
// 예외를 처리하도록 예외 클래스를 작성하라

#include <iostream>
#include <string>
using namespace std;

class MyException { // 사용자가 만드는 기본 예외 클래스 선언
    int lineNo;
    string func, msg;
public:
    MyException(int n, string f, string m) {
        lineNo = n; func = f; msg = m;
    }
    void print() { cout << func << ":" << lineNo << "," << msg << endl; }
};

class DivideByZeroException : public MyException {  // 0으로 나누는 예외 클래스
public:
    DivideByZeroException(int lineNo, string func, string msg)
    : MyException(lineNo, func, msg) {}
};

class InvalidInputException : public MyException {  // 잘못된 입력 예외 클래스
public:
    InvalidInputException(int lineNo, string func, string msg)
    : MyException(lineNo, func, msg) {}
};

int main() {
    int x, y;
    try {
        cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요 >>";
        cin >> x >> y;
        if (x < 0 || y < 0)
            throw InvalidInputException(37, "main()", "음수 입력 예외 발생");
        if (y == 0)
            throw DivideByZeroException(39, "main()", "0으로 나누는 예외 발생");
        cout << (double)x / (double)y;
    }
    catch(DivideByZeroException &e) {
        e.print();
    }
    catch(InvalidInputException &e) {
        e.print();
    }
}