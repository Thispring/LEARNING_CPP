// 참조 매개 변수의 필요 예제
// 참조 매개 변수로 평균 리턴하기

// 참조 매개 변수를 통해 평균을 리턴하고 리턴문을 통해서는
// 함수의 성공 여부를 리턴하도록 average() 함수를 작성하라
#include <iostream>
using namespace std;

// 참조 매개 변수 avg에 평균 값 전달
bool average(int a[], int size, int &avg) {
  if (size <= 0)
    return false;
  int sum = 0;
  for (int i = 0; i < size; i++)
    sum += a[i];
  avg = sum / size;
  return true;  // true이면 avg의 값을 리턴
}

int main() {
  int x[] = {0, 1, 2, 3, 4, 5};
  int avg;
  if (average(x, 6, avg))
    cout << "평균은" << avg << endl;
  else
    cout << "매개 변수 오류" << endl;

  if (average(x, -2, avg))
    cout << "평균은" << avg << endl;
  else
    cout << "매개 변수 오류" << endl;

    return 0;
}