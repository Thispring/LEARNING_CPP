// 다중 상속 선언 및 멤버 호출 예제

#include <iostream>
using namespace std;

class MP3 {
public:
    void play();
    void stop();
};

class MobilePhone {
public:
    bool sendCall();
    bool receiveCall();
    bool sendSMS();
    bool receiveSMS();
};

// 다중 상속 선언
class MusicPhone : public MP3, public MobilePhone {
public:
    void dial();
};

// 다중 상속 활용
void MusicPhone::dial() {
    play();
    sendCall();
}

int main()
{
    MusicPhone hanPhone;
    hanPhone.play();
    hanPhone.sendSMS();
}
