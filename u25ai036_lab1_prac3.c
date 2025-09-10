//Program to calculate gross salary
#include<stdio.h>
int main()
{
    int basic_salary,HRA,other_allowances,grosssalary;
    printf("Enter basic salary of employee:");
    scanf("%d",&basic_salary);
    printf("Enter HRA of employee:");
    scanf("%d",&HRA);
    printf("Enter other allowances of employee:");
    scanf("%d",&other_allowances);
    grosssalary=(basic_salary+HRA+other_allowances);
    printf("The gross salary of an employee is:%d",grosssalary);

}