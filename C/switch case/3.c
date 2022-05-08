 #include<stdio.h>
int main(){
    int i;
    for(int j=1;j<5;j++){
        if(j==1){
            goto secret;
        }
    }
    for(i=1;i<5;i++){
        printf("you are shubham dhangar");
        secret:
        printf("it will run infinite");
    }
    return 0;
}
