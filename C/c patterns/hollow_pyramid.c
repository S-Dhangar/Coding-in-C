#include<stdio.h>
int main(){
    int row,a,b,c=0,d;
    printf("entrer the size of pyramid in lines ");
    scanf("%d",&row);
    for(int i=row;i>0;i--){
        a=i-1;
        b=0;
        while(b!=a){

            printf(" ");
            b++;
        }
        
        c=c+1;
        d=0;
            if(i==row){
         
        while(d!=c){

            printf("* ");
            d++;
            }
            }
           else if(i==1){
                while(d!=row){

            printf("* ");
            d++;
            }
            }
           
            else{
                c=c+1;
                printf("* ");
                while(d!=c-3){
                    printf(" ");
                    d++;
                }
                
                printf("*");
                
            }
        
        printf("\n");
    }   



    return 0;
}