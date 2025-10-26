// 헤더 파일 중복 include 방지
// 전처리기로 조건문을 이용해 방지 가능

#ifndef CIRCLE_H
#define CIRCLE_H

// Circle 클래스 선언
class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    double getArea();
};

#endif