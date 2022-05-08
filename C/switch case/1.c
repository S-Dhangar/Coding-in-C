#include<stdio.h>
int main(){
    char i;
    printf("enter any number ");
    scanf("%c",&i);
    switch(i){
        case '1':
        printf("yes it is right");
        default:
        printf("It is default");
    }
}
