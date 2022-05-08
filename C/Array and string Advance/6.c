
#include<stdio.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    
        
        
    if(str1 == str2)
        printf("Equal\n");
    else
        printf("Unequal %d\n",strcmp(str1,str2));
    return 0;
}
