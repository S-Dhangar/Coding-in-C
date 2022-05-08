#include<stdio.h>
int main(){
    int n;
    printf("enter the number of lines you want to print of the triangle");
    scanf("%d",&n);
    int a=1;
    while(n){
    for(int i=1;i<=a;i++){
    printf("* ");
    
    }
    printf("\n");
    a++;
    n--;
    }
    return 0;
}