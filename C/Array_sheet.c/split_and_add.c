#include<stdio.h>
int main(){
     int n;
    printf("enter the size of the array ");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    printf("enter the elements of the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    int s,j=0,d[n];
    printf("entyer the position from which you want to split ");
    scanf("%d",&s);

 for(int i=0;i<n;i++){
     
    c[i]=a[i+s];
  
    }
         for(int i=0;i<s;i++){
      c[s+i] = a[i];
     }
printf("after split and add array is ");
    for(int i=0;i<n;i++){
        printf("%d ",c[i]);

    } 
    return 0;
}