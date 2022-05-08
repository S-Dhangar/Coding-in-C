#include<stdio.h>
int main(){
    int k=12,n=30;
    k=(k>5 && n=4 ? 100:200);  // will give an error, we have to use bracket in n 
    printf("%d",k);
    return 0;
}