//Program to calculate area of triangle
#include<stdio.h>
int main()
{
    int b,h,area;
    printf("Enter the value of base length=");
    scanf("%d",&b);
    printf("Enter the value of height=");
    scanf("%d",&h);

    area=((b*h)/2);
    
    printf("the value of area of triangle is %d",area);

}