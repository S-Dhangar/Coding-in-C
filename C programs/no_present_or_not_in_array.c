#include<stdio.h>
int main(){
    int A[]={300,600,1000,100,600,2000,900,600,1500};
    int num,n=9;
    int position=0;
    int time=0;
    printf("enter any number to check it is present or not in the list = ");
    scanf("%d",&num);
    
  for(int i=0;i<=n;i++){
    
     if(num==A[i]) 
     {   
       printf("%d is present in the list ",num);
        break;
     }position++;
  } printf("at %d position",position+1);
}
