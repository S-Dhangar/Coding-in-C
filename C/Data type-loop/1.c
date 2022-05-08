#include<stdio.h>
int main(){
    unsigned char ch;
    for(ch=65;ch<=254;ch++){
        printf("%d %c\n",ch,ch);
    }
}