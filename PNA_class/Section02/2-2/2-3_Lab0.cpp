// 학생들의 성적을 입력 받아서 평균을 구하는 프로그램을 배열을 이용해 작성

#include <iostream>
using namespace std;

int main()
{
    // 성적은 정수형으로 받기
    // 반복문으로 성적을 계속 입력받게하고, Ctrl + Z로 반복문 종료 시 
    // 입력받은 최종 성적의 평균 출력
    int scores[100] = {0, };
    int index = 0;
    int sum = 0;
    int average = 0;

    cout << "학생들의 성적을 입력하세요: " << endl;
    // 리눅스/macOS 터미널 환경(Bash, Zsh 등) 에서는 Ctrl + D 사용
    while(cin >> scores[index])
    {
        cout << "학생들의 성적을 입력하세요: " << endl;
        index++;
    }
    
    // 입력받은 index 만큼만 반복
    for (int i = 0; i < index; i++)
    {
        sum += scores[i];
    }
    average = sum / index;
    cout << "성적 평균: " << average << endl;

    return 0;
}
