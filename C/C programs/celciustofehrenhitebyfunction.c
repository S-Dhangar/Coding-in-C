#include<stdio.h>
float fahrenhite(int c);
int main(){
    int c;
    printf("enter the value of celcius");
    scanf("%d",&c);
    printf("%d degree celcius is = %f degree fahrenhite",c,fahrenhite(c));
    return 0;
}
float fahrenhite(int c){
    
    fahrenhite = (float)(c*1.8)+32;
    return fahrenhite; 
}