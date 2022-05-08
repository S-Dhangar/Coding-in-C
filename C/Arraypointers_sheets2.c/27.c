#include<stdio.h>
int main(){
    int main(){
      static int a[]={0,1,2,3,4};
    static int *p[]={a,a+1,a+2,a+3,a+4};
    
    int **ptr=p;
    ptr++;
    
    cout<<ptr-p<<*ptr-a<<**ptr<<endl;
    *ptr++;
    cout<<ptr-p<<*ptr-a<<**ptr<<endl;
    *++ptr;

  cout<<ptr-p<<*ptr-a<<**ptr<<endl;
    ++*ptr;
    cout<<ptr-p<<*ptr-a<<**ptr;
    return 0;

}