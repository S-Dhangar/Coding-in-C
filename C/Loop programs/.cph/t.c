#include<stdio.h>
#include<math.h>
int main(){
    int k=10;
    while(k--){
    int num,rem,sum=0,i=0;
    char arr[10];
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        num=num/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
 //printf("%d",sum);
    int sum2=0;
    i=0;
   while(sum!=0){
       rem=sum%16;
       sum=sum/16;
       if(rem<10){
           rem=rem+48;
       }
       else{
           rem=rem+55;
       }
       arr[i]=rem;
       i++;
   }
  for(i;i>=0;i--){
      printf("%c",arr[i]);
  }
}
}