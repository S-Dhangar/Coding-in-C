#include<stdio.h>
int main(){
   int i,j;
   for(j=1;j<=10;j++){
       for(i=1;i<=10;i++){
           if(j<10){
               goto out;
           }
          
       }
        printf("123");
           printf("123");
           printf("123");
   }
   out:
       printf("dream about a nightmare");
    return 0;
}
