#include <stdio.h>
int main()
{
    long int n, s, count, num, a[10];
    printf("enter the value of number");
    scanf("%ld", &n);
    long int m = n;
    int i = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;

        a[i] = rem;
        i++;
    }

    while (m > 0)
    {
        int rem = m % 10;
        m = m / 10;
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (rem == a[j])
            {
                count++;
            }
        }
        printf("%ld came %d times\n", rem, count);
    }
    return 0;
}