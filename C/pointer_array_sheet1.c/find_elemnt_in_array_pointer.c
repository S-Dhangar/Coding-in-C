#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int *p=a;
    printf("enter the position at which you want to find the element");
    int n;
    scanf("%d",&n);
    printf("%d",*p+n);
    return 0;
}