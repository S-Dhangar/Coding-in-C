#include<stdio.h>
int fib(int a);
int main(){
    int a,i;
    
    printf("enter a");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
    printf("%d",fib(i));}
return 0;
}int fib(int a){
    if(a==0)
    return 0;
    else if(a==1)
    return 1;
    
else
    return fib(a-1)+fib(a-2);
    return 0;}

