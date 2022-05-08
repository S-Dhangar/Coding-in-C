#include<stdio.h>
int main(){
 int num,rem,no=0,i=1,arr[100];
 scanf("%d",&num);
 
 while(num>0){
     rem=num%10;
     if(rem==0){
         rem=1;
     }
     if(rem==1){
         rem=0;
     }
     num=num/10;
     no=rem*i+no;
     i=i*10;
 }
 
     printf("%d ",no);
 
}
