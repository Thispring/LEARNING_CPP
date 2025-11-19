// 두 개의 Power 객체를 이용하는 연산자 오버로딩 예제

#include <iostream>
using namespace std;
/*
// +연산자 오버로딩
class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this -> kick = kick; this -> punch = punch;
    }
    void show();
    Power operator+ (Power op2);    // +연산자 함수 선언
};

void Power::show() {
    cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

// +연산자 멤버 함수 구현
Power Power::operator+(Power op2) {
    Power tmp;  // 임시 객체 생성
    tmp.kick = this -> kick + op2.kick;     // kick 더하기
    tmp.punch = this -> punch + op2.punch;  // punch 더하기
    return tmp; // 더한 결과 리턴
}

int main()
{
    Power a(3, 5), b(4, 6), c;
    c = a + b;  // 파워 객체 +연산
    a.show();
    b.show();
    c.show();

    return 0;
}
*/
/*
// == 연산자 오버로딩
class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this -> kick = kick; this -> punch = punch;
    }
    void show();
    bool operator== (Power op2);    // ==연산자 함수 선언
};

void Power::show() {
    cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

// ==연산자 멤버 함수 구현
bool Power::operator==(Power op2) {
    if(kick == op2.kick && punch == op2.punch)
        return  true;
    else
        return false;
}

int main()
{
    Power a(3, 5), b(3, 5);

    a.show();
    b.show();
    if (a==b)
        cout << "두 파워가 같다." << endl;
    else
        cout << "두 파워가 같지 않다." << endl;

    return 0;
}
*/
// += 연산자 오버로딩
class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this -> kick = kick; this -> punch = punch;
    }
    void show();
    Power& operator+= (Power op2);    // +=연산자 함수 선언
};

void Power::show() {
    cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

// +=연산자 멤버 함수 구현
Power& Power::operator+=(Power op2) {
    kick = kick + op2.kick; // kick 더하기
    punch = punch + op2.punch;  // punch 더하기
    return *this;   // 합한 결과 리턴, 자기 자신을 리턴하기에 포인터와 참조형 사용
}

int main()
{
    Power a(3, 5), b(4, 6), c;

    a.show();
    b.show();
    c = a += b; // Power 객체 더하기

    a.show();
    c.show();

    return 0;
}
