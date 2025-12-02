// 파일입출력실습

#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;

// 텍스트 파일 생성과 내용 출력
/*
int main()
{
    int i;
    ofstream os("data.txt");
    for (i = 0; i < 10; i++)
    {
        os << i << " ";
    }
    os.close();
    ifstream is("data.txt");
    for (i = 0; i < 10; i++)
    {
        is >> i;
        cout << i << " ";
    }
}
*/

// 이미지 복사
/*
int main()
{
    ifstream fsrc("apple.jpeg", ios::in | ios::binary);
    ofstream dest("copyapple.jpeg", ios::out | ios::binary);
    char buf[1024];
    int n, fsize = 0;
    while (!fsrc.eof())
    {
        fsrc.read(buf, 1024);
        n = fsrc.gcount();
        dest.write(buf, n);
        fsize += n;
    }
    cout << fsize << endl;
}
*/

// 텍스트 파일을 바이너리 파일로 읽기
int main()
{
    ofstream fout{"input.txt", ios::out | ios::binary};
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    fout.write((char*)a, sizeof(a));
    fout.close();

    ifstream fin{"input.txt", ios::in | ios::binary};
    //for(int i = 0; i < 10; i++) a[i] = 99;
    fin.read((char*)a, sizeof(a));
    for(int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    //fin.seekg(0, ios::end);
    fin.seekg(-4, ios::end);
    int c;
    fin.read((char*)&c, sizeof(c));
    cout << fin.tellg() << endl;
    cout << c << endl;
    fin.close();
}