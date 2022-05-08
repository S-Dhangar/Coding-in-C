#include<stdio.h>
int main(){
    int n;
    int i;
    int count=0;
     int arr[n];
     printf("enter the size of array = ");
     scanf("%d",&n);
     printf("enter the elements of array\n");
     for(i=0;i<n;i++)
     {
     scanf("%d",&arr[i]);
     }
     printf("input array is ");
     for(i=0;i<n;i++){
     printf("%d ",arr[i]);
}
printf("\noutput array is ");
for(i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
     arr[i]=arr[i]*2;
     arr[i+1]=0;
    }
}
for(i=0;i<n;i++){
    if(arr[i]!=0){
        arr[count++]=arr[i];
        }
}
    while(count<n){
        arr[count++]=0;
}

    
    for(i=0;i<n;i++){
    printf("%d",arr[i]);
    }

}