#include<stdio.h>
int main()
{
    char str[] = "Nagpur";
    str[0]='K';
    printf("%s, ", str);
    str='Kanpur';
    printf("%s", str);
    return 0;
}
