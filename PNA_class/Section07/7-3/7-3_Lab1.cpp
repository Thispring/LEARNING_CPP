// 정적 멤버 변수, 함수 선언과 접근 활용 예제

#include <iostream>
using namespace std;

class Person
{
public:
    int money;
    void addMoney(int money)
    {
        this -> money += money;
    }

    static int shardMoney;
    static void addShared(int n)
    {
        shardMoney += n;
    }
};

// static 변수 생성, 전역 공간에 생성
int Person::shardMoney = 10;

int main()
{
    Person han;
    han.money = 100;
    han.shardMoney = 200;

    Person lee;
    lee.money = 150;
    lee.addMoney(200);
    lee.addShared(200);

    cout << han.money << ' ' << lee.money << endl;
    cout << han.shardMoney << ' ' << lee.shardMoney << endl;

    return 0;
}
