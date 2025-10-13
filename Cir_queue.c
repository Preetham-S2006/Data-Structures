#include<stdio.h>
#define  MAX 5
int queue[MAX];
int front=-1,rear=-1;
void insert(int v)
{
    if((front==0&&rear==MAX-1)||(front==(rear+1)%MAX))
    {
        printf("Queue overflow!");
    }
    else
    {
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
         rear=(rear+1)%MAX;
        }
        queue[rear]=v;
        printf("%d inserted into queue\n",v);
    }
}
void delete()
{
    if(front==-1)
    {
        printf("queue underflow!\n");
    }
    else
    {
        printf(" Delete element :%d\n",queue[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%MAX;
        }
    }
}
void display()
{
    if(front==-1)
    {
      printf("Queue is empty\n");
    }
    else
    {
      printf("Queue element:\n");
      for(int i=front;i<=rear;i++)
      {
        printf("%d", queue[i]);
      }
        printf("\n");
    }
}
int main()
{
    int choice,v;
    while(1)
    {
        printf("Queue Operations:\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
       switch(choice)
       {
         case 1:
         printf("enter value to insert: ");
         scanf("%d",&v);
         insert(v);
         break;
         case 2:
         delete();
         break;
         case 3:
         display();
         break;
         case 4:
         printf("existing program");
         return 0;
         default:
         printf("invalid entery");
       }
    }
    return 0;
}
