#include<stdio.h>
#include<stdlib.h>
void insert();

void create(struct node *p,struct node *data)
{
   if(p==NULL){
        p=data;}
    
    else{
        if(data < p->data){
        create(p->left,data);
          
    }
            else if(p->data < data){
                create(p->right,data);
                
                }
       
            }

     }  

struct node{
    int data;
    struct node*left;
    struct node*right;

}; struct node*start=NULL;
int main()
{  
    insert();
  return 0;
}

void insert(){
    int val;
     struct node*st;
    st=(struct node*)malloc(sizeof(struct node));
   printf("enter the value of the node ");
    scanf("%d",&val);    
    st->data=val;
     st->left=NULL;
    st->right=NULL;
 if(start==NULL){
        start=st;}
    
    else{
        if(val < start->data){
        create(start->left,st);
           
    }
            else if(val > start->data){
                create(start->right,st);
                
                }
       
            }
    
}

      