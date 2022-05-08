#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter the number of line you want to print in the pyramid");
    scanf("%d",&n);
   int s=n;
    n=2*n;
    
    for (int i = 1; i <=n; i++)
    {
        for ( int i = n; i>1; i--)
        {
           printf(" ");
        }         
        for(int i=1;i<=a;i++){   
        printf("* ");
        
        }
        printf("\n");  
        n--;
        a++;
    }
   
   int t=s;
 for(int i=1;i<s;i++){
       for(int j=1;j<=a;j++){
           printf(" ");
       }
       for(int k=1;k<t;k++){
           printf("* ");
       }
       printf("\n");
       a++;
       t--;
 }
    return 0;
}