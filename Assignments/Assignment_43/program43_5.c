///////////////////////////////////////////////////////////
//
//  Function Name : SumDigit
//  Description : Displays addition of digits of element from singly linear linked list
//  Input  : Integer Pointer(Array Address)
//  Output : void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 07/01/2026
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
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        (*Head)=newn;
    }
    else
    {
        newn->next = (*Head);
        (*Head) = newn;
    }
}

void SumDigit(PNODE head)
{
    int iSum = 0, iNo = 0, iDigit = 0;

    while(head != NULL)
    {
        iNo = head->data;
        iSum = 0;

        while(iNo!=0)
        {
            iDigit = iNo%10;
            iSum = iSum+iDigit;
            iNo = iNo/10;
        }
        head=head->next;
        printf("%d\t",iSum);
    } 
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,640);
    InsertFirst(&first,240);
    InsertFirst(&first,230);
    InsertFirst(&first,110);

    SumDigit(first);

}



