#include<stdio.h>
void encript(char *s,char *ptr){

    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;

}        printf("%s",s);
    
}
 int main()
{
    char s[]="jack jill is very dangerous and he is a criminal also i saw a gun in his pocketbc";
    char *ptr=s;
    encript(s,ptr);
    return 0;
}
#include<stdio.h>
void decript(char *s,char *ptr){

    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;

}        printf("%s",s);
    
}
 int main()
{
    char s[]="kbdl!kjmm!jt!wfsz!ebohfspvt!boe!if!jt!b!dsjnjobm!bmtp!j!tbx!b!hvo!jo!ijt!qpdlfucd";
    char *ptr=s;
    decript(s,ptr);
    return 0;
}
