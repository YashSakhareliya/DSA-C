#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};



struct node* newnode(int val)
{
    struct node* NewNode = (struct node*)malloc(sizeof(struct node*));
    NewNode->next=NULL;
    NewNode->data=val;
    return NewNode;
}


int getans(struct node* head,int n)
{

    struct node* p1=head;
    struct node* p2 = head;

    for(int i = 0;i<n;i++)
    {
        if(p1==NULL)
        return -1;

        p1=p1->next;
    }

    while (p1!=NULL)
    {
        p1=p1->next;
        p2=p2->next;
    }

    return p2->data;
    

}


int main()
{

    struct node* head = newnode(1);
    head->next=newnode(2);
    head->next->next=newnode(3);
    head->next->next->next=newnode(4);

    int n=3;

    int ans = getans(head,n);


    if(ans==-1)
    {
        printf("no node present in list\n");
    }
    else
    {
        printf("Value is %d",ans);
    }
    
    
}