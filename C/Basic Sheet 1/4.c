#include<stdio.h>
int main(){
    int n;
    printf("enter the number of lines uou want to print in stars");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            printf("* ");

        }
        printf("\n");
        n--;
    }
    
    return 0;
}