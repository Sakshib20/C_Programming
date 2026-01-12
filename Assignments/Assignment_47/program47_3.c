///////////////////////////////////////////////////////////
//
//  Function Name : SumDigits
//  Description : Displays the Sum of digits of each node
//  Input  : Integer Pointer(Array Address)
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 12/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        (*first) = newn;
    }
    else
    {
        newn->next = *first;
       (*first)= newn;
    }
}


void SumDigits(PNODE first)
{
   int iSum = 0, iDigit=0;

   while(first != NULL)
   {
        int iNo = first->data;
        iSum=0, iDigit = 0;
        

        while (iNo!=0)
        {
            iDigit = iNo%10;
            iSum = iSum+iDigit;
            iNo=iNo/10;
        }

        printf("%d-> Summation of  Digits is: %d \n",first->data,iSum);
        first = first->next;  
   }


}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 675);
    InsertFirst(&head, 342);
    InsertFirst(&head, 11);
    InsertFirst(&head, 113);
    InsertFirst(&head, 457);
    InsertFirst(&head, 11);
    InsertFirst(&head, 12);

    SumDigits(head);

    return 0;
}




