#include<stdio.h>
void add(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

     
     
}
int main(){
    int a=5,b=8;
     int sum=1;
     add(&a,&b);
    printf("%d,%d",a,b);
    return 0;
}