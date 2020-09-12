/* 
  Advantage of  linklist over Array -  We can create them dynamically (particularly in C)
  Disadvantage of Linklist - To access any element it takes O(n) in worst case (sequential access) while in Array we can access any element in O(1) (random access is possible in Array) */
    
/* this code contains all the standard operations in Singly Linklist
    1.create new node 
    2.Insert New Node:-
           a. at beginning
           b. at end
           c. between any two node
    3.Delete Node:-
           a. From the beginning
           b. From the end
           c. From between any two node
    4.Traversing LL
    */
#include<stdio.h>
#include<stdlib.h>


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

//Insert Node at the beginning
struct node *beginning(struct node *head)
{
  int key=0;

   struct node *new=(struct node*)malloc(sizeof(struct node));
   printf("enter the data for new node:\n");
   scanf("%d",&key);
   new->data=key;
   new->next=head;
   head=new;

   return head;
}
  


//Insert node at the end
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

//after particular node
struct node *between(struct node *head,int after)
{
   int key=0,count=0;
   struct node *new=(struct node*)malloc(sizeof(struct node));
   printf("enter the data for new node:\n");
   scanf("%d",&key);
   new->data=key;
   struct node *t=head;
   
   while(t->next){
        count++;
        if(count==after)
           break;
        t=t->next;
   }
       
        new->next=t->next;
        t->next=new;
        
   
   return head;

}

//after particular node having particular data
struct node *data_after(struct node *head,int info)
{
   int key=0;
   struct node *new=(struct node*)malloc(sizeof(struct node));
   printf("enter the data for new node:\n");
   scanf("%d",&key);
   new->data=key;
   struct node *t=head;
   
   while((t->data)!=info){

        t=t->next;
   }
       
        new->next=t->next;
        t->next=new;
        
   
   return head;

}

 //From the beginning
struct node *first_delete(struct node *head)
{

   struct node *t=head;
   head=head->next;

   free(t);
   return head;

}

//From the end          
struct node *last_delete(struct node *head)
{

   struct node *t=head;
   while (t->next->next)
   {
      t=t->next;
   }
   
   free(t->next);
   t->next=NULL;
   
   return head;

}

// Delete particular node
struct node *particular_delete(struct node *head,int d_after)
{

   struct node *t=head;
   int count=0;
   while (t->next->next)
   {
      count++;
         if (count==d_after-1)
         {
            break;
         }
         
      t=t->next;
   }
   
    struct node *t1=t->next;
    t->next=t->next->next;
    free(t1);

    return head;

}

//Delete particular node having particular data
struct node *particular_ddelete(struct node *head,int d)
{

   struct node *t=head;
   
   while (t->next->data != d)
   {   
      t=t->next;
   }
   
    struct node *t1=t->next;
    t->next=t->next->next;
    free(t1);

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

//revesing SLL
struct node *reverse(struct node *cur){
      
        struct node *prev=NULL;
        struct node *nextp=NULL;

        while(cur)
        {
         
            nextp=cur->next;
            cur->next=prev;
      
            prev=cur;
            cur=nextp;


        }
        return prev;

}


int main()
{
   int num_node,choice=0,after,info,d_after,d;
   
   struct node *head;
   

   //creating LL
   printf("enter the number of node you want in youR  SLL:");
   scanf("%d",&num_node);
   
   for(int i=1;i<=num_node;i++)
   {
     head=createfirst_node(head,i);
   }
   
   while (1)
   {
  

   printf("enter the operation you want to perform:\n");
   printf("press 1 to add new node at the end\n");
   printf("press 2 to add new node at the beginning\n");
   printf("press 3 to add new node after perticular node\n");
   printf("press 4 to add new node after the node having perticular data \n");
   printf("press 5 to delete the first node \n");
   printf("press 6 to delete the last node \n");
   printf("press 7 to delete the particular node \n");
   printf("press 9 to reverse the LL \n");
   printf("press 8 particular node having particular data\n");
   printf("press 10 to print the linklist \n");
   printf("press 11 to stop \n");
    scanf("%d",&choice);
   
   
   
    switch (choice)
    {
      case 1:
         head=add_node(head,num_node+1);
         num_node++;
      break;
      case 2:
         head=beginning(head);
         
      break;

      case 3:
          printf("enter the number of node after which you want to enter the new node:");
          scanf("%d",&after);
          between(head,after);

      break;
      case 4:
          printf("enter the data of node after which you want to enter the new node:");
          scanf("%d",&info);
          data_after(head,info);
      break;

      case 5:
           head=first_delete(head);
           num_node--;
      break;

      case 6:
           head=last_delete(head);
           num_node--;
      break;

      case 7:
          printf("enter the number of node you want to  delete:");
          scanf("%d",&d_after);
           head=particular_delete(head,d_after);
           num_node--;
      break;

      case 8:
          printf("enter the data of node you want to  delete:");
          scanf("%d",&d);
           head=particular_delete(head,d);
           num_node--;
      break;
      
       case 9:
          head=reverse(head);
       break;
      case 10:
          print__link(head);
       break;
      
      case 11:
         break;
      
      default:
          printf("enter the valid choice:");
      break;

    }
    if(choice==11)
       break;
   }



}