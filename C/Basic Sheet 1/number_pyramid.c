#include<stdio.h>
int main(){
    int n;
    int a=1;
    int j=1;
    int b=1;
    printf("enter the number of lines you wnat to print");
    scanf("%d",&n);
    int p=n;
    for(int i=1;i<n;i++){
        for(int i=1;i<=p;i++){
            printf(" ");
        }
        p--;
        for(j=b;j<=a;j++){
            printf("%d ",j);
        }
         for(j=a-1;j>=b;j--){
            printf("%d ",j);
        }
        b++;
        a=a+2;
        printf("\n");
    }
    
    return 0;
}