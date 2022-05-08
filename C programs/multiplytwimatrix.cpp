#include<iostream>
using namespace std;

int main(){
     int n,m,r,c;
    cout<<"enter the values of rows and columns of 1st matrix"<<endl;
     cin>>n>>m;
     cout<<"enter the elements of the matrix "<<endl;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 
    

     cout<<"enter the values of rows and column of 2nd matrix"<<endl;
     cin>>r>>c;
     cout<<"enter the elements of the matrix "<<endl;
    int b[r][c],d[r][c];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
 for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
 } 
  
   for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            d[i][j]=0;
            for(int k=0;k<c;k++){
               d[i][j]+=a[i][k]*b[k][j];
            }
        }
 }
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
 } 
    
    return 0;
}