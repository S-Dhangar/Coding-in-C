#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    int *p=(int *)malloc(n*sizeof(int));
    int *q=(int *)malloc(n*sizeof(int));
    int *r=(int *)malloc(n*sizeof(int));
    printf("enter the elements of the first and second arry ");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
        scanf("%d",(q+i));
    }
    for(int i=0;i<n;i++){
        *(r+i)=*(p+i)+*(q+i);

    }
    for(int i=0;i<n;i++){
        printf("%d ",*(r+i));

    }
    
    return 0;
}