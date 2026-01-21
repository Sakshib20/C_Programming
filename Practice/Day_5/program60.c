#include<stdio.h>

int main()
{
    int iNo=7236;
    int iDigit=0;

    iDigit=iNo%10;
    printf("%d\n",iDigit);
    iNo=iNo/2;

    iDigit=iNo%10;
    printf("%d\n",iDigit);
    iNo=iNo/2;

    iDigit=iNo%10;
    printf("%d\n",iDigit);
    iNo=iNo/2;

    iDigit=iNo%10;
    printf("%d\n",iDigit);
    iNo=iNo/2;
    


    return 0;

}