// Power 클래스 !연산자 예제
// ! 연산자를 Power 클래스의 멤버 함수로 작성
// !a는 a의 kick, punch 파워가 모두 0이면 true, 아니면 false 리턴

#include <iostream>
using namespace std;

class Power {
  int kick;
  int punch;

public:
  Power(int kick = 0, int punch = 0) {
    this->kick = kick;
    this->punch = punch;
  }
  void show();
  bool operator!(); // ! 연산자 함수 선언
};

void Power::show() {
  cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

bool Power::operator!() {
  if (kick == 0 && punch == 0)
    return true;
  else
    return false;
}

int main() {
  Power a(0, 0), b(5, 5);
  if (!a)
    cout << "a의 파워가 0이다." << endl; // ! 연산자 호출
  else
    cout << "a의 파워가 0이 아니다." << endl; // !연산자 호출
  if (!b)
    cout << "b의 파워가 0이다." << endl; // ! 연산자 호출
  else
    cout << "b의 파워가 0이 아니다." << endl; // !연산자 호출

  return 0;
}
