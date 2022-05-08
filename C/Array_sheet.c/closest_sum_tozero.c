#include<stdio.h>
int main(){
   int arr[10];
   int n;
   scanf("%d",&n);
   for (int i = 0; i < n; i++)
   {
       scanf("%d",&arr[i]);


  }
   int closest=100000,closest1;
   for (int i = 0; i < n; i++)
   {
       /* code */
         for (int j = i+1; j < n; j++)
   {
       /* code */
        closest1=arr[i]+arr[j];
        if(closest1<0){
            closest1=-1*closest1;
        }
       if(closest1<closest){
           closest=closest1;
       }
      
   }
   }
   
printf("%d",closest);

}