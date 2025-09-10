//Program to convert seconds into number of days,hours and minutes
#include<stdio.h>
int main()
{
    int sec,days,hr,min;
    sec=31558150;
    hr=(sec)/3600;
    days=(hr)/24;
    min=(sec)/60;
    
    printf("\n earth takes a period of revolution in hours is %d",hr);
    printf("\nearth takes a period of revolution in days is %d",days);
    printf("\nearth takes a period of revolution in minutes is %d",min);

}