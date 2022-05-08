#include<stdio.h>
int main(){
    int num=10;
    int *p=&num;
    int *q=&num;
    int *r=&num;

    printf("%p %d %d",p,q,r);
    return 0;
}