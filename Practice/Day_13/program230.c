#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            iCountCapital++;
        }
        else                        
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Number of capital character is : %d\n",iCountCapital);
    printf("Number of small character is : %d",iCountSmall);
}

int main()
{
    char Arr[50]={'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    CountAll(Arr);
    
    return 0;
}