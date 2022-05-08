#include<stdio.h>
#include<math.h>
float factorial(float num){
    float sum=1;
      while(num>1){
          sum=sum*num;
          num--;
      }
     return sum;
}
int main(){
    float n,x,power=1,term,f,val,total=0;
    scanf("%f%f",&x,&n);
    x=x*0.017460;
    printf("%f\n",x);
     for(int i=1;i<=n;i++){
        
            val = pow(x,power);
    f=factorial(power);
    term=val/f;
    
    power=power+2;
    if(i%2==0){
             term=(-1)*term;
         }
     
   total=total+term;
     }
    printf("%f",total);
    
    return 0;
}