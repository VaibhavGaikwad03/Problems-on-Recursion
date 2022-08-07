/*
Write a program which display below pattern.

Input : 5
Output : *  *   *   *   *

*/

#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    
    if(i < iNo)
    {
        printf("*\t");
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}