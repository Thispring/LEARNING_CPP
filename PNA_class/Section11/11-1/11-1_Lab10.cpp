// istream의 getline()을 이용하여 텍스트 파일을 읽고 화면에 출력하는 예제
// c:\windows\system.ini 파일을 istream의 getline() 함수를 이용하여 한 줄 단위로 읽어 화면에 출력
// NOT RUN
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("c:\\windows\\system.ini");
    if(!fin) {
        cout << "c:\\windows\\system.ini 열기 실패" << endl;
        return 0;
    }

    char buf[81];   // 한 라인이 최대 80개의 문자로 구성된다고 가정
    while (fin.getline(buf, 81)) {  // 한 라인이 최대 80개의 문자로 구성
        cout << buf << endl;    // 라인 출력
    }

    fin.close();
}