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
    printf("enter the position at which you want to delete the elemnet in the array");
    scanf("%d",&p);
    for(int i=0;i<n;i++){
    if(i==p){
      i=i+1;
    }
    printf("%d ",a[i]);
    }
    

    return 0;
}