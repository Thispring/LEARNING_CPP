// Virtual 소멸자 필요성 예제

#include <cstring>
#include <iostream>
using namespace std;

class AAA {
    char* str1;
public:
    AAA(char* _str1) {
        str1 = new char[strlen(_str1) + 1];
        strcpy(str1, _str1);
    }
    ~AAA() {
        cout << "~AAA() call" << endl;
        delete [] str1;
    }
    virtual void ShowString() {
        cout << str1 << ' ';
    }
};

class BBB : public AAA {
    char* str2;
public:
    BBB(char* _str1, char* _str2) : AAA(_str1) {
        str2 = new char[strlen(_str2) + 1];
        strcpy(str2, _str2);
    }
    ~BBB() {
        cout << "~BBB() call" << endl;
        delete [] str2;
    }
    virtual void ShowString() {
        AAA::ShowString();
        cout << str2 << endl;
    }
};

int main() {
    AAA *a = new BBB("Good", "evening");
    BBB *b = new BBB("Good", "morning");
    a -> ShowString();
    b -> ShowString();
    cout << "----객체 소멸 직전----" << endl;
    delete a;   // AAA 소멸자만 호출
    delete b;   // BBB, AAA 소멸자 호출
}