#include<stdio.h>
int main(){
   static int n[3][3]={
       2,4,3,6,8,5,3,5,1
   };
   printf("%d %d %d",n[0],n[2],n[2][2]);
    
}