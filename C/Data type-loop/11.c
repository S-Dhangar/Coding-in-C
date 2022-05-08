#include<stdio.h>

int main(){
    register float i; // it will make it int bydefault
    for(i=1;i<=100;i++){
         printf("%f\n",i);
    }
   
    return 0;
}