#include<stdio.h>
int main(){
    int n=123;
    int *p;
    p=&n;

    printf("%d %p",*p,p);
    return 0;
}