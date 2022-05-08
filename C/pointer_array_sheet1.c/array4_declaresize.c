#include<stdio.h>
int main(){
    int i,j=10,size;
    int arr[40];
    if(j==10){
        size=20;
    }
    else{
        size=40;
    }
    for(i=0;i<size;i++){
    arr[i]=100;
    }

    for(i=0;i<size;i++){
  printf("%d ",arr[i]);
    }
    return 0;
}