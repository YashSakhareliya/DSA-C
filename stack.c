#include <stdio.h>
#include<stdlib.h>

int m,ch,data;

struct node
{
  int data;
  struct node* next;
};
struct node* head=NULL;

void push();
void pop();
void isempty();

void peek();
void display();

int main() {
    
    do
    {
        
       
        printf("1 push \n 2 pop\n 3 display  \n 4 is empty \n 5 peek");
         scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
        push();
        break;
        
        case 2:
        pop();
        break;
        
        case 3:
        display();
        break;
        
        
        
        case 4:
        isempty();
        break;
        
        case 5:
        peek();
        break;
        
        defualt:
        printf("enter the valid choice");
        
    }
    printf("you want to continue\n");
    printf("1 continue \n 0 close");
    scanf("%d",&m);
    }
    while(m!=0);
        
    

    return 0;
}

void push()
{
    printf("enter the elemint\n");
      scanf("%d",&data);
    
  struct node* newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data= data;
  newnode->next= head;
  head=newnode;
  printf("incert element successfully\n");
    

}

void display(){
  struct node *temp;
  temp=head;
  if (temp==NULL)
  {
    printf("stack is empty\n");
  }
  else{
    while (temp!=NULL)
    {
      printf("%d",temp->data);
      temp=temp->next;
    }
    printf("NULL\n");
    free(temp);
    

  } 
}
void peek(){
  if (head==NULL){
    printf("stack is empty\n");

  }
  else
  {
    printf("peek %d \n",head->data);
  }
}
void pop ()  {

    if(head==NULL){
      printf("stack is empty\n");
    }
    else{
      struct node *temp;
      temp=head;
      printf("%d is poped",temp->data);
      head=head->next;
      free(temp);
    }
  }
  void isempty()
  {
    if (head==NULL){
    printf("stack is empty\n");

  }
  }