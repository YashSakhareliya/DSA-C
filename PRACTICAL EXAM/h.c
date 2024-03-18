// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* p = NULL;
struct Node* q = NULL;

struct Node* getnode()
{
    struct Node* k;
    k = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d",&k->data);
    k -> left = NULL;
    k ->right = NULL;
    return k;
    
}
void insert(struct Node* s,struct Node* x)
{
    p=s;
    q=s;
    while(q != NULL)
    {
        if(x->data < q->data)
        {
            p=q;
            q=q->left;
        }
        else if( x->data> q->data)
        {
            p=q;
            q=q->right;
        }
    }
    if(x->data < p->data)
    {
        p->right=x; 
    }
    else if(x->data>p->data)
    {
        p->left=x;
    }
}

void search(struct Node* r, int x)
{
    p=r;
    q=r;
    
    while(q!=NULL && x != q->data)
    {
        if(x > q->data)
        {
            p=q;
            q=q->right;
        }
        else if(x < q->data)
        {
            p=q;
            q=q->left;
        }
        
        if(q==NULL)
        {
            printf("Value is not present in tree\n");
        }
        else
        {
            printf("Parent is : %d",p->data);
            if(x == p->right->data)
            {
                printf("Sibling node is : %d",p->left->data);
            }
            if(x == p->left->data)
            {
                printf("Sibling node is : %d",p->right->data);
            }
        }
    }
}

void Inorder(struct Node* n)
{
    if(n==NULL)
    return;
    
    Inorder(n->left);
    printf("%d\t",n->data);
    Inorder(n->right);
}

int main() {
    int x;
    printf("Enter the root element of data: ");
    scanf("%d",&x);
    struct Node* r;
    printf("Work");
    r->data=x;
    r->left=NULL;
    r->right=NULL;
    printf("Work");
    struct Node* n;
    
    for(int i=0;i<6;i++)
    {
        n=getnode();
        insert(r,n);
    }
    // int a;
    
    // printf("Enter the value for searching : ");
    // scanf("%d",&a);
    // search(r,a);
    //Inorder(r);
    printf("%d",r->data);
    // printf("%d",r->left->data);
    // printf("%d",r->left->left->data);
    // printf("%d",r->left->left->left->data);
    // printf("%d",r->left->left->left->left->data);
    // printf("%d",r->left->left->left->left->left->data);
    
    
   

    
}