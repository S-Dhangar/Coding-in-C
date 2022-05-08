#include <algorithm>
#include <iostream>
using namespace std;
  
int main()
{
    // Get the array
    int arr[10],arr1[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int i=0,k=0,j=0;
    int arr2[n+n];
    while(i<n){
        while(arr[i]>arr1[j] && j<n){
            arr2[k]=arr1[j];
            j++;
            k++;
        }
        arr2[k]=arr[i];
        k++;
        i++;
    }
    while(j<n){
        arr2[k]=arr1[j];
        j++;
        k++;
    }
   for (int i = 0; i <(n+n); i++)
   {
    cout<<arr2[i]<<" ";

































































    
   }
   int median;
   median=(2*n)/2;
cout<<endl<<arr2[median];


    return 0;
}