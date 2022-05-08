#include<stdio.h>
int main(){
    int a1[10],a2[10];
    for(int i=0;i<10;i++){
        a1[i]='A'+i;
        a2[i]='a'+i;
         printf("%d\n",a2[i]-a1[i]);
    }
   
    return 0;
}