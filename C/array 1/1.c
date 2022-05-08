#include <stdio.h>

int main(void) {
	// your code goes here
	int a[5];
	static int b[5];
	for(int i=0;i<5;i++){
	    printf("%d %d %d\n",i,a[i],b[i]);
	}
	return 0;
}

