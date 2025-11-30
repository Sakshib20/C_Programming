#include<stdio.h>

void strlwrX(char str[])
{

    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
           *str = *str + 32;
        }
        
        str++;
    }

}

int main()
{
    char Arr[50]={'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);
    printf("Updated String is : %s",Arr);
    
    return 0;
}