#include<stdio.h>
void add(int *a,int *b,int *sum){
    *a=10;
    *b=15;
    *sum=*a+*b;
     
     
}
int main(){
    int a=5,b=8;
     int sum=1;
     add(&a,&b,&sum);
    printf("%d,%d,%d",a,b,sum);
    return 0;
}