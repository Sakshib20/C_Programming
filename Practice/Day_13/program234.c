#include<stdio.h>

void CountDigits(char str[])
{
    int iCount=0;

    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCount++;
        }
       
        str++;
    }

    printf("Number of whitespaces is : %d\n",iCount);
}

int main()
{
    char Arr[50]={'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    CountDigits(Arr);
    
    return 0;
}