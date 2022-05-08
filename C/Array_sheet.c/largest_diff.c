#include<stdio.h>
int main(){
   int arr[10];
   int n;
   scanf("%d",&n);
   for (int i = 0; i < n; i++)
   {
       scanf("%d",&arr[i]);


  }
   int largest=0;
   for (int i = 0; i < n; i++)
   {
       /* code */
         for (int j = i; i < n; i++)
   {
       /* code */
       if((arr[i]-arr[j])>largest){
           largest=arr[i]-arr[j];
       }
   }
   }
   
printf("%d",largest);

}