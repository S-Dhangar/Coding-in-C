#include<stdio.h>
int main(){
   unsigned char j=1;
   while(j<=254){
       printf("%d",j);
       j++;
   }
   printf("\n%d\n",j);
   unsigned char i;
   for(i=1;i<=254;i++){
       printf("%d",i);
   }
   printf("%d",i);
    return 0;
}