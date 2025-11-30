// 예외처리와 템플릿 실습

#include <iostream>
using namespace std;

/*
// 두 수를 받아서 몫과 나머지를 출력하는 프로그램
int main()
{   
    int a, b;
    cin >> a >> b;
    try {
        if (a < 0 && b < 0) throw "음수불가";
        if (b == 0) throw b;
        cout << a / b << endl;
    }
    catch(int e)
    {
        cout << e << "으로 나눌 수 없습니다." << endl;
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
    cout << "end" << endl;  // 예외 상관없이 catch 밑의 문장 실행
}
*/

// 스택 자료구조 구현과 예외처리
template <class T>  // 템플릿화
class MyStack {
    T data[5];
    int top;
public:
    MyStack():top{-1} {}
    void push(T n) //throw(char *) 
    {
        if (top == 4) throw "Stack is full"; 
        top++; data[top] = n; 
    }
    int pop() //throw(char *) 
    {
        if (top == -1) throw "Stack is empty";
        T t = data[top--]; return t; 
    }
};

int main() {
    MyStack <int> st;
    try {
        for (int i = 1; i <= 5; i++)
            st.push(i);
        
        //st.push(1);
        //st.push(2);
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
    }
    catch (const char* s)
    {
        cout << s << endl;
    }
}