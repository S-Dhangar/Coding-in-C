#include <stdio.h>
int main()
{
    int b, j = 1, n,s;
    printf("enter the size of the array ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of the array ");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
}
    
    printf("enter the sum you want to check ");
    scanf("%d",&s);
    for (int i = 0; i < n; i++)
    {
        b=0;

        for (j = i; b< s && j<n; j++)
        {
            b = b+arr[j];
        }
        if (b == s)
        {
            printf("%d %d ", ++i,j);
            break;
        }
    }

    return 0;
}