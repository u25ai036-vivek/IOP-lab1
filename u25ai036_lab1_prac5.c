// Program to swap two variables using third variables
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
     printf("\nEnter the value of b:");
    scanf("%d",&b);

    temp=a; 
    a=b;
    b=temp;
    printf("the value of a becomes:%d",a);
    printf("\nthe value of b becomes:%d",b);
}