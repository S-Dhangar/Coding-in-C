#include<stdio.h>
int main(){
    int month;
    printf("enter the value of month ");
    scanf("%d",&month);
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
    printf("31 days");}
    else if(month==2){
         int y, r = 0;
    printf("enter the value of any year ");
    scanf("%d", &y);

    if (y % 100 == 0)
    {
        r = y / 100;
        if (r % 4 == 0)
        {
            printf("29 days ");
        }
        else
        {
            printf("28 days ");
        }
    }
    else if (y % 4 == 0)
    {
        printf("29 days ");
    }
    else
    {
        printf("28 days ");
    }
    }
    else if(month==4 || month==6 || month==9 || month==11){
        printf("30 days ");
    }
    return 0;
}