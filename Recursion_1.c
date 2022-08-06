/*
Write a program which display below pattern.

Output : *  *   *   *   *

*/

#include<stdio.h>

void PrintPattern()
{
    static int i = 0;

    if(i < 5)
    {
        i++;
        printf("*\t");
        PrintPattern();
    }
}

int main()
{
    PrintPattern();

    return 0;
}