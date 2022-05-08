#include <stdio.h>
int main(){
 long int num,first,last,num1=0,i=1,rem;
	scanf("%d",&num);
	first=num%10;
	num=num/10;
	while(num>9){
	    rem=num%10;
	    num=num/10;
	    num1=i*rem+num1;
	    i=i*10;
	}
	last=num%10;
	i=i*first;
	num1=num1+i;
	num1=num1*10+last;
	printf("%d",num1);
	return 0;
}
