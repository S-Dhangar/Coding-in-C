#include<stdio.h>
int main(){
    static int a[]={10,20,30,40,50};
    for(int i=0;i<5;i++){
    printf("%d ",*a);
       a++;
    }
    return 0;
}