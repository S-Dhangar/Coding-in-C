#include<stdio.h>
int main(){
    int row,b=0,d,a,c=0,j=0;
    printf("enter the size of pattern in lines ");
    scanf("%d",&row);
    
    for(int i=row;i>0;i--){
        printf("      ");
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
    
       b=0;
for(int i=row+3;i>0;i--){
    printf("   ");
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

       b=0;
       int k=(row+4)/2;
for(int i=row+4;i>0;i--){
    
    printf("  ");
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
    while(row!=0){
        j=0;
  while(j!=row){
      printf("      ");
       
  printf("* *");
   printf("\n");
      j++;
  } 
  

  row--;
    }
    return 0;
}