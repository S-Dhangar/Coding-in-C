#include<stdio.h>
int main(){
    static int a[5]={5,10,15,20,25};
    int i,j,m,n;
    i=++a[1];
    j=a[1]++;
    printf("i=%d j=%d a[1]=%d\n",i,j,a[1]);
    i=1;
    m=a[i++];
    printf("i=%d m=%d\n",i,m);
    i=2;
    n=a[++i];
    
    printf("i=%d n=%d",i,n);
    return 0;
}