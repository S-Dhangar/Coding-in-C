#include<stdio.h>
int main(){
    static int b[]={10,20,30,40,50};
    int i,*k;
    k=&b[4]-4;
    
    for(i=0;i<=4;i++){
    printf("%d ",*k);
    k++;
    }
    return 0;
}