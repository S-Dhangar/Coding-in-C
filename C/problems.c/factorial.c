#include<stdio.h>
#include<math.h>

int factorial(int num){
    int sum=1;
      while(num>1){
          sum=sum*num;
          num--;
      }
     return sum;
}
int main(){
    int num,f;
    scanf("%d",&num);
    f=factorial(num);
    printf("%d",f);
}