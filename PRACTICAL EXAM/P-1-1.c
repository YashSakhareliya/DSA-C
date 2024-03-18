#include<stdio.h>
#include<string.h>

void swap(char *num,int i,int j)
{
    int temp = num[i];
    num[i] = num[j];
    num[j]= temp;
}

void findnextelement(char *num)
{
    int n = strlen(num);
    int i;

    // find right most element 

    for(i=n-2;i>=0;i--)
    {
        if(num[i]<num[i+1])
        break;
    }
    //if no right most element so that number is greater number

    if(i==-1)
    {
        printf("no next greater number : ");
        return;
    }

    // find greatest number to right side of num[i]

    int se = i+1;
    for(int j = i+2;j<n;j++)
    {
        if(num[j]>num[i] && num[j]<num[se]);
        se = j;
    }

    // swap number 
    swap(num,i,se);
    
    // swap number into assending order from num[i]

    for(int j = i+1;j<n-1;j++)
    {
        for(int k = i+1;k<n-1;k++)
        {
            if(num[j]>num[k])
            swap(num,j,k);
        }
    }

    printf("next gereatest number is %s",num);



}

int main()
{
    
    char num[20];


    printf("Enter the number : \n");
    scanf("%s",&num);

    findnextelement(num);


    
}