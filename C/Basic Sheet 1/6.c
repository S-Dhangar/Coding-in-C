#include<stdio.h>
int main(){
    int n;
    int num;
    int a=1;
    printf("enter the number of linmes you want ot print");
    scanf("%d",&n);
    int t=n;
    for(int i=1;i<=n;i++){
            for(int i=1;i<t;i++){
                printf(" ");
            }
            t--;
        for(int j=1;j<=a;j++){
           
            num=j%2;
            if(num>0 && j<=a){
                printf("*");
            }
            else{
                printf("A");
            }
        }
        printf("\n");
        a=2+a;
    }


    
    return 0;
}