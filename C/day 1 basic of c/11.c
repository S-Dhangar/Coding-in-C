#include"stdio.h"
#include"ctype.h"
int main(){
    char a;
    scanf("%c",&a);
    if(isalnum(a))
    printf("it is alphabet or number");
    return 0;
}