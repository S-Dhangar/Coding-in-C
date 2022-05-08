#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array ");
    scanf("%d",&n);

    int a[n];

    printf("enter the elements of the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    for(int i=0;i<n;i++){
        int k=n-1;
        int l=a[n-1];
        while(k!=0){
            a[k]=a[k-1];;
            k--;
        }
       a[k]=l;
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    printf("\n");
    }

    return 0;
}