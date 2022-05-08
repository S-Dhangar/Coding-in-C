#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i;
    
    for (int i = 0; i < 5; i++)
    {
     
        printf("%d ",*(a+i));
       // a++ will not work 

    }
    
   return 0;
}