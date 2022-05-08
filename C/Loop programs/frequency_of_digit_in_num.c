#include<stdio.h>
int main(){
    int rem,arr[10]={0,0,0,0,0,0,0,0,0,0};
    int num;
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        num=num/10;
        if(rem==0){
            arr[0]==arr[0]+1;
        }
        else if(rem==1){
            arr[1]=arr[1]+1;

        }
        else if(rem==2){
            arr[2]=arr[2]+1;

        }
        else if(rem==3){
            arr[3]=arr[3]+1;

        }
        else if(rem==4){
            arr[4]=arr[4]+1;

        }
        else if(rem==5){
            arr[5]=arr[5]+1;

        }
        else if(rem==6){
            arr[6]=arr[6]+1;

        }
        else if(rem==7){
            arr[7]=arr[7]+1;

        }
        else if(rem==8){
            arr[8]=arr[8]+1;

        }
        else if(rem==9){
            arr[9]=arr[9]+1;

        }

    }

    for(int i=0;i<10;i++){
        if(arr[i]>0){
            printf("frequency of %d is %d\n",i,arr[i]);
        }
    }




}