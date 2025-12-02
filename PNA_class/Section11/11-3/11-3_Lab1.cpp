// 10개의 난수를 저장한 이진 파일을 만들고 파일의 크기를 알아낸 다음에
// 파일의 중간으로 파일 위치 표시자를 이동시켜서 그 위치에 있는 난수를 읽어오는 프로그램 작성
// NOT RUN
#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 10;

int main()
{
    int data;
    // 이진 파일을 쓰기 모드로 열기
    ofstream os{"test.dat", ofstream::binary};
    if (os.fail()) {
        cout << "test.dat 파일을 열 수 없습니다." << endl;
        exit(1);
    }
    for (int i = 0; i < SIZE; i++) {
        srand(time(0));
        data = rand();
        cout << data << " ";
        os.write((char*)&data, sizeof(data));
    }
    os.close();
    
    // 이진 파일을 읽기 모드로 열기
    ifstream is{"test.dat", ofstream::binary};
    if (is.fail()) {
        cout << "test.dat 파일을 열 수 없습니다." << endl;
        exit(1);
    }

    // 파일의 크기 확인
    is.seekg(0, ios::end);
    long size = is.tellg();
    cout << endl << "파일 크기는 " << size << endl;

    // 파일의 중앙으로 위치 표시자를 이동
    is.seekg(size/2, ios::beg);
    is.read((char*)&data, sizeof(int));
    cout << "중앙위치의 값은 " << data << endl;
    return 0;
}