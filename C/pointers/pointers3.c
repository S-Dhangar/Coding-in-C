#include<stdio.h>
int main(){
    int num=10;
    void *ptr=&num;
    printf("%d",*(int*)ptr);
   
    
    return 0;
}