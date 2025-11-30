// 상속을 이용한 TV 객체 실습

#include <iostream>
using namespace std;

class TV {
  int size;

public:
  TV() { size = 20; }
  TV(int size) { this->size = size; }
  int getSize() { return size; }
};

class WideTV : public TV {
  bool videoIn;

public:
  // WideTV() {}
  WideTV(int size, bool videoIn) : TV(size) { this->videoIn = videoIn; }
  bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV {
  string ipAddr;

public:
  SmartTV(string ipAddr, int size) : WideTV(size, true) {
    this->ipAddr = ipAddr;
  }
  string getIp() { return ipAddr; }
};

int main() {
  /*
  WideTV tv(32, true);
  cout << "size=" << tv.getSize() << endl;
  cout << "videoIn=" << boolalpha << tv.getVideoIn() << endl;
  */
  SmartTV tv("192.0.0.1", 32);
  cout << "size=" << tv.getSize() << endl;
  cout << "videoIn=" << boolalpha << tv.getVideoIn() << endl;
  cout << "Ip=" << tv.getIp() << endl;
}
