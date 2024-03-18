#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int top = -1,i,c = 0;


bool isinline(char exp[])
{
    char stack[500];
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='{' || exp[i] == '[' || exp[i] == '(')
        {
            top++;
            stack[top] = exp[i]; 
        }
        else if(exp[i]=='}' || exp[i] == ']' || exp[i] == ')')
        {
            if(top == -1)
            {
                return 0;
            }
            else if(stack[top]=='(' && exp[i] == ')' || stack[top]=='[' && exp[i] == ']' || stack[top]=='{' && exp[i] == '}' )
            {
                top--;
            }
            else
            {
                return 0;
            }

        }
    }
        return top = -1;

}

int main()
{
    char exp[50];
    printf("Enter the expresion ");
    scanf("%s",exp);

    if(isinline(exp))
    printf("this is balanced order");
    else
    printf("this is not a balanced");

}