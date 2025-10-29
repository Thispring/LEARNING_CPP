// 벡터에 객체를 저장하는 예제

#include <vector>
#include <iostream>
using namespace std;

class Circle
{
public:
    int x, y;
    int radius;
    Circle() : x{0}, y {0}, radius {0} {}
    Circle(int x, int y, int r) : x{x}, y{y}, radius {r} {}
    void print() {
        cout << "반지름: " << radius << "@(" << x << "," << y << ")" << endl;
    }
};

int main()
{
    vector <Circle> objArray;

    // 생성자를 호출하고, 벡터에 생성자를 삽입
    for (int i = 0; i < 10; i++)
    {
        Circle obj{rand()%300, rand()%300, rand()%100};
        objArray.push_back(obj);
    }

    // 벡터에서 하나씩 꺼내서 print()호출
    for (Circle c : objArray)
        c.print();

    return 0;
}