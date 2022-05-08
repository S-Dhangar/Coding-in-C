#include<stdio.h>
int main(){
    int row,colum,a;
    printf("enter the value of rows and columns ");
    scanf("%d%d",&row,&colum);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            if(i==1){
    printf("* ");}
        
    else if( i==row){
        printf("* ");
     }
            
           else{
          
            printf("*");
            a=0;
            while(a!=colum-2){
                printf("  ");
                a++;
            }
            printf(" *");
            break;
        }
        }
    printf("\n");
    }
    return 0;
}