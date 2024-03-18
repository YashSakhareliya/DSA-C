#include<stdio.h>
int main ()
{
    int arr[]={1,2,3,4,5};
    int item = 7;
    int k=3;
    int i=0;
    int n=5;
    int j=n;

    printf("arr before update\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,arr[i]);
    }
    n=n+1;

    while(j>=k)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j]=item;
    printf("arr after update\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,arr[i]);
    }

}