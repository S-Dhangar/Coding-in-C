#include<stdio.h>
int main(){
    int n,j,l,sum,y=0;
    

   int t;

   scanf("%d",&t);
   while(t!=0){

    
   scanf("%d",&n);
    
    int a[n];
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

        sum=0;
    for(int i=1;i<=n;i++){
      
           if(i==n){
               break;
           }
 j=a[i];
            l = i;
    for(int k=i;k<=n;k++){
            
       if(a[k]<j){
            j=a[k];
           l=k;
       }
   }
     

      for(int m=1;m<=l;m++){
        for(int p=1;p<=l;p++){
            if(a[m]<a[p]){
                int temp=a[m];
                a[m]=a[p];
                a[p]=temp;
            }
        }
         

    }
          
    sum=sum+(l-i+1);
    
    }  
    y++;
    printf("case #%d: %d\n",y,sum);
    t--;
  
}

    
    return 0;
}