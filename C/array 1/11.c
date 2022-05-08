#include<stdio.h>

int main(){
    
    static int a[5]={2,4,6,8,10};
    int i,b=5;
    for(i=0;i<5;i++){
        f(a,&b);
        printf("%d %d\n",a[i],b);
    }
}

void f(x,y)
int *x,*y;
{
    *x=*(y)+=2;
    
    x++;

}