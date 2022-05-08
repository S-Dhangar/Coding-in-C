#include<stdio.h>
int main(){
    int row,a=0,b,c=0,d;
    printf("enter the size of the pattens in line ");
    scanf("%d",&row);
for(int i=row;i>0;i--){
      a=i;
      b=0;
      while(b!=a){
          printf("* ");
          b++;
      }

      d=0;
      while(d!=c){
          printf("  ");
          d++;
      }
            c=c+2;
      b=0;
      while(b!=a){
          printf("* ");
          b++;
      }
    printf("\n");
    }



      a=0;
for(int i=row;i>0;i--){
      a=a+1;
      b=0;
      while(b!=a){
          printf("* ");
          b++;
      }
      c=(i-1)*2;
      d=0;
      while(d!=c){
          printf("  ");
          d++;
      }
 b=0;
      while(b!=a){
          printf("* ");
          b++;
      }
    printf("\n");
    }
        return 0;
}