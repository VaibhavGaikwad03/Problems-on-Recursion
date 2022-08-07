/*
Write a program which accept number from user and count number of characters.

Input : Hello
Output : 5

*/

#include<stdio.h>

int strlenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        strlenX(str);
    }
    return iCount;
}

int main()
{
    char Arr[20]; 
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenX(Arr);

    printf("Length of the string is : %d\n", iRet);

    return 0;
}