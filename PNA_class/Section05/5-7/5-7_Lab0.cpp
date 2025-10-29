// 학생을 나타내는 클래스 Student를 정의
// 벡터를 이용하여 동적 객체 배열을 만들고, 사용자로부터 데이터(3명)를 입력받아
// 배열에 저장한 후 sort()함수를 사용하여 학점이 높은 순으로 모든 학생들의 정보를 출력하는 프로그램

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    double score;
public:
    Student (string n, double s):name{n}, score{s}{}
    void print();
    // getter
    string get_name() { return name; }
    double get_Score() { return score; }
    // setter
    void set_marks(double s) { score = s; }
};

void Student::print()
{
    cout << "Name: " << name << "   Score: " << score << endl;
}

bool compare(Student &a, Student &b)
{
    return a.get_Score() > b.get_Score();
}

int main()
{
    vector <Student> students;
    string name;
    double score;

    for (int i = 0; i < 3; i++)
    {
        cout << "이름 입력";
        cin >> name;
        cout << "점수 입력";
        cin >> score;
        // 입력받은 매개변수를 Student 객체 생성자 인수로 전달
        students.push_back(Student(name, score));
    }

    sort(students.begin(), students.end(), compare);

    for (auto &s : students)
        s.print();

    return 0;
}
