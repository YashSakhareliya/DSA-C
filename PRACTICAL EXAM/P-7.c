#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* newlist(struct node* head,int val)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    
    newnode->next=NULL;
    newnode->data=val;

    if(head==NULL)
    {
        head=newnode;

    }
    else
    {
        struct node* temp = head;

        while(temp->next!=NULL)        
        {
            temp=temp->next;
        }
        temp->next=newnode;

        
    }

    return head;


}

void display(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}


struct node* merge(struct node* l1,struct node* l2)
{
    struct node* mergelist = NULL;

    
    


    while(l1 != NULL && l2 != NULL)
    {
        if(l1->data < l2->data)
        {
            if(mergelist==NULL)
            {
                mergelist=newlist(mergelist,l1->data);
                
               
            }
            else{
                mergelist=newlist(mergelist,l1->data);
                
                
            }
            l1=l1->next;
        }
        else
        {
           if(mergelist==NULL)
            {
                mergelist=newlist(mergelist,l2->data);
            }
            else{
                mergelist=newlist(mergelist,l2->data);
            }
            l2=l2->next; 
        }

    }

    while (l1!=NULL)
    {
        if(mergelist==NULL)
            {
                mergelist=newlist(mergelist,l1->data);
                
               
            }
            else{
                mergelist=newlist(mergelist,l1->data);
                
                
            }
            l1=l1->next;
        
    }

    while (l2!=NULL)
    {
        if(mergelist==NULL)
            {
                mergelist=newlist(mergelist,l2->data);
            }
            else{
                mergelist=newlist(mergelist,l2->data);
            }
            l2=l2->next; 
    }
    
    

    display(mergelist);



}

int main()
{
    struct node* list1 = NULL;
    struct node* list2 = NULL;

    list1 = newlist(list1,1);
    list1 = newlist(list1,10);
    list1 = newlist(list1,40);

    list2 = newlist(list2,18);
    list2 = newlist(list2,25);
    list2 = newlist(list2,30);

    //display(list1);

    merge(list1,list2);


    
    

    




}