#include<stdio.h>
int main(){
    static int a[]={0,1,2,3,4};
    int i,*p;
    for(p=a+4;p>=a;p--)
    printf("%d ",a[p-a]);
    return 0;
}