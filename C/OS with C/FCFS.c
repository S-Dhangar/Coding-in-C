#include<stdio.h>
int main(){
    int p[10],num,ar[10],wt[10],avg,tat[10],cmpt[10],respt[10],sum=0;

    printf("enter the total number of processes ");
    scanf("%d",&num);
    printf("\nenter tyhe time durations of all the processes ");
    for(int i=0;i<num;i++){
        scanf("%d",&p[i]);
    }
    printf("\nenter the arrival time of each processes ");
    for(int i=0;i<num;i++){
        scanf("%d",&ar[i]);
    }
    printf("\n");
    printf("waiting time is ");
    wt[0]=ar[0];
    printf("%d ",wt[0]);
    for(int i=0;i<num-1;i++){
        sum=sum+p[i];
        wt[i+1]=sum-ar[i+1];
        printf("%d ",wt[i+1]);
    }  
    printf("\n");
   sum=0;
for(int i=0;i<num;i++){
        sum=sum+wt[i];
    } 
    avg=sum/num;
    printf("average time taken by each process is %d \n",avg);
    printf("turn around time are ");
    sum=0;
    for(int i=0;i<num;i++){
        sum=sum+p[i];
        tat[i]=sum-ar[i];
        printf("%d ",tat[i]);
    }sum=0;
    printf("\n");
    printf("completion time is ");
    for(int i=0;i<num;i++){
        sum=sum+p[i];
        cmpt[i]=sum;
        printf("%d ",cmpt[i]);
    }sum=0;
    printf("\n");
    printf("responsive time is ");
    printf("%d ",ar[0]);
    for(int i=1;i<num;i++){
        sum=sum+p[i-1];
        respt[i]=sum;
        printf("%d ",respt[i]);
    }
    return 0;
}