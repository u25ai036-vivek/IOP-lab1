//Program to calculate simple interest
#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("Enter the principle amount:");
    scanf("%d",&p);
    printf("Enter the rate of interest:");
    scanf("%d",&r);
    printf("Enter the time of duration:");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("the value of simple interest =%d",si);

}