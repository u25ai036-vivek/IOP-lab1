//Program to check whether a no. is even or odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Number is even=%d",num);
    }
    else
    {
        printf("Number is odd=%d",num);
    }
    printf("\n Program is completed");

}