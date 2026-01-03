///////////////////////////////////////////////////////////
//
//  Function Name : Strlen
//  Description : Counts number of characters in a string
//  Input  : String
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;

        Strlen(str);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;

    char arr[20];

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    iRet = Strlen(arr);

    printf("%d",iRet);

    return 0;
}
