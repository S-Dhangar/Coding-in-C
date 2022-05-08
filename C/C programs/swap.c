#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("value of a and b are %d and %d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("after swapping with the help of third variable value of a and b are %d and %d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("value of a and b after swapping without help of thirdn variable is %d and %d",a,b);
    return 0;
}