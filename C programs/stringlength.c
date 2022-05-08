
    #include<stdio.h>
    
    void length(char *str,char *ptr)
    
    {
         int l=0;
         int line=0;
         
         while(*ptr!='*'){
           
           ptr++;
           l++;
           if(*ptr=='.'){
             line++;
           }  
         }           printf("length of string is ==%d",l);
           printf("\n number of lines are %d",line);
        
    }int main() {
      char str[500]; 
      printf("enter your bio==%s",str);
      gets(str);
    char *ptr=str;
     length(str,ptr);
    
   return 0; }