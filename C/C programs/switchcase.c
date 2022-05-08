#include<stdio.h>
int main()
{
    int num;
    printf("enter the number of student");
    scanf("%d",&num);
    switch(num)
    {   
        case 50:
        printf("D grade");
        break;
    case 60:
    
        printf("C grade");
        break;
        case 70:
        printf("B grade");
        break;
        case 80:
        printf("A grade");
        break;
    default:
        printf("E grade");
        break;
        }
    return 0;
}
