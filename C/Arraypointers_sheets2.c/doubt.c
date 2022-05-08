#include<stdio.h>
int main(){
    int a[]={13,12,78,100,101};
    int *j;
    j=a;
    j=j*2;
    printf("%d",j);
    return 0;
}
//Here there is a twist that we cannot perform opreration with a pointer and a interger 
// herer j and a are pointer and integer so that an error will be occur that we cannot 
// multiply an integer and pointer