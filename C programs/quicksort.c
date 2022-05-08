#include<stdio.h>
void printarray(int A[],int n)
{
    for(int i=0;i<=n-1;i++){
        printf(" %d",A[i]);
    }printf("\n");
}
int partition(int A[],int low,int high){
    int pivot=A[low];
    int temp;
    int i=low+1;
    int j=high;
   do{ while( A[i]<=pivot){
    i++;}
    while(A[j]>pivot){
    j--;}
    if(i<j){
        temp=A[j];
        A[j]=A[i];
        A[i]=temp;
    }
    }while(i<j);
     temp=A[low];
     A[low]=A[j];
     A[j]=temp;
     return j;
}
void sort(int A[],int low,int high){
    int partitionindex;
    if(low<high){
    partitionindex=partition(A,low,high);
    sort(A,low,partitionindex-1);
    sort(A,partitionindex+1,high);
    }}
int main(){
    int n=10;
    int low,high;
    int A[]={45,34,87,67,56,90,12,32,23,81};
    printarray(A,n);
    sort(A,0,n-1);
    printarray(A,n);
}