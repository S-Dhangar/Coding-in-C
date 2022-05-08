#include<stdio.h>
int main(){
    static int a[10]={1,2,3,4,5,6};
    for(int i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}