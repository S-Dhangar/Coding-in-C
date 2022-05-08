#include<stdio.h>
int main(){
    int n;
    printf("enter the number of line syou want to print");
    scanf("%d",&n);
    for(int i=65;i<=91;i++){
        for(int j;j<i;j++){
            printf("%c ",j);
            i++;
        }
        printf("\n");
    }
    return 0;
}