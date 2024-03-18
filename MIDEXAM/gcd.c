#include<stdio.h>

int findgcd(int a, int b)
{
    if(b==0)
    return a;
    else
    findgcd(b,a%b);
}

int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int gcd = findgcd(a,b);
    printf("%d",gcd);

}