#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
   int data;
   struct node *next;
};
struct node *start=NULL;
struct node *creat(struct node*);
struct node *display(struct node*);
struct node *insert_Beg(struct node*);
struct node *insert_En(struct node*);
struct node *insert_Bef(struct node*);
struct node *insert_Aft(struct node*);
int main()
{
    printf("Hello world!\n");
    int option;
          start=creat(start);
          printf("Linked list has created");
          start=display(start);
          do
          {
            printf("\n********MAIN MENU*****");
            printf("\n1. Insert first node");
            printf("\n2. Insert Last node");
            printf("\n3. Insert before given value");
            printf("\n4. Insert after given value");
            printf("\nEnter option");
            scanf("%d",&option);
            switch(option)
            {
                 case 1 : start=insert_Beg(start);
                           break;
                 case 2 : start=insert_En(start);
                          break;
                 case 3 : start=insert_Bef(start);
                          break;
                 case 4 : start=insert_Aft(start);
                           break;
            }
          }while(option<5);
    return 0;
}
    struct node *creat(struct node*start)
    {
         struct node *new_node;
         struct node *ptr;
         int num,n;
         printf("Enter number data:\t");
         scanf("%d",&n);
         for(int i=1;i<=n;i++)
         {
              printf("Enter data:\t");
             scanf("%d",&num);
             new_node=(struct node*)malloc(sizeof(struct node));
             new_node->data=num;
             if(start==NULL)
             {
                new_node->next=NULL;
                start=new_node;
             }
             else
             {
                ptr=start;
                while(ptr->next!=NULL)
                {
                  ptr=ptr->next;
                }
                ptr->next=new_node;
                new_node->next=NULL;
             }
         }
         return start;
    }
    struct node *display(struct node*start)
    {
       struct node *ptr;
       ptr=start;
       while(ptr!=NULL)
       {
          printf("\n%d",ptr->data);
          ptr=ptr->next;
       }
       return start;
    }
     struct node *insert_Beg(struct node*start)
    {
       struct node *new_node;
       int num;
       printf("\nEnter insert number:\t");
       scanf("%d",&num);
       new_node=(struct node*)malloc(sizeof(struct node));
       new_node->data=num;
       new_node->next=start;
       start=new_node;
       struct node *ptr;
       ptr=start;
       while(ptr!=NULL)
       {
          printf("\n%d",ptr->data);
          ptr=ptr->next;
       }
       return start;
    }
    struct node *insert_En(struct node*start)
    {
       int num;
       printf("Enter insert nodes:\t");
       scanf("%d",&num);
       struct node *new_node,*ptr;
       new_node=(struct node*)malloc(sizeof(struct node));
       ptr=start;
       new_node->data=num;
       while(ptr->next!=NULL)
       {
          ptr=ptr->next;
       }
       ptr->next=new_node;
       new_node->next=NULL;
       ptr=start;
       while(ptr!=NULL)
       {
         printf("\n%d",ptr->data);
         ptr=ptr->next;
       }
       return start;
    }
    struct node *insert_Bef(struct node*start)
    {
       struct node *ptr,*new_node,*preptr;
       int num,val;
       printf("Enter value:\t");
       scanf("%d",&val);
       printf("Enter insert nodes:\t");
       scanf("%d",&num);
       new_node=(struct node*)malloc(sizeof(struct node));
       new_node->data=num;
       ptr=start;
       preptr=ptr;
       while(ptr->data!=val)
       {
         preptr=ptr;
         ptr=ptr->next;
       }
       preptr->next=new_node;
       new_node->next=ptr;
       ptr=start;
       while(ptr!=NULL)
       {
          printf("\n%d",ptr->data);
          ptr=ptr->next;
       }
       return start;
    }
    struct node *insert_Aft(struct node*start)
    {
      struct node *ptr,*new_node,*preptr;
      int num,val;
       printf("Enter value:\t");
       scanf("%d",&val);
       printf("Enter insert nodes:\t");
       scanf("%d",&num);
       new_node=(struct node*)malloc(sizeof(struct node));
       new_node->data=num;
       ptr=start;
       preptr=ptr;
       while(preptr->data!=val)
       {
          preptr=ptr;
          ptr=ptr->next;
       }
       preptr->next=new_node;
       new_node->next=ptr;
       ptr=start;
       while(ptr!=NULL)
       {
          printf("\n%d",ptr->data);
          ptr=ptr->next;
       }
       return start;

    }




