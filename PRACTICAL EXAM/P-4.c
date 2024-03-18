#include<stdio.h>

void nextelement(int n, int arr[])
{
    int nextgraeter[500];
    int stack[500];

    int top = -1;
    
    for(int i = 0;i<n;i++)
    {
        nextgraeter[i]=-1;
    }

    for(int i = 0;i<n;i++)
    {
        if(stack[top]>=0 && arr[i]>arr[stack[top]])
        {
            nextgraeter[stack[top]] = arr[i];
            top--;

        }

        stack[++top] = i;
    }

    for(int i = 0;i<n;i++)
    {
        printf("%d -------->%d\n",arr[i],nextgraeter[i]);
    }
}

int main()
{
    int n,arr[500];
    printf("Enter the number of element\n");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    nextelement(n,arr);
}