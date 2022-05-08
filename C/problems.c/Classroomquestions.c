#include <stdio.h>
#include <stdlib.h>
void add();
void delete();

struct node
{
    char name[100];
    char roll[100];
    char email[100];
    char address[100];
    char contact[100];

    struct node *nextnode;
};

struct node *start = NULL;
struct node *ptr = NULL;
 struct node *pointer=NULL;
void add()
{

    struct node *newnode;
   
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter Student name ");
    scanf("%s",newnode->name);
    printf("enter roll no. ");
    scanf("%s",newnode->roll);
    printf("enter Email ");
    scanf("%s",newnode->email);
    printf("enter Address ");
    scanf("%s",newnode->address);
    printf("enter Contact ");
   scanf("%s",newnode->contact);
    newnode->nextnode = NULL;
    if(start==NULL){
        start = newnode;
    }else{
        ptr=start;
        while(ptr->nextnode!=NULL){
            ptr=ptr->nextnode;
        }
        ptr->nextnode=newnode;
        newnode->nextnode=NULL;
    }
   
}
void delete(){
    int n,c=2;
     printf("enter serial number of student's information to delete ");
    scanf("%d",&n);
    if(start==NULL){
         printf("\nlist is empty\n");
         return;
     }
     else if(n==1){
         start=start->nextnode;
         return;
     }
   
     ptr=start;
   while(c!=n){
      
       ptr=ptr->nextnode;
       if(ptr->nextnode==NULL){
          printf("ivalid input");
          return;
       }
       c++;
    }
       pointer=ptr->nextnode;
       ptr->nextnode=pointer->nextnode;
       free(pointer);
        
    
}
void display()
{    int count = 1;
    ptr = start;
    if(start==NULL){
        printf("list is empty");
        return;
    }
    else{
          while (ptr!=NULL)
    {  
        printf("%d Student's Informations are :- ",count);
    printf("    Student name = %s\n", ptr->name);
    printf("                                    Student roll no. = %s\n", ptr->roll);
    printf("                                    Student Email Id = %s\n", ptr->email);
    printf("                                    Student address = %s\n", ptr->address);
    printf("                                    Student Contact no. = %s\n\n", ptr->contact);
    ptr=ptr->nextnode;
    count++;
    }
    }
  
 
   
}
int main()
{
    int choice;
    while (1)
    {    

        printf("\n\n");
        printf("press 1 to add informations\n");
        printf("press 2 to display informations\n");
        printf("press 3 to delete informations\n");
        printf("press 4 for to exit\n");

        printf("\n");
        printf("enter your choice = ");
        scanf("%d", &choice);
        printf("\n\n");
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            delete();
            break;
        case 4:

            exit(0);
            break;
        default:
            printf("you have entered wrong value\n");
        }
    }
    return 0;
}