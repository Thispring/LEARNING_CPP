// 정적 멤버 변수, 함수 선언과 접근 활용 예제 (클래스명과 접근 지정 연산자 사용)

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
    Person::addShared(50);  
    cout << Person::shardMoney << endl;

    Person han;
    han.money = 100;
    han.shardMoney = 200;
    Person::shardMoney = 300;
    Person::addShared(100);

    cout << han.money << ' ' << Person::shardMoney << endl;

    return 0;
}
