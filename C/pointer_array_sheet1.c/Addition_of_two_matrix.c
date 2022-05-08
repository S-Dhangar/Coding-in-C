#include<stdio.h>
int main(){
   static int a[3][3]={9,8,7,
    6,5,4,
    3,2,1};
     static int b[3][3]={9,8,7,
    6,5,4,
    3,2,1};
   
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
    printf("%d ",*(*(a+i)+j) + *(*(a+i)+j) );
        }
        printf("\n");
    }
    return 0;
}