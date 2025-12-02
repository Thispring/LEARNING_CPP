// fstream을 이용하여 c:\temp\student.txt 파일에 c:\windows\system.ini를 덧붙이는 프로그램을 작성하는 예제
// NOT RUN
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* firstFile = "c:\\temp\\student.txt";
    const char* secondFile = "c:\\windows\\system.ini";

    fstream fout(firstFile, ios::out | ios::app);   // 쓰기 모드로 파일 열기
    if(!fout) {
        cout << firstFile << " 열기 오류";
        return 0;
    }

    fstream fin(secondFile, ios::in);   // 읽기 모드로 파일 열기
    if(!fin) {
        cout << secondFile << " 열기 오류";
        return 0;
    }

    int c;
    while((c=fin.get()) != EOF) {   // 파일 끝까지 문자 읽기
        fout.put(c);    // 읽은 문자 기록
    }

    fin.close();    // 입력 파일 닫기
    fout.close();   // 출력 파일 닫기
}