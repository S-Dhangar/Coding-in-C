#include <stdio.h>

int main() {
	// your code goes here
	int a=5;
	static int sub[5]={10,20,30,40,50};
    int i;
    for ( i = 0; i < 5; i++)
    {
       if(i<=4){
           sub[i]=i*i;
           a=1;
           printf("%d\n",sub[i]);
       }
    }
    printf("\n %d",a);
	return 0;
}

