#include<stdio.h>
int main(){
    int n,a=1;
    long int b=0;
    
    printf("enter the value of n ");
    scanf("%d",&n);
    while(n>0){
        int r=n%2;
        n=n/2;
        b=b+r*a;
       a=a*10;
    }
 printf("%d",b);
    return 0;
}