#include<stdio.h>
int main(){
    int n,large=0,second=0;
    printf("enter the size of the array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elemnts of the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array is ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++){
        if(large<a[i]){
            second = large;
            large=a[i];
        }
        if(a[i]<large && a[i]>second){
            second=a[i];
        }

    }
    printf("largest elemnt is %d and second large is %d",large,second);
    return 0;
}