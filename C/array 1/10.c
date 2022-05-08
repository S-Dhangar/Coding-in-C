#include<stdio.h>
int main(){
    
    static float b[]={1.6,2.7,3,4,5.9};
    float *j,*k;
    j=b;
    k=b+4;
    j=j*2; // will not work because of pointer type values
    k=k/2;
    printf("%f %f",*j,*k);
    
}