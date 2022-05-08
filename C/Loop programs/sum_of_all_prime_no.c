#include<stdio.h>
int main(){
     int n,i,j,sum=0;
     scanf("%d",&n);
     for(i=2;i<n;i++){
         for(j=2;j<i;j++){
             if(i%j==0){
                 break;
             }
         }

         if(i==j){
          
             sum=sum+i;
            
         }
     }
      printf("%d ",sum);
     return 0;
}