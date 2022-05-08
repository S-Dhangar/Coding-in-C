#include<stdio.h>
int main(){
    static int a=5;
    printf("%d",a--);
    if(a){
       main();
    }
    return 0;
}