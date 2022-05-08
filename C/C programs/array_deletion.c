#include <stdio.h>
int main()
{
    int   pos, i,n=6;
    int a[] = {1, 2, 3, 4, 5, 6};
    printf("array before insertion =  ");
    for (i = 0; i <=5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("enter the position from which you want to delete an element = ");
    scanf("%d", &pos);
    
    for(i=pos-1;i<n;i++){
        a[i]=a[i+1];
    }
    
    n--;
    printf("\narray after insertion\n");
    for (i = 0; i <n; i++)
    {
        printf("%d is at %d position\n", a[i],&a[i]);
    }
    return 0;
}