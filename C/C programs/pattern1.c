#include<stdio.h>
int main(){
    int i,j;
    for(i='a';i<='d';i++){
        for(j='a';j<=i;j++){
            printf("   %c",j);
        }
        printf("\n");
    }
    
    return 0;
}