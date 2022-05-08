#include<stdio.h>
int main(){
    short int a=1;
    for(a=1;a<=32767;a++){
        printf("%d\n",a);   // infinite
    }
    return 0;
}