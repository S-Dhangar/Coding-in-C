#include<stdio.h>
int main()
   {
    int year;
    printf("enter any year here=\n");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        
            printf("%d is leap year",year);
        else
            printf("is not a leap year");
        }
        else{
    if(year%4==0)
    
    printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);}
    
    return 0;
}