// 멤버 동적 생성 예제

#include <iostream>
using namespace std;

class Dog {
private:
    int *pWeight;
    int *pAge;
public:
    // 생성자에서 동적 할당하고 디폴트 값으로 설정
    Dog() {
        pAge = new int(1);
        pWeight = new int(10);
    }
    ~Dog() {
        delete pAge;
        delete pWeight;
    }
    int getAge() { return *pAge; }
    void setAge(int age) { *pAge = age; }
    int getWeight() { return *pWeight; }
    void setWeight(int weight) { *pWeight = weight; }
};

int main()
{
    // main() 멤버 변수 pAge, pWeight가 포인터인 것을 인지 못함
    // 객체 포인터가 클래스의 private를 가리킬 수 없음?
    Dog *pDog = new Dog;
    cout << "강아지의 나이: " << pDog -> getAge() << endl;

    pDog -> setAge(5);
    cout << "강아지의 나이: " << pDog -> getAge() << endl;

    delete pDog;

    return 0;
}
