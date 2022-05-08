#include<stdio.h>
int main(){
    int row,a=0,b=0,c=0,d=0;
    printf("enter the size of the pyramid in lines ");
    scanf("%d",&row);
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