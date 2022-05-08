#include<stdio.h>
int main()
{
    float tax,income;
    printf("what is your income?\n");
    scanf("%f",&income);
    {if(income>=250000 && income<=500000)
    
        tax=0.05*(income-250000);

if(income>500000 && income<1000000)

    tax=0.10*(income-500000);

if(income>=1000000)

    tax=0.30*(income-1000000);
printf("your tax at the end of this month is %f",tax);
    }
    return 0;
}