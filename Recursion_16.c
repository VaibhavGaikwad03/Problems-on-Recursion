/*
Write a recursive program which  accept string from the user and count white spaces.

Input : HelL o Wor Ld
Output : 3
*/

#include<stdio.h>

int CountSpaces(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        CountSpaces(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountSpaces(Arr);

    printf("Count of white spaces in the string is : %d\n", iRet);

    return 0;
}