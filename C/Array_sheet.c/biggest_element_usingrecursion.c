#include<stdio.h>
int large(int *a,int *n,int largest);
int main(){
     int n,largest=0;
    printf("enter the size of the array ");
    scanf("%d",&n);

    int a[n];

    printf("enter the elements of the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
     
      largest = large(a,&n-1,largest);
       printf(" largest element is %d",largest);
       printf("n is %d ",n);
    return 0;
}
int large(int *a,int *n,int largest){
    if(*n==0){
        return largest;
    }
    else{
        if(*a>largest){
            largest=*a;
        }
        *n=*n-1;
       return large(++a,&n,largest);
    }
   
}