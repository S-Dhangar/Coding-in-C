#include<stdio.h>
int main(){
    unsigned char ch=255;
    for(ch=65;ch<=255;ch++){
          printf("%d\n",ch);
    }
  //this will run infinite because of ++ operator will make 255 to 0 at last
    return 0;
}