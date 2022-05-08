#include<stdio.h>
int main(){
    int row,a,b,c=0,d,j=0;
    printf("enter the size of pattern in lines ");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
       a=i;
       b=0;
       while(b!=a){
           b++;
           printf("%d ",b);
           
       }
       
       printf("\n");
          }
    
    return 0;
}