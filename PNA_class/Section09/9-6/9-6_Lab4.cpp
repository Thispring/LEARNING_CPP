// 범위 지정 연산자(::)를 이용한 기본 클래스의 가상 함수 호출 예제

#include <iostream>
#include <memory>
using namespace std;

class Shape {
public:
  virtual void draw() { cout << "--Shape--"; }
};

class Circle : public Shape {
public:
  virtual void draw() {
    Shape::draw();
    cout << "Circle" << endl;
  }
};

int main() {
    Circle circle;
    Shape *pShape = &circle;

    pShape -> draw();   // 동적 바인딩을 포함하는 호출
    pShape -> Shape::draw();    // 정적 바인딩
}