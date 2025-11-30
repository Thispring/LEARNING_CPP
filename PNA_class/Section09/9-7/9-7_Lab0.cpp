// 다형성 실습

#include <iostream>
#include <string>
using namespace std;

// 단위를 변환해주는 Converter
class Converter {
protected:
    double ratio;
    virtual double convert(double src) = 0;
    virtual string getSourceString() = 0;   // 여러 종류의 단위를 사용하기 위해 string 사용
    virtual string getDestString() = 0;
public:
    Converter (double ratio) { this -> ratio = ratio; }
    void run() {
        double src;
        cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다." << endl;
        cout << getSourceString() << "을 입력하세요 >>";
        cin >> src;
        cout << "반환 결과: " << convert(src) << getDestString() << endl; 
    }
};

class WonToDollar : public Converter {
protected:
    double convert(double src) { return src/ratio; }
    string getSourceString() { return "원"; }
    string getDestString() { return "달러"; }
public:
    WonToDollar(double ratio) : Converter(ratio) { }
};

class KmToMile : public Converter {
protected:
    double convert(double src) { return src/ratio; }
    string getSourceString() { return "km"; }
    string getDestString() { return "mile"; }
public:
    KmToMile(double ratio) : Converter(ratio) { }
};

int main() {
    /*
    WonToDollar wd(1010);   // 1달러 -> 1010원
    wd.run();

    KmToMile km(1.6039344); // 1mile -> 1.609344km
    km.run();
    */
    Converter *p;
    WonToDollar wd(1010);
    KmToMile km(1.6039344);

    p = &wd;
    p -> run();

    p = &km;
    p -> run();
}