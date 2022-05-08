#include<stdio.h>
int main(){
    static int a[]={0,1,2,3,4};
    int i,*p;
    for(p=a+4,i=0;i<=4;i++)
    printf("%d ",p[i]);
    return 0;
}