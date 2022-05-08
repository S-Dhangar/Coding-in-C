#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodevening();

int main(){
    goodmorning();
}
void goodmorning(){
    printf("good morning");
    goodafternoon();
}
void goodevening()
{
    printf("goood evening");
}
void goodafternoon(){
    printf("good afternoon");
goodevening();
}
