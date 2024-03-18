#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int stack[100];
int top = -1,n;


bool isfull()
{
    if(top==n-1)
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
    if(top == -1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


void push()
{
            printf("enter the element\n");
            int x;
            scanf("%d",&x);
    if(isfull())
    {
        printf("stack is full %d can not push\n",x);
    }
    else
    {
        
        
        top++;
        stack[top]=x;
        printf("%d is pushed\n",stack[top]);
    }
}

void pop()
{
    if (isempty())  
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("%d is poped\n",stack[top]);
        top--;
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

         printf("%d is peek\n",stack[top]);
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
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

int main()
{
    int ch,m;
    printf("enter the size of stack\n");
    scanf("%d",&n);
    stack[n];
    do
    {
        printf("1 push\n2 pop\n3 peek\n4 is Empty\n5 is Full \n6 Display\n");
        printf("Enter the NUmber");
        scanf("%d",&ch);
        switch (ch)
        {
         case 1:
            
         push();
         break;

         case 2:
          pop();
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
            printf("%d space are pushed\n",top+1);
          }
          break;

          case 5:
          if(isfull())
          {
            printf("stack is full\n");
          }
          else 
          {
            printf("%d more space left \n",n-top-1);
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