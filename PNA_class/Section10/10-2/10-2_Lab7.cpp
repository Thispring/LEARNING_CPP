// 배열을 출력하는 print() 템플릿 함수의 문제점 예제

#include <iostream>
using namespace std;
/*
template <class T>
void print(T array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << "\t";
    cout << endl;
}

int main() {
    int x[] = {1,2,3,4,5};
    double d[5] = {1.1,2.2,3.3,4.4,5.5};
    print(x, 5);
    print(d, 5);

    // char로 구체화되면 숫자대신 문자가 출력되는 문제 발생
    char c[5] = {1,2,3,4,5};    
    print(c, 5);
}
*/

// 이를 템플릿 함수보다 중복 함수가 우선 순위가 높은점을 활용하여 해결
template <class T>
void print(T array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << "\t";
    cout << endl;
}

// 중복된 print()함수가 우선 바인딩
void print(char array[], int n) {
    for (int i = 0; i < n; i++)
        cout << (int)array[i] << "\t";
    cout << endl;
}

int main() {
    int x[] = {1,2,3,4,5};
    double d[5] = {1.1,2.2,3.3,4.4,5.5};
    print(x, 5);
    print(d, 5);

    char c[5] = {1,2,3,4,5};    
    print(c, 5);
}