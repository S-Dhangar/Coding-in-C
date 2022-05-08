#include<stdio.h>
int main(){
    int n;
    int a=1;
    printf("enter the number of lines you want to print");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j>1 && j%2==0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}