#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void insertionsort();
void delete_begin();
void delete_end();
void delete_pos();


struct node{
    int data;
    struct node*next;
};
struct node *head=NULL;


int main(){
    
    create();
    create();
    create();
    create();
    delete_pos();
    insertionsort();
 display();
    
    
    
    }
void create()
{
    int info;
    struct node*newnode,*currptr;
    struct node*nextnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the element ");
    scanf("%d",&info);
    newnode->data=info;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
}
else
      {    
          currptr=head;
while(currptr->next!=NULL){
        currptr=currptr->next;
}
currptr->next=newnode;
      }}

void insert_begin(){
    int val;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory out of bound");
    }
    printf("enter the element you want to insert first");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        
    }
    else{
        newnode->next=head;
        head=newnode;


    }

}
void insert_end(){
    int val;
    struct node *newnode,*ptr;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory out of bound");
    }
    printf("enter the element you want to insert at last");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        
    }
    else{
        ptr==head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        
    }ptr->next=newnode;
    newnode->next=NULL;
    }
}
void insert_pos(){
int val,pos;
    struct node *newnode,*ptr;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory out of bound");
    }
    
    printf("enter the position on which you want to insert the element ");
    scanf("%d",&pos);
    printf("enter the element");
    scanf("%d",&val);
    newnode->data=val;
    
   if(head==NULL){
       head=newnode;
       newnode->next=NULL;
   }
    
else{        ptr=head;

        for(int i=0;i<pos-2;i++){
            ptr=ptr->next;
            if(ptr==NULL){
                printf("position not found \n");
               return;}
                    }       
        }
        newnode->next=ptr->next;
        ptr->next=newnode;
}
void delete_begin(){
    struct node *ptr;
    
    if(head==NULL)
    {
       printf("list is empty");
    }
    else{
        ptr=head;
        head=ptr->next;
printf("\ndeleted element is %d\n ",ptr->data);
        free(ptr);}
  

}
void display(){
    struct node *ptr;
    if(head==NULL){
        printf("list is empty");
        return;
    }
    else{
        ptr=head;
        while(ptr!=NULL){
            
            
            printf(" %d ",ptr->data);
            ptr=ptr->next;
        } 
    }
}
void delete_end(){
    struct node *ptr,*temp;
    if(head==NULL)
    {
        printf("list is empty");
    }else

    ptr=head;
    while(ptr->next!=NULL){
        temp=ptr;
      ptr=ptr->next;
    }temp->next=NULL;
      printf(" deleted element is %d",ptr->data);
      free(ptr);
    
      }
     void delete_pos(){
         struct node *ptr,*temp;
         int pos;
         
         printf("\n enter the position from which you want to delete an element");
         scanf("%d",&pos);
         if(head==NULL){
         printf(" list is empty\n");
         return;
         

    
         }
         else
         ptr=head;
         for(int i=0;i<pos-1;i++)
        { 
            if(ptr==NULL)
            {
                printf("position not found");
                return;
            }
            temp=ptr;
         ptr=ptr->next;
     }
     temp->next=ptr->next;
     printf("deleted element is %d from %d position ",ptr->data,pos);
      free(ptr);


     }
  void   insertionsort(){
         int temp;
         struct node *s1=head->next;
         struct node *dummy=NULL,*curr=NULL;
         
         while(s1!=NULL){
             curr=s1;
             dummy=head;
             while(curr!=dummy && curr->data<dummy->data){
                temp=curr->data;
                curr->data=dummy->data;
                dummy=dummy->next;
             }            s1=s1->next;
        }
    }