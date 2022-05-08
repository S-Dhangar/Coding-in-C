#include<stdio.h>
int main(){
    char ch='A';
    int th=65;
    int n;
    printf("enter the number of line");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int  i=65;i<=th;i++){
            printf("%c",th);
        }
         printf("\n");
         th++;
    }
    int t=97;
   printf("%c",t);
    return 0;
}