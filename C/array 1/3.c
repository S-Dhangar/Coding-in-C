#include <stdio.h>

int main(void) {
	// your code goes here
	static float a[5]={1.2,1.5,1.6,7.0,9.0};
	
	for(int i=0;i<=5;i++){
	    printf(" %f\n",a[i]);
	}
	return 0;
}

