#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *link;

};

struct node *push(int d,struct node *head)
{
   struct node *p=(struct node *)malloc(sizeof(struct node));
   if(p==NULL){
       printf("heap is FULL");
       return head;
   }
   p->data=d;
   p->link=head;
   head=p;

   return head;
   
}

struct node *pop(struct node *head)
{
   int item;
   
   if(head==NULL){
       printf("UNDERFLOW");
       return head;
   }
   
  
   struct node *p=head;
   item=head->data;
   printf(" poped item is :%d\n",item);
   head=head->link;
   free(p);

   return head;
   
}

void print__link(struct node *head) {
   struct node *t;
   t=head;
   printf("this linked list is:\n");
   
   while (t)
   {
       printf("%d ",t->data);
       t=t->link;
   }
   printf("\n");
   return;
}

void main()
{
   int choice;
   int d;
   struct node *head=NULL;
   
   while (1)
   {
       printf("enter your choice:\n");
       printf("press 1 to push the data\n");
       printf("press 2 to pop the data\n");
       printf("press 3 to print the LL\n");
       printf("press 4 to STOP\n");
       
       scanf("%d",&choice);
   
   switch (choice)
   {
   case 1:
         printf("enter the data you want to push\n");
         scanf("%d",&d);
         head=push(d,head);
       
       break;
     
    case 2:
         head=pop(head);
         
       
       break;
    case 3:
         print__link(head);
       
       break;
    case 4:
         
       break;
   
   default:
         printf("enter valid choice\n");
       break;
   }
   if(choice==4)
      break;
   
   }


}