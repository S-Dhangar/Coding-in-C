#include<stdio.h>
int main(){
    int n;
    printf("enter the number of lines you want to print");
    scanf("%d",&n);
    int s=n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
          printf("1");
        }
        for(int i=1;i<=a;i++){
            printf("%d",a);
        }
        printf("\n");
        a++;
        s--;
    }
    return 0;
}