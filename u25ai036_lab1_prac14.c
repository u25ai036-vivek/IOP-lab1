//Program to check whether a given character is capital letter,small letter,a digit or a special symbol
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);

    int ascii=ch;
    if(ascii>=65 && ascii<=90)
    {
        printf("The character is a capital letter:%c",ch);
    }
    else if (ascii>=48 && ascii<=57)
    {
        printf("The character is a digit:%c",ch);
    }
    else if (ascii>=97 && ascii<=122)
    {
        printf("The character is a small case letter:%c",ch);
    }
    else
    {
        printf("The character is a symbol:%c",ch);
    }

}