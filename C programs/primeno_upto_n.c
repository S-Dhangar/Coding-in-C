#include<stdio.h>
int main(){
    int i,n,m;
    printf("enter the value of intervals");
    scanf("%d%d",&m,&n);
    printf("prime numbers between these interval are \n");
     for(int j=m;j<=n;j++){
        for (  i=2; i <=j-1; i++) {
            if (j%i==0){
                break;}
        }
            if (i==j) {
                printf("%d\n",j);
            }
        }
     
    return 0;
    }






        