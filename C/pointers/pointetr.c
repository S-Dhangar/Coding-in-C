#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int **x=&p;
    int ***z=&x;
    printf("%u %d",&a,a);
    printf("\n %u %u %d",x,&x,*x);
    printf("\n %u %u %u %d",x,&x,*x,**x);
    printf("\n %u %u %u %u %d",z,&z,*z,**z,***z);
    return 0;
}