#include <stdio.h>
int main()
{
    int row, c = 0, j = 1,k=10;
    printf("enter the value of row ");
    scanf("%d", &row);
        
    for (int i = row; i > 0; i--)
    {
        int a = i - 1;
        int b = 0;
        while (b != a)
        {
            printf(" ");
            b++;
        }
        c = c + 1;
        int d = 0;
        while (d != c)
        {
            printf(" *");
            d++;
        }
        printf("\n");
    }
    c = 0;
    for (int i = row; i > 0; i--)
    {
        c = c + 1;
        int d = 0;
        while (d != c)
        {
            printf(" ");
            d++;
        }
        int a = i - 1;
        int b = 0;
        while (b != a)
        {
            printf(" *");
            b++;
        }
        printf("\n");
    }
         return 0;
}