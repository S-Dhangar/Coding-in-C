#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,sum=0,i=0;
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        num=num/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
 printf("%d",sum);
    int sum2=0;
    i=1;
   while(sum!=0){
       rem=sum%16;
       sum=sum/16;
       
       sum2=sum2+rem*i;
       i=i*10;

   }
   printf(" %d",sum2);
}