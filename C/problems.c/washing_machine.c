#include<stdio.h>
int Time(int weight);
int main(){
    int T;
    int time,weight;
    scanf("%d",&weight);
   T = Time(weight);
    printf("%d min",T);
    return 0;
}
int Time(int weight){
    int t;
    if(weight>=0 && weight<=2000){
        t=25;
        return t; 
    }
    else if(weight>=2001 && weight<=4000){
        t=35;
        return t;
    }
    else if(weight>4000){
        t=45;
        return t;
    }
}