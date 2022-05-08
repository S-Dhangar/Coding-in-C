#include<stdio.h>
int main(){
 int num,rem,no=0,i=1,sum=0;
 scanf("%d",&num);
 
 while(num>0){
     rem=num%2;
     num=num/2;
     sum=sum+rem*i;
     i=i*10;
 }
 printf("%d",sum);
}
