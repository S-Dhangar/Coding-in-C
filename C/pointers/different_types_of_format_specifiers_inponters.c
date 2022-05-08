#include<stdio.h>
int main(){
    int num=10;
    int *p;
    p=&num;
    printf("%p ",p);
    printf("%p ",&num);
    printf("%u ",&num);
    printf("%x",p);
    return 0;
}