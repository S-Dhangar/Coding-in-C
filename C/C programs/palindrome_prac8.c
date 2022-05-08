#include<stdio.h>

#include<stdlib.h>
#define size 50
char stack[size];
int top=-1;
int val;
void push(){
    if(top==size-1)
    {
        printf("stack overflow\n");
    }
    else{
        printf("enter the value to be inserted = ");
        scanf("%s",&val);
        top=top+1;
        stack[top]=val;
    }
}
void display1(){
    for(int i=0;i<size;i++){
        printf("%c",stack[i]);
    }
}
void pop(){
    if(top==-1){
        printf("stack is underflow\n");
    }
    else{
        int temp=stack[top];
printf("\n popped %c from the stack\n",stack[top]);
        top=top-1;
        
        return;
    }
}
void display(){
    if(top==-1){
        printf("stack is empty\n");
    }
    
    else{
    for(int i=top;i>-1;i--){

        printf("%c",stack[i]);
    }printf(" present in stack\n");
}
return;
}
void equal(){
    int n=strcmp(display,display1);
    printf("%d",n);
}
int main(){
    int choice;
    while(choice!=6){
        printf("\nchoose one option from below\n");
        printf("enter 1 for push elements in stack\n");
        printf("enter 2 for pop elements from the stack\n");
        printf("enter 3 for display elements of stack\n");
        printf("press 4 to exit the code\n");
        printf("enter your choice = ");
        scanf("%d",&choice);
        switch(choice)
            {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            display1();
            case 5:
            equal();
            break;
            case 6:
            printf("exiting");
            break;
            default :
            printf("you have entered wrong value");
            
        }

    }
return 0;
}