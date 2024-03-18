#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};


struct node* createnode(int val)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
}

int findhight(struct node* root)
{
    if(root == NULL)
    {
        return -1;
    }

    int lefthight = findhight(root->left);
    int righthight = findhight(root->right);

    return (lefthight>righthight ? lefthight : righthight ) + 1;
}

int main()
{
    struct node* root = createnode(1);
    root->left = createnode(2);
    
     root->right = createnode(3);
     root->left->left = createnode(4);
     root->left->right = createnode(5);

    int hight = findhight(root);
    printf("%d",hight);


}