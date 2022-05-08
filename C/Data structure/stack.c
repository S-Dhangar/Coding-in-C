#include<stdio.h>
int stack[5];
int top=-1;
void push(){
     
    int item;
    printf("enter the value of the element to push ");
    scanf("%d",&item);
    if(top==4){
        printf("stack is overflow\n");
    }
    else{
        stack[top+1]=item;
        top++;
    }

}
    void pop(){
    if(top==-1){
        printf("stack is underflow\n");
    }
    else{
        int temp=stack[top];
        printf("deleting %d from the stack\n",temp);
        top=top-1;
    }
}
void display(){
        if(top==-1){
            printf("stack is empty\n");
            }
            else{
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}
}
int main(){

    while(1){
        
        printf("\n1 push\n2 pop\n3 display\nchoose what you want to do from above");
        int choice;
        scanf("%d",&choice);
    switch(choice){
    case 1: push(); break;
    case 2: pop();  break;
    case 3: display(); break;
    default: printf("you have entered wrong value please enter the right value\n");
    }
    }
    push();
    
    return 0;
}