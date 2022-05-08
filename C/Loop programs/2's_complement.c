#include<stdio.h>

int main(){
    int i=0;
   char str[10],ones[10],twos[10];
   gets(str);
   while(str[i]!='\0'){
       if(str[i]=='0'){
           ones[i]='1';
       }
       else if(str[i]=='1'){
           ones[i]='0';
       }
       i++;
   }
   printf("%s",ones);
   int carry=1;
   int j;
   for(j=i-1;j>=0;j--){
       
       if(ones[j]=='1' && carry==1){
           twos[j]='0';
          
       }
       else if(ones[j]=='0' && carry==1){
           twos[j]='1';
           carry=0;
       }
       else{
           twos[j]=ones[j];
           
       }
       
       
   }
   printf("\n%s",twos);
return 0;

}