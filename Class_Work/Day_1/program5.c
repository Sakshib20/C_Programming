#include<stdio.h>
int main()
{
    int i=0, j=0, ans=0;

    printf("Enter 1st number: \n");
    scanf("%d",&i);


    printf("Enter 2nd number: \n");
    scanf("%d",&j);

    ans=i+j;                        //business logic
    printf("Addition is: %d",ans);

    return 0;
}