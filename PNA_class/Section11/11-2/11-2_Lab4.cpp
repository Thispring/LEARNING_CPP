// read()/write()로 이미지 파일 복사 예제

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* srcFile = "apple.jpeg";
    const char* destFile = "copyapple.jpeg";

    ifstream fsrc(srcFile, ios::in | ios::binary);
    if(!fsrc) {
        cout << srcFile << " 열기 오류" << endl;
        return 0;
    }
    ofstream fdest(destFile, ios::out | ios::binary);
    if(!fdest) {
        cout << destFile << " 열기 오류" << endl;
        return 0;
    }
    // 소스 파일에서 목적 파일로 복사하기
    char buf[1024];
    while(!fsrc.eof()) {
        fsrc.read(buf, 1024);   // 최대 1024 바이트를 읽어 배열 s에 저장
        int n = fsrc.gcount();  // 실제 읽은 바이트 수 알아냄
        fdest.write(buf, n);    // 읽은 바이트 수 만큼 버퍼에서 목적 파일에 기록
    }
    cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
    fsrc.close();
    fdest.close();
}