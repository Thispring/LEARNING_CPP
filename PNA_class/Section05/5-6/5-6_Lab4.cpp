// 벡터와 알고리즘 예제

#include <iostream>
#include <algorithm>    // 알고리즘 헤더 파일
#include <vector>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    // 클래스 내부에서 멤버 함수를 정의할 때는 ClassName::을 사용하지 않습니다.
    // 클래스 외부에서 멤버 함수를 정의할 때만 ClassName::을 사용합니다.
    Person(string n, int a) {
        name = n;
        age = a;
    }
    string get_name() { return name ; }
    int get_age() { return age; }
    void print() {
        cout << name << " " << age << endl;
    }
};

bool compare(Person &p, Person &q)
{
    return p.get_age() < q.get_age();
}

int main()
{
    vector <Person> list;
    list.push_back(Person("Kim", 30));
    list.push_back(Person("Park", 22));
    list.push_back(Person("Lee", 26));

    // sort()함수: 정렬대상 범위, 객체를 비교할 때 사용하는 함수
    sort(list.begin(), list.end(), compare);

    for (auto &e : list)
    {
        e.print();
    }

    return 0;
}