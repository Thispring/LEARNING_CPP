// 파일 크기 알아내는 예제
// c:\windows\system.ini 파일의 크기가 몇 바이트인지 알아내어 출력하는 프로그램 작성
// NOT RUN
#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream& fin) {
    fin.seekg(0, ios::end); // get pointer를 파일의 맨 끝으로 옮김
    long length = fin.tellg();  // get pointer의 위치를 알아냄
    return length;  // length는 파일의 크기와 동일
}

int main() {
    const char* file = "c:\\windows\\system.ini";

    ifstream fin(file);
    if(!fin) {
        cout << file << "열기 오류" << endl;
        return 0;
    }
    cout << file << "의 크기는 " << getFileSize(fin);
    fin.close();
}