#include <stdio.h>
int main()
{
    int n = 5, fact = 1;
    loop:
    fact = fact * n;
    n--;
    if(n>1){
        goto loop;
    }

    printf("factorial is %d ",fact);
    return 0;
}