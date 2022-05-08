#include<stdio.h>
int main(){
    unsigned int ch=0;
    for(ch=65;ch<=255;){
        printf("%d %c\n",ch,ch++);
    }
}