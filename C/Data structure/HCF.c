#include <stdio.h>
int main()
{
    int smaller = 0;
    int n1, n2;
    int greater = 0;
    int HCF = 0;
    printf("enter the numbers of which you want to get HCF =");
    scanf("%d%d", &n1, &n2);
    if (n1 < n2)
    {
        smaller = n2;
        greater = n1;
    }
    else if (n2 < n1)
    {
        smaller = n2;
        greater = n1;
    }

    for (int i = 2; i <= smaller; i++)
    {
        if (smaller % i == 0 && greater % i == 0)
        {
            HCF = i;
        }
    }
    printf("HCF of n1 and n2 is %d", HCF);
    return 0;
}
