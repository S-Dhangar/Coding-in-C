#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=0,second_largest=0;
    for(int j=0;j<n;j++){
        if(arr[j]>largest){
             second_largest=largest;
            largest=arr[j];
        }
        
           
        
    }
    
    printf("largest %d second largest %d",largest,second_largest);
    return 0;
}