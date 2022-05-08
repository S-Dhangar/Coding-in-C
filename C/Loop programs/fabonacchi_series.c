#include<stdio.h>
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }


}
int main(){
    int n,a=0,b=1,c=0;
    scanf("%d",&n);
  //  while(c<n){
   //      c=a+b;
   //      a=b;
   //      b=c;
   //      printf("%d ",c);
   // }
   for(int i=0;i<=n;i++){
    printf("%d ",fib(i));
   }
    return 0;
}