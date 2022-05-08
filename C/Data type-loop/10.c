#include<stdio.h>

int main(){
    register float r=3.14;  // nothing will change
    register double y=3.4;
    printf("r=%f y=%lf",r,y);
    return 0;
}