// 예외 처리를 가진 스택 클래스 만들기 예제

#ifndef MYSTACK_H
#define MTSTACK_H

class MyStack {
    int data[100];
    int tos;
public:
    MyStack() { tos = -1; }
    void push(int n) throw(char*);
    int pop() throw(char*);
};

#endif