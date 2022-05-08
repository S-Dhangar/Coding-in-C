#include<stdio.h>
int main(){
    char a[6]="Hello";
    
    char *ptr=a;
    char b[6];
    char c[12];
    printf("%d\n",sizeof(a));
    for(int i=1;i<=sizeof(a);i++){
        printf("%c ",*ptr);
       ptr++;
    
    }
    ptr=a;
   for(int i=1;i<=6;i++){
       b[i]=*ptr;
       ptr++;
   }
      printf("\n");
   for(int i=1;i<=6;i++){
      printf("%c ",b[i]);
      ptr++;
   }
   
     printf("%s",a); 
      
   
    return 0;
}