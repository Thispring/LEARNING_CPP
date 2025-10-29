// 성적 평균 계산하기
// 학생들의 평균 성적을 계산하는 예제에서 학생이 몇 명인지 알 수 없다고 할 때
// 동적 배열인 벡터를 이용하여 성적 평균 입력 및 계산하는 프로그램 작성

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> scores;
    int total = 0;

    while (true)
    {
        int score;  // 지역 변수 선언
        cout << "성적을 입력하시오(종료는 -1) : ";
        cin >> score;
        if (score == -1) break;
        scores.push_back(score);    // push_back으로 score 추가
    }

    for (auto & value : scores)
    {
        total += value;
    }
    double avg = (double)total / scores.size(); // size를 통해 벡터의 크기를 알 수 있음

    cout << "성적 평균= " << avg << endl;

    return 0;
}
