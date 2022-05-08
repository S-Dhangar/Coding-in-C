#include<stdio.h>
int main(){
    int arr1[10],arr2[10],arr[20];
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
       

    }
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int j=0,k=0;
   for(int i=0;i<n1;i++){
      
       while(arr1[i]>=arr2[k] && k<n2){
           arr[j]=arr2[k];
           j++;
           k++;
       }
       arr[j]=arr1[i];
       j++;

   }
     while(k<n2){
        arr[j]=arr2[k];
        j++;
        k++;
     }
for(int i=0;i<n1+n2;i++){
    printf("%d ",arr[i]);
}
}