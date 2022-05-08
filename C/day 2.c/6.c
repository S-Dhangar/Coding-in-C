#include<stdio.h>
int main(){
   int i=10,j=5,k=2,n;
   n=(i==10)?j>k?200:99:999;
   printf("%d",n); 
   return 0;
}