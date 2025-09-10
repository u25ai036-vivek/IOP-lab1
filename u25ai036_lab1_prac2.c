//Program to read marks of five subject of a student and calculate total and percentage
#include<stdio.h>
int main()
{
    int m,p,c,e,b,total;
    printf("Enter the marks of mathematics:");
    scanf("%d",&m);
    printf("Enter the marks of physics:");
    scanf("%d",&p);
    printf("Enter the marks of chemistry:");
    scanf("%d",&c);
    printf("Enter the marks of english:");
    scanf("%d",&e);
    printf("Enter the marks of biology:");
    scanf("%d",&b);
    total=(m+p+c+e+b);
    float percent=(total/500.0)*100.0;

    printf("The total marks of student is %d",total);
    printf("\nThe percentage is %f",percent);
    
}