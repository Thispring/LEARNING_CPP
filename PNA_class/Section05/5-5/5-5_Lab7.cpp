// 책들을 저장해보자
// 여러 권의 책을 저장할 수 있는 객체 배열 books를 생성하여 보자

#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int price;
    // 초기화 리스트를 활용한 방법    
    // Book(string t, int p): title{t}, price {p} {}
    Book(string t, int p);
    void print();
};

Book::Book(string t, int p)
{
    title = t;
    price = p;
}

void Book::print()
{
    cout << "제목: " << title;
    cout << "          가격: " << price << endl;
}

int main()
{
    Book book[3] = { { "C++", 10000 }, { "C Lang", 5000 }, { "C#", 7000 } };
    cout << "소장하고 있는 책 정보" << endl;
    cout << "====================" << endl;
    // 범위 기반 for문 사용
    for (Book& b: book)
    {
        b.print();
    }
    /*
    for (int i = 0; i < 3; i++)
    {
        book[i].print();
    }
    */
    cout << "====================" << endl;

    return 0;
}