#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the values of rows and columns "<<endl;

    cin>>n>>m;
    cout<<"enter the value to find ";
    int num;
    cin>>num;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   int  r=0,c=m-1;
    while(c>=0  && r<n){
        if(a[r][c]==num){
            cout<<"value found at "<<r+1<<"row and "<<c+1<<"colum";
            return 0;
        }
        if(a[r][c]>num){
            c--;
        }
        else{
            r++;
        }
    }
    return 0;
}