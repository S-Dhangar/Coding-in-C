#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5},b[]={6,7,8,9,0},c[5];
    
    int *p=a;
    
    for (int i = 0; i <sizeof(a)/sizeof(a[0]); i++)
    {
        c[i]=*p;
        p++;
    }
    
    
    p=b;
     for (int i = 0; i< sizeof(a)/sizeof(a[0]); i++)
    {
        a[i]=*p;
        p++;
    }
 

    p=c;
     for (int i = 0; i <sizeof(a)/sizeof(a[0]); i++)
    {
        b[i]=*p;
        p++;
    }

    
    for (int i = 0; i <=sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d %d\n",a[i],b[i]);
    }
    
    
    return 0;
}