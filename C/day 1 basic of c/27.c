#include<stdio.h>
int main(){
    printf("%d ",sizeof(4));
    printf("%d ",sizeof(4)/sizeof(2.0));
    printf("%d",sizeof(2.0)/sizeof(4));
    return 0;
}