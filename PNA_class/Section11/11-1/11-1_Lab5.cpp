// get()을 이용하여 텍스트 파일 c:\windows\system.ini를 읽어 화면에 출력하는 예제
// NOT RUN
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* file = "c:\\windows\\system.ini";

    ifstream fin(file);
    if(!fin) {
        cout << file << "열기 오류" << endl;
        return 0;
    }
    int count = 0;
    int c;
    while ((c=fin.get()) != EOF) {
        cout << (char)c;
        count++;
    }
    cout << "읽은 바이트 수는 " << count << endl;
    fin.close();
}