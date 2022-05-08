#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array ");
    scanf("%d",&n);
    int a[n],num;
    printf("enter the elemnts of the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p;
    printf("enter the position at which you want to insert the elemnet in the array ");
    scanf("%d",&p);
    printf("enter the element ");
    scanf("%d",&num);
    for(int i=n;i>p;i--){
    a[i]=a[i-1];
    }
    a[p]=num;
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}