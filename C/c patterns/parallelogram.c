#include<stdio.h>
int main(){
    int row,a=0,b,c,d,stars;
    printf("enter the size of pattern in rows ");
    scanf("%d",&row);
    printf("enter the number of stars you want to print in each of the rows");
    scanf("%d",&stars);
    for(int i=1;i<=row;i++){
        a=a+1;
        b=0;
        while(b!=a){
            printf(" ");
            b++;
        }
        d=0;
            printf("*");
        while(d!=stars-2){
            if(i==1 || i==row){
                printf(" *");
                d++;
            }
            else{
            printf("  ");

            d++;
            }
        }
        printf(" *");
        printf("\n");
    }
    
    return 0;
}