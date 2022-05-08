#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array ");
    scanf("%d",&n);
    int a[n],p[n],q[n];
    printf("enter the elemnts of the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array is ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }int j=0,k=0;;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            p[j]=a[i];
            j++;
        }
        else{
            q[k]=a[i];
            k++;
        }
    }   printf("\n even numbers arraty is ");
        for(int i=0;i<j;i++){
        printf("%d ",p[i]);
       
    }  
    printf("\nodd numbers array is ");
      for(int i=0;i<k;i++){
        printf("%d ",q[i]);
    }
    return 0;
}