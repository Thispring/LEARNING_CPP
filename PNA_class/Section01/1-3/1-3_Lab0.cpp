// Lab: 최대한의 사탕 사기
/*
철수가 가지고 있는 돈으로 최대한의 사탕을 사려고 한다. 현재 1000원이 있고
사탕의 가격이 300원이라고 하자. 최대한 살 수 있는 사탕의 개수와 나머지 돈은 얼마인가?
*/
#include <iostream>

using namespace std;

int main()
{
    int money = 1000;
    int candy_price = 300;

    cout << "현재 가지고 있는 돈:" << money << endl;
    cout << "캔디의 가격:" << candy_price << endl;
    cout << "최대로 구매 할 수 있는 캔디의 개수" << money / candy_price << endl;
    cout << "캔디 구입 후 남은 돈:" << money % candy_price << endl;

    return 0;
}