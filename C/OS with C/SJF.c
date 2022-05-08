#include<stdio.h>
int main(){
    int n;
    printf("enter the number of processes");
    scanf("%d",&n);
    int pid[n],at[n],bt[n],ct[n],ta[n],wt[n],f[n];
    int st=0,tot=0;
    float avgwt=0,avgta=0;
    
    
    for(int i=0;i<n;i++){
            printf("enter the arriavl time of proces %d ",i+1);
            scanf("%d",&at[i]);
            printf("\n");
            printf("enter the burst time opf process %d ",i+1);
            scanf("%d",&bt[i]);
            printf("\n");
            pid[i]=i+1;
            f[i]=0;
    }
    
    while(1){
        int c=n,min=999;
        if(tot==n){
            break;
        }
        for(int i=0;i<n;i++){
            if((at[i]<=st) && (f[i]==0) && (bt[i]<min)){
                min=bt[i];
                c=i;
            }
        }
        if(c==n){
            st++;
        }
        else{
            ct[c]=st+bt[c];
            st+=bt[c];
            ta[c]=ct[c]-at[c];
            wt[c]=ta[c]-bt[c];
            f[c]=1;
            tot++;
        }
    
    for(int i=0;i<n;i++){
        avgwt+=wt[i];
        avgta+=ta[i];
        printf("%d %d %d %d %d %d",pid[i],at[i],bt[i],ct[i],ta[i],wt[i]);
    }
    printf("average tat is %d \n",avgta);
    printf("average wt is %d \n",avgwt);
    }
    return 0;
}