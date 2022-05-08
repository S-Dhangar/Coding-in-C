#include<stdio.h>
int main(){
   int row,n,m=0;
    printf("enter the size of pattern in lines ");
    scanf("%d",&row);
    printf("enter how many pyramids you want ");
    scanf("%d",&n);
       while(m!=n){  
            int b=0,d,a,c=0,g=0,n,t=0;
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

          c=2*(i-1);
          a=0;
        while(a!=c){
            printf(" ");
            a++;
        }  
         
         d=0;
         while(d!=b){
             printf(" *");
             d++;
         }
         
          
         
        printf("\n");
    }
  m++;
       }
    
    return 0;
}