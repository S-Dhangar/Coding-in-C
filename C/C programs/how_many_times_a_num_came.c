#include<stdio.h>
int main(){
    int A[]={300,600,1000,100,600,300,300,2000,900,600,1500,1800};
    int num,n=10;
    int position=0;
    int time=0;
    printf("enter any number to check how many times it came in the list and what positions = ");
    scanf("%d",&num);
    for(int i=0;i<=n;i++){
    
     if(num==A[i]) 
     {   
       
        time++;
        printf("%dth ",i+1);
     }
}printf("positions came %d times",time);}