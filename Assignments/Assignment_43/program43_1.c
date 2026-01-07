///////////////////////////////////////////////////////////
//
//  Function Name : DisplayPerfect
//  Description : Displays all elements which are perfect from singly linear linked list
//  Input  : Integer Pointer(Array Address)
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 06/01/2026
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

void DisplayPerfect(PNODE head)
{
    int iSum = 0, iCnt = 0, iNo = 0;

    while (head != NULL)
    {
        iNo = head->data;
        iSum = 0;

        for(iCnt = 1; iCnt<= iNo/2; iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                iSum = iSum+iCnt;
            }
        }

        if(iNo == iSum)
        {
            printf("%d\t",iNo);
        }
        head = head->next;
    }
    
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

    DisplayPerfect(first);

}



