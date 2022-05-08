#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array ");
    scanf("%d",&n);
    int a[n],count;
    printf("enter the elements of the array ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
        printf("%d comes %d times\n",a[i],count);
    }
    
    return 0;
}