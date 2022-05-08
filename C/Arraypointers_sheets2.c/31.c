#include<stdio.h>
int main(){
     static int a[3][3]={
        2,4,3,
        6,8,5,
        3,5,1
    };
    int*ptr;
    ptr=a;
    printf("%d",ptr[2]);
    return 0;
}