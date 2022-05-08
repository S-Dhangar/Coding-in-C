#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter the number of line you want to print in the pyramid");
    scanf("%d",&n);
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
        n=n-2;
        a=2+a;
    }
    printf("\n");
    n=10;
    a=1;
    printf("enter the number of line you want to print in the pyramid");
    scanf("%d",&n);
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
        a--;
    }
    return 0;
}