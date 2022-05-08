#include<stdio.h>


int main(){
     int x=0,y=0;
     char c;
     while(c!=27)  // 27 is the ascii value for escape key
    c=getch();
    if(c==72){
        y=y-1;
    }
    else if(c==80){
        y=y+1;
    }
    else if(c==75){
        x=x-1;
    }
    else if(c==77){
        x=x+1;
    }
    else if(c==27){
        return 0;
    }

    gotoxy(x,y);    
}
    
   
    return 0;
}