//Program to swap two variables without using third variable:
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("\nenter the value of b:");
    scanf("%d",&b); 
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a becomes:%d",a);
    printf("\nThe value of b becomes:%d",b);    
}