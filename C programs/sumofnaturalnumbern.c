#include<stdio.h>
int main()
{ 
int i,n,sum=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{   
 sum=sum+i;
}
printf("sum of natural number from 1 to %d is %d",n,sum);
return 0;
}



