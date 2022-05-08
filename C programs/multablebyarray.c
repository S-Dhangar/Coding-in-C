#include<stdio.h>
int main(){
    int arr[10];
    int i,n;
    printf("entere the element of which yopu want to print multiple table");
    scanf("%d",&n);
    for(i=0;i<10;i++){
        arr[i]=n*(i+1);
        printf("\n%d",arr[i]);
    }

}