//Program to read time in Hr,min,sec and convert into total second
#include<stdio.h>
int main()
{
    int hr,min,sec,totalsec;
    printf("enter the value of time in hour=");
    scanf("%d",&hr);
    printf("enter the value of time in minute=");
    scanf("%d",&min);
    printf("enter the value of time in second=");
    scanf("%d",&sec);

    totalsec=((hr*3600)+(min*60)+sec);
    printf("total seconds is%d",totalsec);
    
}