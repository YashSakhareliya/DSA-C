#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int a[100];
int n;
int front = -1;
int rear = -1;




bool isfull()
{
    if(rear == n-1)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool isempty()
{
    if(front == rear)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


void enqueue()
{
            printf("enter the element\n");
            int x;
            scanf("%d",&x);
    if(isfull())
    {
        printf("stack is full %d can not push\n",x);
    }
    else if (rear == -1 && front == -1)
    {
        front=0;
        rear++;
        a[rear]=x;
    }
    else
    {
        rear++;
        a[rear]=x;
    }
}

void dequeue()
{
    if (isempty())  
    {
        printf("stack is empty\n");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d is poped\n",a[front]);
        front++;
    }
    
}


void peek()
{
    if(isempty())
    {
        printf("stack is empty\n");
    }
    else
    {

         printf("%d is peek\n",a[front]);
    }
   
}

void display()
{
    if(isempty())
    {
        printf("stack is empty\n");
    }
    else 
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}

int main()
{
    int ch,m;
    printf("enter the size of stack\n");
    scanf("%d",&n);
    a[n];
    do
    {
        printf("1 enqueue\n2 dequeue\n3 peek\n4 is Empty\n5 is Full \n6 Display\n");
        printf("Enter the NUmber");
        scanf("%d",&ch);
        switch (ch)
        {
         case 1:
            
         enqueue();
         break;

         case 2:
          dequeue();
          break;

          case 3:
          peek();
          break;

          case 4:
          if(isempty())
          {
            printf("stack is empty\n");
          }
          else 
          {
            printf("not empty\n");
          }
          break;

          case 5:
          if(isfull())
          {
            printf("stack is full\n");
          }
          else 
          {
            printf("not full \n");
          }
          break;

          case 6:
          display();
          break;

         default:
         printf("enter valid choice\n");
         

        }
        printf("do you want to continue\n");
        printf("1 continue\n2 stop\n");
        scanf("%d",&m);
    }
    while(m!=0);

    return 0;

}