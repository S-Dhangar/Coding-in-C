#include<stdio.h>
int main(){
    int n,rem=0,i=10;
    static int num=0;
    printf("enter any number ");
    scanf("%d",&n);
    
    while(n!=0){
        rem=n%10;
 
    
        n=n/10;
        num=i*num+rem;
       
    }
  printf("%d\n",num);

    while(num!=0){
        rem=num%10;

        num=num/10;
        if(rem==0){
            printf("zero ");
        }
 if(rem==1){
            printf("one ");
        }
if(rem==2){
            printf("two ");
        }
        if(rem==3){
            printf("three ");
        }
if(rem==4){
            printf("four ");
        }

if(rem==5){
            printf("five ");
        }

if(rem==6){
            printf("six ");
        }
if(rem==7){
            printf("seven ");
        }
if(rem==8){
            printf("eight ");
        }
if(rem==9){
            printf("nine ");
        }

  }
        
      

    return 0;
}   