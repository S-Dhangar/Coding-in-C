#include<stdio.h>
int main(){
    int a=0,b=1,i,sum,n;
    printf("enter n");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=2;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;

    printf("%d",sum);}
return 0;
}
