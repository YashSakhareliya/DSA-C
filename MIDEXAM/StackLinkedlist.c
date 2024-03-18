#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


int c,n;

struct node 
{
    int data;
    struct node* next;
};
struct node* head=NULL;
int pos;

bool isfull()
{
    if(c==n)
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
    if(head == NULL)
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
            struct node* newnode = (struct node*)malloc(sizeof(struct node));
            printf("enter the element\n");
            scanf("%d",&newnode->data);


    if(isfull())
    {
        printf("stack is full %d can not push\n",newnode->data);
    }
    else
    {
        if(head == NULL)
        {
            newnode->next=NULL;
            head=newnode;
        }
        else
        {
            newnode->next=head;
            head=newnode;
        }
      c++;  
        
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
       struct node* temp;
       temp=head;
       printf("%d is poped\n",head->data);
       head=temp->next;
       c--; 
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

         printf("%d is peek\n",head->data);
    }
   
}

void display()
{
    struct node* temp;
    temp = head;
    if(isempty())
    {
        printf("stack is empty\n");
    }
    else 
    {
        printf("elements are = ");
        do
        {
            printf("%d",temp->data);
            temp=temp->next;
            
        } while (temp!=NULL );
        
    }
}

int main()
{
    int ch,m;
    printf("enter the size of stack\n");
    scanf("%d",&n);
    
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
        printf("1 continue\n0 stop\n");
        scanf("%d",&m);
    }
    while(m!=0);

    return 0;

}