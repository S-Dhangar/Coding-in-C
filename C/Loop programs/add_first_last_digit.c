#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int f;
    f=n%10;
    while(n>=10){
       n=n/10;

    }
    n=n+f;
    printf("%d",n);
    return 0;

}