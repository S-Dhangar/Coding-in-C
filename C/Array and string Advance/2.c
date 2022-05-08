#include<stdio.h>
int main()
{
    void fun();
    fun();
    printf("\n");
    return 0;
}
void fun()
{
    char c;
    if((c = getchar())!= '\n')
        fun();
    printf("%c", c);
}
