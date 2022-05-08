#include<stdio.h>

int main(){
    
    int a[5]={2,4,6,8,10};
    int i,*b;
    
    for(b=a+4,i=0;i<=5;i<=4,i++){
        
        printf("%d\n",b[-i]);
    }
}
