#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;
int val;
void push(){
    if(top==size-1)
    {
        printf("stack overflow\n");
    }
    else{
        printf("enter the value to be inserted = ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1){
        printf("stack is underflow\n");
    }
    else{
        int temp=stack[top];
printf("\n popped %d from the stack\n",stack[top]);
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

        printf("\n%d",stack[i]);
    }printf(" present in stack\n");
}}
int main(){
    int choice;
    while(1){
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
            exit(0);
            default :
            printf("you have entered wrong value");
            
        }

    }
return 0;
}