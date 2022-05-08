#include<stdio.h>
 main()
{
    int arr[4]={3,4,5,6};
   
    int k[4];

    k=&arr;
    printf("%d\n",k[1]);
}

