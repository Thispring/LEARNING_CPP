// Circle 클래스를 이용하여 동적 배열을 생성한다.
// 동적 배열의 크기는 사용자가 입력
// 원의 반지름은 1부터 100사이의 난수로 설정
// 동적 배열에 저장된 원의 면적이 100을 초과하는 원의 개수를 출력
// 동적 배열은 사용이 끝나면 삭제
// Circle 클래스
// 멤버 변수: radius
// 멤버 함수: 생성자, 소멸자, 면적, 멤버 변수 설정자와 접근자
#include <iostream>
#include <cstdlib>
using namespace std;

class Circle
{
    int radius;

public:
    Circle() { radius = 1; }                               // 생성자
    ~Circle() { cout << "소멸자 호출" << radius << endl; } // 소멸자
    int getArea() { return 3.14 * radius * radius; }
    void setRadius(int radius) { this->radius = radius; }
    int getRadius() { return radius; }
};

int main()
{
    int n;
    int count = 0;
    cout << "생성할 원의 개수: ";
    cin >> n;
    Circle *pc = new Circle[n]; // Circle 객체 배열 생성
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        cout << "반지름: " << pc[i].getRadius() << "인 원" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        pc[i].setRadius(rand() % 100 + 1); // 난수 생성
    }
    for (int i = 0; i < n; i++)
    {
        cout << "반지름: " << pc[i].getRadius() << "인 원" << endl;
        if (pc[i].getArea() > 100)  count++;
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

    delete []pc;    // 동적 할당 해제

    return 0;
}