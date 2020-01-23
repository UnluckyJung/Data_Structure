#include<stdio.h>

int n;
int que[100*100];
int wp, rp;

void push(int d){que[wp++] = d;}
void pop(){rp++;}
int front(){return que[rp];};
int back(){return que[wp-1];};
int size(){return wp-rp;};
int empty(){return wp == rp;};

int main(){
    push(3);
    printf("%d\n", front());

    push(4);
    printf("%d\n", front());
    printf("%d\n", back());
    
    //초기화를 원한다면 wp = rp = 0;
    wp = rp =0;

    if(empty()) printf("empty\n");
    printf("%d\n", size());

    return 0;
}