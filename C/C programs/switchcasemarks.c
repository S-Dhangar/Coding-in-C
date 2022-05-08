#include<stdio.h>
int main()
{
    int physics,chemistry,maths;
    printf("enter the number of physics,chemistry and maths\n");
    scanf("%d%d%d",&physics,&chemistry,&maths);
    if(physics<33)
    {
        printf("fail in physics\n");}
        else{
            printf("pass in physics\n");
        }
if(chemistry>33)
    {    printf("pass in chemistry\n");
   }
   else
    {
        printf("fail in chemistry\n");
    }
    if(maths>33)
    {
        printf("pass in maths\n");
    }
    else
        {
            printf("fail in maths\n");
        }
return 0;
}