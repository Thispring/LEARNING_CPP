// TV, WideTV, SmartTV 생성자에 매개 변수를 전달하는 예제

#include <iostream>
#include <string>
using namespace std;

class TV {
    int size;   // 스크린 크기
public:
    TV() {size = 20;}
    TV(int size) {this->size = size;}
    int getSize() {return size;}
};

class WideTV : public TV {
    bool videoIn;
public:
    WideTV(int size, bool videoIn) : TV(size) {
        this -> videoIn = videoIn;
    }
    bool getvideoIn() {return videoIn;}
};

class SmartTV : public WideTV {
    string ipAddr;  // 인터넷 주소
public:
    SmartTV(string ipAddr, int size) : WideTV(size, true) {
        this -> ipAddr = ipAddr;
    }
    string getIpAddr() {return ipAddr;}
};

int main()
{
    // 32인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 스마트 TV 객체 생성
    SmartTV htv("192.0.0.1", 32);
    cout << "size=" << htv.getSize() << endl;
    cout << "videoIn=" << boolalpha << htv.getvideoIn() << endl;
    cout << "IP=" << htv.getIpAddr() << endl;
}
