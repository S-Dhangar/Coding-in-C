#include <algorithm>
#include <stdio.h>
using namespace std;
  int search(int arr[],int num,int n){
       int low=0,high=n-1;
    int mid;
     while(low<=high){
          mid=(low+high)/2;
        if(num==arr[mid]){
            return mid+1;
            
        }
         if(num<arr[mid]){
             high=mid-1;
         }
        else if(num>arr[mid]){
             low=mid+1;
         }
        
        
     }
return -1;
  }
int main()
{
    // Get the array
    int arr[] = {1,45,54,71,76,120,200,300,400};
  
    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
  
     int num;
     cin>>num;
   int no= search(arr,num,n);
      cout<<no; 
    return 0;
}