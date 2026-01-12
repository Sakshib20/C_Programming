///////////////////////////////////////////////////////////
//
//  Function Name : CountDivByFive
//  Description : Returns count of  elements divisible by 5
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

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->",first->data);
        first=first->next;
    }
    printf("NULL\n");

}

int CountTwoDigit(PNODE first)
{
    int iCount = 0;

    while (first != NULL)
    {
        int iDigit = 0, iNo = 0, iCnt = 0;
        iNo = first->data;

        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo/10;
        }
        if(iCnt == 2)
        {
            iCount++;
        }
        first = first->next;
    }
    

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 675);
    InsertFirst(&head, 342);
    InsertFirst(&head, 11);
    InsertFirst(&head, 113);
    InsertFirst(&head, 457);
    InsertFirst(&head, 11);
    InsertFirst(&head, 12);

    iRet=CountTwoDigit(head);
    printf("%d",iRet);

    return 0;
}