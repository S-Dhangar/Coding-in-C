#include<stdio.h>
void array(int *A,int n){
    for(int i=0;i<=n-1;i++){
    printf(" %d",A[i]);}printf("\n");
}
void sort(int *A,int n){
    int key,i,j;
      
     for(i=1;i<=n-1;i++){
        key=A[i];
     j=i-1;
     while(j>=0 && A[j]>key){
     A[j+1]=A[j];
     
     j--;

     }A[j+1]=key;
}}
int main(){
    int A[]={45,23,98,67,57,54,32,12,17};
    int n=9;
    array(A,n);
    sort(A,n);
    array(A,n);
    
}