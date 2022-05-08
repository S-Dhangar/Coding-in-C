#include<stdio.h>
int main(){
    static int a[3][3]={
        1,2,3,
        4,5,6,
        7,8,9
    };
    int *ptr[3]={a[0],a[1],a[2]};
    int**ptr1=ptr;
    int i;for(i=0;i<=2;i++)
        printf("%d ",*a[i]);
        printf("\n");
    for(i=0;i<=2;i++)
        printf("%d",*ptr[i]);
        printf("\n");
     
    
    for(i=0;i<=2;i++)
    {
    printf("%d",**ptr1);
    ptr1++;
}
    return 0;
}