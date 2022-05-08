#include <stdio.h>
int main()
{
    int n, count = 0,num;
    printf("enter the value of number");
    scanf("%d", &n);
    printf("enter the value of digit of which you want to check frequency = ");
    scanf("%d", &num);
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        if (rem == num)
        {

            count++;
        }
    }
    printf("%d came %d times\n", num, count);
    return 0;
}