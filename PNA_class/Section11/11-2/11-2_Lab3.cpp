// read()로 텍스트 파일을 바이너리 I/O로 읽어오는 예제
// read()를 이용하여 한번에 32바이트씩 c:\windows\system.ini 파일을 읽어 화면에 출력하는 프로그램을 작성하라
// NOT RUN
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* file = "c:\\windows\\system.ini";

    ifstream fin;
    fin.open(file, ios::in | ios::binary);  // 읽기 모드로 파일 열기
    if(!fin) {
        cout << "파일 열기 오류";
        return 0;
    }

    int count = 0;
    char s[32];
    while(!fin.eof()) {
        fin.read(s, 32);    // 최대 32 바이트를 읽어 배열 s에 저장
        int n = fin.gcount();   // 실제 읽은 바이트 수 알아냄
        cout.write(s, n);   // 버퍼에 있는 n개의 바이트를 화면에 출력
        count += n;
    }

    cout << "읽은 바이트 수는" << count << endl;
    fin.close();    // 입력 파일 닫기
}