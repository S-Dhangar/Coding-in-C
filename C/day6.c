/*#include<stdio.h>
int main(){
    unsigned char ch;
    for(char ch=65;ch<255;ch++){
        printf("%d %c\n",ch,ch);
    }
    
    return 0;
}
#include<stdio.h>
int main(){
    unsigned int ch=0;
    for(ch=65;ch<=255;){
  printf("%d %c\n",ch);      //   output will be infinite
    }
  
    return 0;
}

#include<stdio.h>
int main(){
    short int i;
    for( i=0;i<42768;i++){
    printf("%d",i);//  it will be infinite because limit of short int in  4 byte compiler is 32767
    }
    return 0;
}

#include<stdio.h>
void std();
int i=0;
int main(){
    printf("%d\n",i);
    i++;
    std();
    printf("%d",i);    // global variable
    return 0;
}
void std(){
    i=100;
    printf("%d\n",i);
    i++;
}

#include<stdio.h>
int main(){
    register float x=3.14;
    register double y=3.4;
    printf("%f %lf",x,y);
    return 0;
}


#include<stdio.h>
int main(){
    extern int i;
    printf("%d",i);  // first ve have to show that i is g;lobal 
    return 0;
}
int i=5;

#include<stdio.h>
int main(){
    unsigned int i;
    for(i=0;i<=33000;i++)
    printf("%u ",i);   //   u for unsigned
    return 0;
}

#include<stdio.h>

int i;
int function(int i);
int function(i);
int main(){
    int j=5;
    for(;;){
        if(j=function(i)){
    printf("%d",j);
        }
        else{
            break;
        }
    }                         //   static int and for loop
    return 0;
}
int function(x){
    static int v=2;
    v--;
    return (v-x);
}

#include<stdio.h>


int main(){
    int j=5;
    for(;;){
        
    printf("%d",j);
        }
        
                   //   loop will be infinite
    return 0;
}

#include<stdio.h>

int main(){
    int y,s=2,t=5;
    y=fun(s+t);
    printf("%d %d %d",s,t,y);
    return 0;
}
int t=8;
int fun(int s){
    s++;
    t++;
    return (s+t);
}

#include<stdio.h>
int n=5;
void fun(register int n){
    int i;
    i=n;
    printf("%d",i);
};
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",n);
    return 0;
}

#include<stdio.h>
double d;
int main(){
    
    printf("%g",d);  // scientific notation
    return 0;
}


#include<stdio.h>

int main(){
double y;
    int y;
    printf("%d",y);// compiler will be confuse
    return 0;
}

#include<stdio.h>
int main(){
    static int x=3;
    if(--x){
        main();
        printf("%d\n",x);  //  output will be 0 0 ;  because of recursion
    }
    
    return 0;
}

#include<stdio.h>
int main(){
    const i=5;
    i=i++;
    printf("%d",i); //  constat variable can't be changae
    return 0;
}

#include<stdio.h>
int main(){
    int i=5;
    
    int i=6;    // we can't declare a variable more than one time in same block
    //  {
      //  int i;
        //{
         //   int i;  // right
        //}
    //}
    
    printf("%d",i);
    return 0;
}

#include<stdio.h>
int main(){
   extern int a;
    static char j='E';
    printf("%c %d",++j,++a);  /// extern require to declare outside the function
    
    return 0;
}


#include<stdio.h>
int main(){
    const int x=10;
    static int y=x;  //  static requires a variable which cannot be volatile means do not change
    // otherwise there is no mean to declarea a static variable 
    if(x==y)
        printf("equal");
    else if(x>y)
    printf("greater");
    else
    printf("less");
    
    return 0;
}

#include<stdio.h>
int main(){
    int fun(int x){
        static int v=2;
        v--;
        return (1-x);
    }
    int j;
    for(;;){
        if(j=fun(1))
            printf("j=%chin",j);  // this will print nothing
        else
            break;
        
    }
    return 0;
}
*/
#include<stdio.h>
int f(int n){
        static int r=0;
    if(n<=0)return 1;
    if(n>3){
        r=n;
        return f(n-2)+2;
    }
    return f(n-1)+r;   /// recursionm 
    
}
int main(){
   printf("%d",f(5));
}