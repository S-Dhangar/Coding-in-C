// automatic

/*#include<stdio.h>

int main(){
    int a=2;
    printf("%d",a);
    {
        int a=3;
        printf("%d",a);
    
    }
    printf("%d",a);
    return 0;
}

//   register

#include<stdio.h>
int main(){
     register int a=2;
    printf("%d",a);
    {
        register int a=3;
        printf("%d",a);
        
    }
    printf("%d",a);
    return 0;
}

//   static 
#include<stdio.h>
int main(){
    
    static int a;
    printf("%d",a);
    // output will be zero in static and extern storage class if no value is defined
    return 0;
}

void std();
#include<stdio.h>
int main(){
    std();
    std();

    return 0;
}
void std(){
    static int a=5;// in second time it does not work because ststic assigned a value in 1 time for the whole program
    a++;
    printf("%d",a);
}

// Extern (global variable)
#include<stdio.h>
int num;
int main(){
    
    printf("%d",num); // in case of extern the output will be zero if no value initialized
    return 0;
}

#include<stdio.h>
void std();
int num;
int main(){
    num=2;
    printf("%d",num);//2
    std();//2
    printf("%d",num);//5   one variable workks throughout the program we can change its value in any line 
    return 0;
}
void std(){ 
    printf("%d",num);
   num=5;
}

#include<stdio.h>
void std();
int main(){
    extern int n;

    printf("%d",n);
    std();
    printf("%d",n);
    return 0;
}
 int n;
void std(){
     n=4;
   
    printf("%d",n);
   
}
