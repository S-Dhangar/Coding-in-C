#include<stdio.h>
#include<string.h>
int main(){
    char str[]="shuabham";
    char str1[]="shbham";
    
    int n=strcmp(str,str1);
    printf("%d",n);
    return 0;
}