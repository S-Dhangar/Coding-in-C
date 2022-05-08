#include<stdio.h>
int main(){
    int n;
     scanf("%d",&n);
    int a[n];
   
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=n/2;
    for(int i=0;i<k;i++){
    int j=a[i];
    *(a+i)=a[n-i-1];
    *(a+(n-i-1))=j;
            
        
    }
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    return 0;
}