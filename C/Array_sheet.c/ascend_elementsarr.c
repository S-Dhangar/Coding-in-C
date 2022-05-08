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
        for(int j=0;j<n;j++){
            if(a[i]<a[j]){
                int k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }

    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}