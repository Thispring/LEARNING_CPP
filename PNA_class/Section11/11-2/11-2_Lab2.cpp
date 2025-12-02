// 하나의 이미지 파일을 다른 이미지 파일로 복사하는 프로그램 예제

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string ifile, ofile;
    cout << "원본 파일 이름:";
    cin >> ifile;
    cout << "복사 파일 이름:";
    cin >> ofile;
    ifstream source(ifile, ios::binary);
    ofstream dest(ofile, ios::binary);

    // 밑의 코드 대신 dest << source.rdbuf(); 사용가능
    // rdbuf()는 istream객체가 사용하는 버퍼객체의 포인터를 반환
    // 이것을 << 연산자를 이용하여 ostream으로 연결하면 문장하나로
    // 파일의 전체 내용을 복사 할 수 있다.
    if (source.is_open() && dest.is_open()) {
        while (!source.eof()) {
            dest.put(source.get());
        }
    }
    
    return 0;
}