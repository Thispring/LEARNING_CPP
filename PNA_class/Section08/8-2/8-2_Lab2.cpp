// 후위 ++ 연산자 예제

#include <iostream>
using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0) {
        this -> kick = kick; this -> punch = punch;
    }
    void show();
    Power operator++ (int x);   // 후위 ++ 연산자 함수 선언, 기존 연산자와 구분하기 위해 임의의 매개변수 설정
};

void Power::show() {
    cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator++(int x) {
    Power tmp = *this;  // 증가 이전 객체 상태를 저장
    kick++;
    punch++;
    return tmp;   // 증갸 이전 객체 상태 리턴
}

int main()
{
    Power a(3, 5), b;
    a.show();
    b.show();
    b = a++;    // 후위 ++ 연산자 사용
    a.show();
    b.show();
    
    return 0;
}
