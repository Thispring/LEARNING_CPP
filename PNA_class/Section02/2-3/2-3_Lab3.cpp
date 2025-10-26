// 크기가 10인 배열을 1부터 100 사이의 난수로 채우고 배열 요소 중에서 최대값을 찾아보자

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int arry[10] = {0};
    int randNum;
    srand(time(0));
    for (int &i : arry)
    {
        i = (rand() % 100) + 1;
        cout << " " << i;
    }

    // maxNum 변수를 선언하고, for문을 이용해 배열 0부터 99까지 큰 수 비교
    int maxNum = 0;
    for (int &i : arry)
    {
        if (maxNum < i)
            maxNum = i;
    }

    cout << "배열 중 최대 값은 " << maxNum << "입니다." << endl;

    return 0;
}

/*
int main()
{
    int list[10];
    int max;

    for (int & elem : list)
    {
        elem = rand() % 100 + 1;
        cout << elem << " ";
    }
    cout << endl;
    max = list[0];
    for (auto & elem : list)
    {
        if (elem > max)
            max = elem;
    }
    cout << "최대값=" << max << endl;
    return 0;
}
*/