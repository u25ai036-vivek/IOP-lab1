//Program to convert temperature from fahrenheit to centigrade degrees
#include<stdio.h>
int main()
{
    float f,cel;
    printf("Enter the value of temperature in fahrenheit:");
    scanf("%f",&f);
    cel=(f-32)*(5.0/9.0);
    printf("Temperature in centigrade degrees is:%f",cel);
    
}