#include <stdio.h>



void tower (int n, char beg,  char aux ,char end)
{
    if (n==1)
    {
        printf("move to %c to %c \n ",beg,end);
    }
    else{
        tower (n-1,beg,end,aux);
        printf("move %c to %c \n",beg,end);
        tower(n-1,aux,beg,end);
    }

    
}
int main (){
    int n;
    char a,b , c ;
    printf("enter the disk line ");
    scanf("%d",&n);
    printf("tower of honoi of %d is \n",n);
    tower(n,'a','b','c');
}