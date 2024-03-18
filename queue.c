#include<stdio.h>
void Enqueue();
void Dequeue();
void Display();
void IsEmpty();
void IsFull();
void Peek();
int a[1000],n;
int front=-1;
int rear=-1,c=0;
int main()
{
    int ch,m;
    printf("Enter the size of queue\n");
    scanf("%d",&n);
    a[n];
    do
    {
        printf("1 Enqueue\n2 Dequeue\n3 Display\n4 IsEmpty\n5 IsFull\n6 Peek\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            Enqueue();
            break;
            
            case 2:
            Dequeue();
            break;
            
            case 3:
            Display();
            break;
            
            case 4:
            IsEmpty();
            break;
            
            case 5:
            IsFull();
            break;
            
            case 6:
            Peek();
            break;
            
            default:
            printf("Enter a valid choice\n");
        }
        printf("Do you want to Continue?\n");
        printf("1 for Yes\n0 for No\n");
        scanf("%d",&m);
    }while(m!=0);
    return 0;
}
void Enqueue()
{
    int x;
    printf("Enter the element to insert\n");
    scanf("%d",&x);
    
    if(rear==n-1)
    {
    	IsFull();
	}
    
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear++;
        a[rear]=x;
    }
    else
    {
        rear++;
        a[rear]=x;
    }
    
}

void Dequeue()
{
    if(front==-1 && rear==-1)
    {
    	IsEmpty();
	}
    
    else if(front==rear)
    {
    	printf("%d is Deleted\n",a[rear]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("%d is Deleted\n",a[front]);
        front++;
    }
}

void Display()
{
	if(front==-1 && rear==-1)
	{
		IsEmpty();
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%d\n",a[i]);
		}
	}
}

void IsEmpty()
{
	for(int i=front;i<=rear;i++)
		{
			c++;	
		}
	if(front==-1 && rear==-1)
	{
		printf("The Queue is Empty\n");
	}
	else
	{
		
		printf("The Queue can contain more %d elment\n",n-c);
	}
}

void IsFull()
{
	if(rear==n-1)
    printf("Queue is Full\n");
	else
	{
		printf("There are %d element in the Queue\n",c);
	}
}

void Peek()
{
	if(front==-1 && rear==-1)
	{
		printf("The Queue is Empty\n");
	}
	else
	{
		printf("The First element in the Queue is %d",a[front]);
	}	
}