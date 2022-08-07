/*
Write a program which display below pattern.

Input : 5
Output : A  B   C   D   E

*/

#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    static char ch = 'A';
    
    if(i < iNo)
    {
        printf("%c\t", ch);
        ch++;
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