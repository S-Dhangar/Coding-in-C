#include<stdio.h>
void array(int *A,int n){
    for(int i=0;i<n;i++){
        printf(" %d",A[i]);
    }
}
void sort(int *A,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-1-i);j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }printf("\n array after sorting");
}
int main(){
    int n=7;
    int A[]={5,8,3,2,4,9,1};
    array(A,n);
    sort(A,n);
    array(A,n);
}