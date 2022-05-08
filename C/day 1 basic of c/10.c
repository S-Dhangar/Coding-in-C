#include"stdio.h"
int main(){
    char a;
    scanf("%c",&a);
    if((a>='9' && a<='90') || (a>=97 && a<=122)){
        printf("This is a alphabetic character");

    }
    else{
        printf("it is not a alphabetic character");
    }
    return 0;
}