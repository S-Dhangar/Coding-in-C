#include<stdio.h>
int main(){
    int row,b=0,d,a,c=0;
    printf("enter the size of pattern in lines ");
    scanf("%d",&row);
    for(int i=row;i>0;i--){
         c=i-1;
         a=0;
        while(a!=c){
            printf(" ");
            a++;
        }
         b=b+1;
         d=0;
         while(d!=b){
             printf(" *");
             d++;
         }
        printf("\n");
    }
for(int i=row;i>0;i--){
       printf(" ");
         b=i-1;
         d=0;
         while(d!=b){
             printf(" *");
             d++;
         }
        printf("\n");

         c=c+1;
         a=0;   
        while(a!=c){
            printf(" ");
            a++;
        }
      
    }
    return 0;
}