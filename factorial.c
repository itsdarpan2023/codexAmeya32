#include<stdio.h>
int main()
{
    int fact=1,i,number;
    printf("enter any number");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("fact=%d",fact);
}