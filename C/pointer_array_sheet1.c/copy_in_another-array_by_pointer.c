#include<stdio.h>
int main(){
    int a[5];
    int *p=a;
    int b[5];
    for (int i = 0; i < 5; i++)
    {
          
    scanf("%d",p);
    p++;
   

    }
    p=a;
     for (int i = 0; i < 5; i++)
    {
          
    b[i]=*p;
    p++;

    }
for (int i = 0; i < 5; i++)
{
     printf("%d ",b[i]);
}

    
    return 0;
}