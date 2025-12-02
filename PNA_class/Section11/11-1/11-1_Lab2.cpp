// 파일 모드 지정 예제

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream os("sample.txt", ios::app);
    if (!os)
    {
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);
    }

    os << "추가되는 줄 #1" << endl;
    os << "추가되는 줄 #2" << endl;

    return 0;
}