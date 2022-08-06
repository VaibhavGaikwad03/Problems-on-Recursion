/*
Write a program which display below pattern.

Output : a  b   c   d   e   f

*/

#include<stdio.h>

void Display()
{
    static int i = 0;
    static char cValue = 'a';

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