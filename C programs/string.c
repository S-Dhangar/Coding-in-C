#include<stdio.h>


int main(){
    char s[10];
    char *ptr=s;
     int cc=0;
     char ch='a';
     printf("enter the string");
     scanf("%s",s);
     while(*ptr!='\0'){
         if(*ptr==ch)
         cc++;
     }ptr++;
     printf("no of cvharacters are==%d",cc);
    
      return 0;
}