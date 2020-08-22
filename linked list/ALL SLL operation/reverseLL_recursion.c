#include<stdio.h>
#include<stdlib.h>

struct node *head;
struct node *createfirst_node(struct node *head,int i);
struct node *add_node(struct node *head,int i);
void print__link(struct node *head);

struct node{
    int data;
    struct node *next;
};

//Function to create LL
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

//node at the end
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

//PRINTING
void print__link(struct node *head) {
   struct node *t;
   t=head;
   printf("this linked list is:\n");
   
   while (t)
   {
       printf("%d ",t->data);
       t=t->next;
   }
   printf("\n");
}

void reverse_rec(struct node *prev,struct node *cur)
{
    
     if(cur)
      {
          reverse_rec(cur,cur->next);
          cur->next=prev;
      }
      else
      {
          head=prev;
      }
      
      
} 

int main()
{
   int num_node;
   
   

   //creating LL
   printf("enter the number of node you want in youR  SLL:");
   scanf("%d",&num_node);
   
   for(int i=1;i<=num_node;i++)
   {
     head=createfirst_node(head,i);
   }

   reverse_rec(NULL,head);

   print__link(head);

}