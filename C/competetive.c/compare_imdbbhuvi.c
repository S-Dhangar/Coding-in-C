#include<stdio.h>
int main(){
    int t,x,n,l;
   
    scanf("%d",&t);
    while(t!=0){

        scanf("%d",&n);
       
        scanf("%d",&x);
        int s[n],d[n];
        for(int i=1;i<=n;i++)
        {
       
        scanf("%d%d",&s[i],&d[i]);
        
        }
        
         l=d[1];
        for(int i=1;i<=n;i++){
            if(l<d[i] && s[i]<=x){
            l=d[i];
            }
            
        }
        printf("%d\n",l);
        t--;
    }
    
    return 0;
}