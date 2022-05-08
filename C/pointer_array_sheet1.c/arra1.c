#include<stdio.h>

int b[5];
int main(){
    int sub[5]={10,20,30,40,50};
    
    int i;
    for(i=0;i<=4;i++){
        if(i<=4){
            sub[i]=i*i;
            printf("%d\n",sub[i],b[i]);
        }
    }
 
    return 0;
}
