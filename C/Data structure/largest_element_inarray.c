#include <stdio.h>
int main()
{
    int large = 0, secondlarge = 0, a[5] = {8, 15, 5, 9, 1};
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] > secondlarge && a[i] < large)
        {
            secondlarge = a[i];
        }
    }
    printf("large element in the array is %d\nsecondlarge number in the array is %d", large, secondlarge);
    return 0;
}