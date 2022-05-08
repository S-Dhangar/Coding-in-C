#include <stdio.h>
#include<stdlib.h>
int main()
{
    char str[20];
    int i;
    for (i = 0; i<2; i++)
    {
        scanf("%s", str);
        printf("%s\n", str);
 
        // used to clear the buffer
        // and accept the next string
        fflush(stdin);
        printf("%s",str);
    }
    return 0;
}