#include<stdio.h>
int main(){
    int n;
    printf("enter the nimber of lines you want to print");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        
     for(int j=1;j<=a;j++){
         printf("%d ",j);
     }
      printf("\n");
      a++;
    }
   
    return 0;
}