#include <stdio.h>
int main()
{
    long rem, r, n;

    printf("enter the value of number");
    scanf("%ld", &n);
    printf("%ld\n", n);
    if(n>10){
    rem = n % 10;
    n = n / 10;
    printf("%ld", rem);
    }
    if (n >9 && n < 100)
    {
        r = n % 10;
        printf("%ld", r);
    }
    if (n >99 && n < 1000)
    {
        r = n % 100;
        printf("%ld", r);
    }
    if (n >999 && n < 10000)
    {
        r = n % 1000;
        printf("%ld", r);
    }
    if (n >9999 && n < 100000)
    {
        r = n % 10000;
        printf("%ld", r);
    }
    if (n >99999 && n < 1000000)
    {
        r = n % 100000;
        printf("%ld", r);
    }
    if (n >999999 && n < 10000000)
    {
        r = n % 1000000;
        printf("%ld", r);
    }
    if (n > 9999999 && n < 100000000)
    {
        r = n % 10000000;
        printf("%ld", r);
    }
    if (n >99999999 && n < 1000000000)
    {
        r = n % 100000000;
        printf("%ld", r);
    }
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
    }
    printf("%ld", rem);

    return 0;
}