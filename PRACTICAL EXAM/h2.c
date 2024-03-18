#include <stdio.h>
#include<stdlib.h>

struct node 
{
    int val;
    struct node* next;
};

struct node* root = NULL;

struct node* getnode()
{
    int x;
    printf("Enter the data: ");
    scanf("%d",&x);
    struct node* k = (struct node* )malloc(sizeof(struct node));
    k->val=x;
    k->next=NULL;
    return k;
}

void append(struct node* st,struct node* n)
{
    
}

