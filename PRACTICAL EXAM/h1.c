#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node* left;
    struct node* right;
};

struct node* root = NULL;

struct node* getnode()
{
    struct node* n = (struct node*)malloc(sizeof(struct node));
    printf("Enter the value to enter : ");
    scanf("%d",&(n->val));
    n->left = NULL;
    n->right=NULL;
    
    return n;
}

void insert(struct node* n)
{
    if(root==NULL)
    {
        root = n;
        return;
    }
    
    struct node* p = root;
    struct node* q = root;
    
    while(p!=NULL)
    {
        if(n->val>p->val)
        {
            q = p;
            p = p->right;
        }
        else
        {
            q = p;
            p = p->left;
        }
    }
    if(n->val>q->val)
        q->right = n;
    else
        q->left = n;
}        

struct node* searchnode(int val)
{
    if(root==NULL)
    {
        printf("No node to search");
    }
    
    else
    {
        struct node* p = root;
        
        while(p->val!=val)
        {
            if(val>p->val)
            {
                p = p->right;
            }
            else
            {
                p = p->left;
            }
        }
       if(p->val == val)
       return p;
    }
    return 0;
}

struct node* search_parent(int val)
{
    struct node* p = root;
    struct node* q;
    
    while(p->val!=val)
    {
        if(val>p->val)
        {
            q = p;
            p = p->right;
        }
        else
        {
            q = p;
            p = p->left;
        }
    }
    if(p->val == val)
    {
        return q;
    }
    return 0;
}
struct node *brother(int val){
    struct node* p = root;
    struct node* q;
    
    while(p->val!=val)
    {
        if(val>p->val)
        {
            q = p;
            p = p->right;
        }
        else
        {
            q = p;
            p = p->left;
        }
    }
    if(p->val>q->val)
    {
        if(q->left!=NULL){
            return q->left;
        }
        else
        printf("Element has no brother.\n");
    }
    else if(q->right!=NULL){
        return q->right;
    }
    else{
    printf("Element has no brother.\n");
    }
    return 0; 

}

void printLeaves(struct node* root) {
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        printf("%d ", root->val);
    else {
        printLeaves(root->left);
        printLeaves(root->right);
    }
}
void inorder(struct node* root)
{
    if(root == NULL)
    return;
    else
    {
        inorder(root->left);
        printf("%d  ", root->val);
        inorder(root->right);
    }
}

int main() {
    
    int val;
    int i;

    for(i=1;i<=5; i++)
    {
        
        struct node* ptr = getnode();
        insert(ptr);
    }
    printf("\n");
    
    printf("Inorder traversal : ");
    inorder(root);
    printf("\n");
    
    printf("Enter element to search : ");
    scanf("%d", &val);
    struct node* m = searchnode(val);
    printf("%d", m->val);
    printf("\n");
    
    printf("Enter element to search parent : ");
    scanf("%d", &val);
    struct node* l = search_parent(val);
    printf("%d", l->val);
    printf("\n");
    printf("leaves node are\n");
    printLeaves(root);
    printf("\nEnter element to search brother:");
    scanf("%d",&val);
    struct node* b=brother(val);
    printf("%d",b->val);
    return 0;
}