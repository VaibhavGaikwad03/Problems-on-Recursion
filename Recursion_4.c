/*
Write a program which display below pattern.

Output : A  B   C   D   E   F

*/

#include<stdio.h>

void Display()
{
    static int i = 0;
    static char cValue = 'A';

    if(i < 6)
    {
        printf("%c\t", cValue);
        i++;
        cValue++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}