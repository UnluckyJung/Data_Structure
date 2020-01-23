#include<stdio.h>

#define MAX 100000

int stack[MAX + 10];
int sp;
void push(int h) { stack[++sp] = h; }
void pop() { sp--; }
int top() { return stack[sp]; }
int size() { return sp; }
int empty() { return sp == 0; }

int main(){
    push(10);
    printf("%d\n", top());

    push(20);
    push(30);
    printf("%d\n", top());

    pop();
    printf("%d\n", top());

    if(empty()) printf("empty\n");
    else printf("no empty\n");

    return 0;
}