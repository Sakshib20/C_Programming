///////////////////////////////////////////////////////////
//
//  Function Name : FirstOccur
//  Description : Returns the position of first Occurence of the element
//  Input  : Integer Pointer(Array Address), Integer
//  Output : Integer
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

int FirstOccur(PNODE first, int no)
{
    int iCnt = 0;
    while (first != NULL)
    {
        iCnt++;
        if((first->data)==no)
        {
            return iCnt;
        }
        first = first->next;
    }
    
    return iCnt=0;
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

    iRet = FirstOccur(head,11);

    printf("Position of 1st Occurence is : %d",iRet);

    return 0;
}




