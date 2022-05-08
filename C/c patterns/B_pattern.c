#include<stdio.h>
int main(){
    int row,a,b,c=0,d;
    printf("enter the size of the pattens in line ");
    scanf("%d",&row);
for(int i=row;i>0;i--){
     a=i;
        b=0;
        while(b!=a){
            printf("* ");
            b++;
        }
       printf("\n");
    } c=0;
 for(int i=row;i>0;i--){
 c=c+1;
        d=0;
        while(d!=c){
            printf("* ");
            d++;
        }

      a=i-1;
        b=0;
        printf(" ");
        while(b!=a){
            printf("  ");
            b++;
        }

            
               printf("\n");
    
 }

    return 0;
}