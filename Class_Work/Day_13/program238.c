#include<stdio.h>

void struprX(char str[])
{

    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
           *str = *str - 32;
        }
        
        str++;
    }

}

int main()
{
    char Arr[50]={'\0'};

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);
    printf("Updated String is : %s",Arr);
    
    return 0;
}