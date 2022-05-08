#include<stdio.h>
int main(){
    int a[5];
    int *p=a;
    
    for (int i = 0; i < 5; i++)
    {
          
    scanf("%d",p);
    p++;
   

    }
    p=a;
     for (int i = 0; i < 5; i++)
    {
          
    printf("%d ",*p);
    p++;

    }

    
    return 0;
}