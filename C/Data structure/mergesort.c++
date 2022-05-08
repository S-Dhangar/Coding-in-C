#include<iostream>

using namespace std;                           
 void merge(int a[],int low,int mid,int high);
void printaray(int a[],int n){
     for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
     }
}
void mergesort(int a[],int low,int high){
    int mid;
    if(low<high){
         mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[],int low,int mid,int high){
        int i=low,j=mid+1,k=low;
     int b[high];
     while(i<=mid && j<=high){
         if(a[i]<=a[j]){
             b[k]=a[i];
             i++;
             
         }
         else{
             b[k]=a[j];
             j++;
             
         }
         k++;
         
     }
     
       
     while(i<=mid){
         
         b[k]=a[i];
         i++;
        k++;
     }
       
         while(j<=high){
             b[k]=a[j];
             j++;
             k++;
         }
        
    for(int i=low;i<=high;i++){
        a[i]=b[i];
        
    }
}

int main(){
    int n ;
     cout<<"enter the size of the array ";
     cin>>n;
    int a[n];
     for(int i=1;i<=n;i++){
         cin>>a[i];

     }

     mergesort(a,1,n);
     printaray(a,n);
     

    return 0;
}