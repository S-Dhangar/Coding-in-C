#include<stdio.h>
int main(){
    int n=11;
    int a[]={55,22,11,33,98,78,56,77,88,71,101};
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
         }
    }
    for(int i=0;i<=n-1;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}