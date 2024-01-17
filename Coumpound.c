#include<stdio.h>
int main()
{
    float p,r,t,ci;
    printf("enter the value of p,r,t");
    scanf("%d%d%d",&p,&r,&t);
    ci=p*pow(1+r/100,t)-p;
    printf("\n compound interest %f",ci);
}