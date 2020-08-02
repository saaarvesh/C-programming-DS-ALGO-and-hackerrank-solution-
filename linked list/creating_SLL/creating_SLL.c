#include<stdio.h>
#include<stdlib.h>

struct node *createfirst_node(struct node *head,int i);
struct node *add_node(struct node *head,int i);
struct node{
    int data;
    struct node *next;
};

struct node *createfirst_node(struct node *head,int i)
{
  int key=0;
  if(i==1)
  {
   head=(struct node*)malloc(sizeof(struct node));
   printf("enter the data for %d node:\n",i);
   scanf("%d",&key);
   head->data=key;
   head->next=NULL;
   return head;
  }
  else
  {
    head=add_node(head,i);
    return head;
  }
  
}

struct node *add_node(struct node *head,int i)
{
   int key=0;
   struct node *new=(struct node*)malloc(sizeof(struct node));
   printf("enter the data for %d node:\n",i);
   scanf("%d",&key);
   new->data=key;
   struct node *t=head;
   
   while(t->next)
       t=t->next;
     
        t->next=new;
        new->next=NULL;
   
   return head;

}

int main()
{
   int num_node;
   int count=0;
   struct node *head;
   struct node *t;
   printf("enter the number of node you want in you SLL:");
   scanf("%d",&num_node);
   
   for(int i=1;i<=num_node;i++)
   {
     head=createfirst_node(head,i);
   }
   t=head;
   printf("this linked list is:\n");
   
   for(int i=1;i<=num_node;i++)
   printf("-------   ");

   printf("\n");
   while (t)
   {
       count++;
       
       printf("|%d | -|",t->data);
       if(count==num_node)
          break;
       printf("-->");
       t=t->next;
   }
   
   printf("\n");
   
   for(int i=1;i<=num_node;i++)
   printf("-------   ");
   

  

}