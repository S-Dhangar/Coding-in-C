#include<stdio.h>
int sum(int *arr);
int main(){
    int arr[6]={1,2,3,4,5,6};
    int add=sum(arr);
    printf("%d",add);
    return 0;
}
int sum(int *a){
    int s=0;
    for(int i=0;i<6;i++){
        s=s+a[i];
    }
    return s;
}
