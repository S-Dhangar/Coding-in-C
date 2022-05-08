#include<stdio.h>
int search(int arr[],int num,int low,int high){
if(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==num){
        return mid;
    }
    if(num<arr[mid]){
        high=mid-1;
        return search(arr,num,low,high);
    }
    if(num>arr[mid]){
        low=mid+1;
        return search(arr,num,low,high);
    }
  
}
  return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
   
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  int num;
  scanf("%d",&num);
   
  int pos=search(arr,num,0,n);
    printf("%d",pos);
   return 0;

}