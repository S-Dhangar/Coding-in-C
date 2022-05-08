#include<stdio.h>
int main(){
     int n;
    printf("enter the size of the array ");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    printf("enter the elements of the array a ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    printf("enter the elements of array b");
    for(int i=0;i,i<n;i++){
        scanf("%d",&b[i]);
    }
    int k=0;
    for(int i=0;i<n;i++){
        c[k]=a[i];
        c[k+1]=b[i];
        k=k+2;
    }
    for(int i=0;i<k;i++){
        printf("%d",c[i]);
    }
    return 0;
}