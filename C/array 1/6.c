#include <stdio.h>

int main(void) {
	
	int arr[10],arr2[10],i;
	for (int i = 0; i <=9; i++)
	{
		arr[i]='A'+i;
		arr2[i]='a'+i;
		printf("%d ",arr2[i]-arr[i]);
	}
	
	
	return 0;
}

