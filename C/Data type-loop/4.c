#include<stdio.h>
int main(){
    long double a=0.7;
    double b=0.7;
    if(a==b){
        printf("%Lf %lf",a,b);  // it is equal here but not in turbo condition will false there
    }
    return 0;
}