#include<stdio.h>
int main(){
    int arr[10];
    char arr1[10];
    scanf("%s",arr1);
    int n=sizeof(arr1)/sizeof(arr1[0]);
    for (int i = 0; i <5; i++)
    {
        arr[i]=arr1[i];
        
    }
    

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d ",arr1[i]);
    }
    
}