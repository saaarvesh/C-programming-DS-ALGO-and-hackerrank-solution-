#include<stdio.h>
#include<stdlib.h>
int r = 0, f = 0;
void enqueue(int size, int *queue)
{
    int data;
    r = (r + 1) % (size);
    if (r == f)
    {
        printf("\noverflow is there\n");
        if (r == 0)
        {
            r = (size) - 1;
        }
        else
        {
            r = r - 1;
        }
    }
    else
    {
        printf("\nenter the data:");
        scanf("%d", &data);
        queue[r] = data;
    }
}

int dequeue(int size, int *queue)
{
   
    if (f==r)
    {
        printf("\nunderflow is there\n");
        return -1;
    }
    else
    {
        f = (f + 1) % (size);
        printf("\ndeleted  data:%d \n", queue[f]);
        queue[f]=0; //deleted index will display 0 as element value.
        return 0;
    }
}

void print__array(int size,int *queue)
{
    printf("\nqueue is:\n");
    for(int i=1;i<=size;i++)
       printf("%d ",queue[i]);
    printf("\n");
}

int main()
{
    int size, choice;
    
    printf("enter the size of queue:");
    scanf("%d", &size);

     int *queue=(int *)calloc(size+1,sizeof(int));
    
     // int queue[size + 1];
    while (1)
    {
        printf("enter your choice:\n");
        printf("press 1 to enqueue the data\n");
        printf("press 2 to dequeue the data\n");
        printf("press 3 to print the data\n");
        printf("press 4 to STOP\n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(size+1,queue);

            break;

        case 2:
            dequeue(size+1,queue);

            break;
        case 3:
            print__array(size,queue);

            break;
        case 4:

            break;

        default:
            printf("enter valid choice\n");
            break;
        }
        if (choice == 4)
            break;
    }
}
