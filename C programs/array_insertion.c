#include <stdio.h>
int main()
{
    int  num, pos, i;
    int a[7] = {1, 2, 3, 4, 5, 6};
    printf("array before insertion =  ");
    for (i = 0; i <=5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("enter the lement which you want to insert at what position = ");
    scanf("%d%d", &num, &pos);
    
    for(i=6;i>=pos;i--){
        a[i]=a[i-1];
    }
    
    a[i]=num;
    printf("\narray after insertion\n");
    for (i = 0; i <=6; i++)
    {
        printf("%d is at %d position\n", a[i],&a[i]);
    }
    return 0;
}