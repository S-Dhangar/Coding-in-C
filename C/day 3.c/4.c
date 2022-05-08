#include<stdio.h>
int main(){
   int x=3,y=5;
   y=++x*++x*++x*++x;
   printf("%d %d",y,x); /// precedenc of ++ is more than arithmetic operators 
    return 0;
}