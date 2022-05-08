#include<stdio.h>
int main(){
    int A[]={300,1200,1000,100,600,2000,900,700,1500};
    int n=10;
    int large=0,large2=0;
    int i,j;
    
  for(i=0;i<n;i++){
    
     if(A[i]>large) 
     {   
       
         large=A[i];
     }
  } 

   printf("large no in array is=%d",large);
   for(j=0;j<=10;j++){
       if(A[j]>large2 && A[j]<large)
       large2=A[j];
   }printf("second large element is = %d",large2);
   
}