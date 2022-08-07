/*
Write a program which display below pattern.

Input : 5
Output : 1  2   3   4   5

*/

#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    
    if(i < iNo)
    {
        i++;
        printf("%d\t", i);
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