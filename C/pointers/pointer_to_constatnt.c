#include<stdio.h>
int main(){
    int num=10,no=20;
    const int* ptr=&no;;
   
  ptr=&num;
    printf("%u",ptr);
    return 0;
}