#include<stdio.h>
int main(){
    int n;
    printf("enter the number of lines you want to print");
    scanf("%d",&n);
       int s=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf("%d ",j);
        }
        printf("\n");
        s--;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf("%d ",j);
        }
        printf("\n");
        s++;
    }
    return 0;
}