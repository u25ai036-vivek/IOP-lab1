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
    if(percent>=80)
    {
        printf("1st division");
    }
    else if(percent>=60 && percent<=79)
    {
        printf("2nd division");    
    }
    else if(percent>=33 && percent<=59)
    {
        printf("3rd division");
    }
    else
    {
        printf("fail");
    }
}