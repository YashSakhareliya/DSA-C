#include<stdio.h>
#include<stdlib.h>
void swapnum(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int nextsgn(int n)
{
    int i,j,num[20],r,rev=0;
    int c = 0;
   
    while(n!=0)
    {
        r = n%10;
        rev = rev * 10 + r;
        c++;
        n = n/10;
        
    }
    for(i = 0;i<c ;i++)
    {
        r = rev % 10;
        num[i]=r;
        rev/=10;
    }

    for(i =c-1;i>0;i--)
    {
        if(num[i-1]<num[i])
        break;
    }

    if(i==0)
    return 0;

    int se = i-1;
    for(i = se+1; i<c; i++)
    {
        for (j = i+1;j<c;j++)
        {
            if(num[i]>num[j])
            swapnum(&num[i],&num[j]);
        }
    }
    swapnum(&num[se],&num[se+1]);

    printf("Next number is = ");
    for(i = 0;i<c;i++)
    {
        printf("%d",num[i]);
    }
}
int main()
{

    int n,num[20];
    printf("Enter the number \n");
    scanf("%d",&n);
    int y = nextsgn(n);
    if(y == 0)
    {
        printf("this is number is next smallest greatest number %d",n);
    }
}