#include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
         int k;
         cin>>k;
         vector<int> arr;
         arr[0]=5;
         arr[1]=4;
         arr[2]=3;
         arr[3]=2;
         arr[4]=1;
         
         vector<int> arr2;
	// Write your code here.
	sort(arr.begin(),arr.end());
	arr2[0]=arr[4];
	arr2[1]=arr[0];
        cout<<arr2[0]<<" "<<arr2[1];
         return 0;
 }