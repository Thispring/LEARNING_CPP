// 정수형 배열의 동적 할당 및 반환
// 사용자로부터 입력할 정수의 개수를 입력 받아 배열을 동적 할당 받고,
// 하나씩 정수를 입력 받은 후, 합을 출력하는 프로그램 작성

#include <iostream>
using namespace std;

int main()
{
    // user에 값을 입력받고, new 배열 크기 매개변수로 전달
    int user;
    int *psum;
    int res = 0;

    cout << "Input Number for Array Size: " << endl;
    cin >> user;

    if (user <= 0) return 0;
    // user의 크기만큼 동적할당 공간 생성
    psum = new int[user];
    if (!psum)
    {
        cout << "Error Memory allocated" << endl;
        return 0;
    }

    for (int i = 0; i < user; i++)
    {
        cout << "Input Number in psum: " << endl;
        cin >> psum[i];
        res += psum[i];
    }

    for (int i = 0; i < user; i++)
    {
        cout << "Array[" << i << "] Element is: " << psum[i] << " ";
        cout << endl;
    }
    cout << "Array Sum is: " << res << endl;

    // 동적할당 해제
    delete[] psum;

    return 0;
}
