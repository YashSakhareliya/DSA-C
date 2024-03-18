#include<stdio.h>

int fectorial(int n)
{
    int fact;
    if (n==1)
    {
        return 1;
    }
    else
    { 
    fact=n*fectorial(n-1);
    }
    return fact;
}


int main ()
{
   
    int n;
    scanf("%d",&n);
    printf("%d",fectorial(n));
} 