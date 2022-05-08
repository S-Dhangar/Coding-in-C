#include<stdio.h>
int main(){
    static float array[5]={2.555,7.3,9.978,10.492,};
    int i;
    for(i=0;i<=4;i++)
    printf("%f ",array[i]);
    return 0;
}