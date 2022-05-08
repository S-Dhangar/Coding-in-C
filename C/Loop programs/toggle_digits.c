#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,sum=0,i=0;
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        if(rem==0){
            rem=1;
        }
        else{
            rem=0;
        }
        num=num/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
 printf("%d",sum);