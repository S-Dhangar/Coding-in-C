#include <stdio.h>
int main()
{
    int num, rem;
    int sum = 0;
    printf("enter the value of number");
    scanf("%d", &num);
    int dum=num;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum * 10 + rem;
    }
    if(sum==dum){
    printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
    return 0;
}