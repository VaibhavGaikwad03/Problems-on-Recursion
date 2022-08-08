/*
Write a recursive program which  accept string from the user and count number of small characters.

Input : HElloWorLd
Output : 6
*/

#include<stdio.h>

int CountSmall(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        CountSmall(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountSmall(Arr);

    printf("Count of small characters in the string is : %d\n", iRet);

    return 0;
}   