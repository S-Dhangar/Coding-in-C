#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
    int data;
    struct node *next;
};
struct node*start=NULL;
int main()
{    create();
     insert_begin();
     insert_end();
     insert_pos();
     delete_begin();
     display();

     return 0;
}

void create()
{
    int info;
    struct node*newnode,*currptr;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory is out of bound");
        exit(0);
    }
    printf("enter the data : ");
    scanf("%d",&info);
    newnode->data=info;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        currptr=start;
        while(currptr->next!=NULL)
        {
            currptr=currptr->next;
        }
        currptr->next=newnode;
    }
    

}
void display()
{     
    struct node *currptr;

    if(start==NULL)
    {
        printf("list is empty");
        return;
    }
    else
    
        currptr=start;
    while(currptr!=NULL)
        { 
           
        printf(" %d",currptr->data);
        currptr=currptr->next;
         }
    
}
void insert_begin()
{
   int info;
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   if(newnode==NULL)
   {
       printf("memory out of bound");
       return;
   }
   printf("enter the data");
   scanf("%d",&info);
   newnode->data=info;
   if(start==NULL)
   {
       start=newnode;
       newnode->next=NULL;
   }
   else
   {
       newnode->next=start;
       start=newnode;
   }

}
void insert_end()
{
   int info;
   struct node*newnode,*currptr;
   newnode=(struct node*)malloc(sizeof(struct node));
       if(newnode==NULL)
       {
           printf("memory out of bound");
       }
       printf("enter the data");
       scanf("%d",&info);
       newnode->data=info;
       if(start==NULL)
       {
           start=newnode;
           newnode->next=NULL;
       }
       else
       {
           currptr=start;
           while(currptr->next!=NULL)
           {
               currptr=currptr->next;
           }
           currptr->next=newnode;
           newnode->next=NULL;
             }
    }
void insert_pos()
{
    int info,pos;
   struct node*newnode,*currptr;
   newnode=(struct node*)malloc(sizeof(struct node));
       if(newnode==NULL)
       {
           printf("memory out of bound");
           return;
       }
       printf("enter the data into the position");
       scanf("%d",&info);
       newnode->data=info;
                  printf("enter the position to insert node");
       scanf("%d",&pos);
       if(start==NULL)
       {
           start=newnode;
           newnode->next=NULL;
       }
       else
       {

           currptr=start;
           for(int i=0;i<pos-2;i++){
               currptr=currptr->next;
               if(currptr==NULL)
               {
                   printf("position not found");
                   return;
               }
           }
           newnode->next=currptr->next;
           currptr->next=newnode;
       }
}void delete_begin()
{
struct node *ptr;
    
    if(start==NULL)
    {
       printf("list is empty");
    }
    else{
        ptr=start;
        start=ptr->next;
printf("\ndeleted element is %d ",ptr->data);
        free(ptr);}
  
}
void delete_end()
{

}
void delete_pos()
    {

    }

