//Program to read total seconds and convert it into time
#include<stdio.h>
int main()
{
    int totalsec,hr,hrrem,min,minrem,sec;
    printf("enter time in total seconds:");
    scanf("%d",&totalsec);
    hr=(totalsec)/3600;
    hrrem=(totalsec)%3600;
    min=(hrrem)/60;
    minrem=(hrrem)%60;
    sec=(minrem);
    printf("\nthe time in hour %d",hr);
    printf("\nthe time in minutes %d",min);
    printf("\nthe time in seconds %d",sec);

}