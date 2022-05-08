#include <stdio.h>
int k;
int repeat(int uni[], int k, int num)
{
    for (int i = 0; i <= k; i++)
    {
        if (uni[i] == num)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10], arr1[10], unions[10];
    int count;
    scanf("%d", &count);
    int i,j;
    for (i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < count; j++)
    {
        scanf("%d", &arr1[j]);
    }
j=0;
   for(i;i<(count+count);i++,j++){
       arr[i]=arr1[j];
   }



    for (i = 0; i < (count+count); i++)
    {

        if (repeat(unions, k, arr[i]))
        {
        }
        else
        {
            unions[k] = arr[i];
            k++;
        }
    }

    for (int m = 0; m < k; m++)
    {
        printf("%d ", unions[m]);
    }
}