#include<stdio.h>
int b[5];

int main(){
    int c[5];
    static int a[5]={1,2,3,4,5};
    for (int i = 0; i <=4; i++)
    {
          printf("%d %d %d\n",a[i],b[i],c[i]);
    }
    
  
    return 0;
}