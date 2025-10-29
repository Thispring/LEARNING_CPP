// 객체가 함수의 매개 변수로 전달되는 경우

// 어떤 피자 체인점에서 미디엄 크기의 피자를 주문하면 무조건 라지 피자로 변경 해 준다고 하자.
// 다음과 같이 프로그램을 작성하면 피자의 크기가 커질까?

#include <iostream>
using namespace std;

class Pizza {
public:
    Pizza(int s): size(s) {}    // 받은 매개변수를 size로 초기화
    int size;
};

/*
void makeDouble(Pizza p) {
    p.size *= 2;    // Pizza 클래스를 매개변수로 받는 함수
}
*/

// & 참조자를 사용하면 call by reference 방식으로 활용 가능
void makeDouble(Pizza& p) {
    p.size *= 2;    // Pizza 클래스를 매개변수로 받는 함수
}

int main()
{
    Pizza pizza(10);
    makeDouble(pizza);  // call by value 방식
    cout << pizza.size << "인치 피자" << endl;

    return 0;
}