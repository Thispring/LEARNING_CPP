// 예외 처리를 가진 스택 클래스 만들기 예제

#include <iostream>
using namespace std;

#include "MyStack.h"

int main() {
    MyStack intStack;
    try {
        intStack.push(100); 
        intStack.push(200);
        cout << intStack.pop() << endl;
        cout << intStack.pop() << endl;
        cout << intStack.pop() << endl; 
    }
    catch (const char* s) {
        cout << "예외 발생: " << s << endl;
    }
}