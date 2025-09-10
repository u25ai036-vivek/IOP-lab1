//Program to calculate the cutoff mark of student
#include<stdio.h>
int main()
{
    int m,p,c,e;
    float cm;
    printf("Enter the marks in Mathematics out of 200=");
    scanf("%d",&m);
    printf("Enter the marks in Physics out of 200=");
    scanf("%d",&p);
    printf("Enter the marks in Chemistry out of 200=");
    scanf("%d",&c);
    printf("Enter the marks in entrance examination out of 100=");
    scanf("%d",&e);

    cm=((m/2.0)+(p/2.0)+(c/2.0)+e);

    printf("the cutoff mark obtined is %f",cm);
}
