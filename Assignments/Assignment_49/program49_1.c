///////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description : Return difference between maximum number and minimum number
//  Input  : Integer Pointer(Array Address)
//  Output : Integer
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


int Difference(PNODE first)
{
    int iMax = 0, iMin = 0, iDiff = 0;
    iMax = first->data;
    iMin = first->data;

    while(first != NULL)
    {
        if((first->data)>iMax)
        {
            iMax = first->data;
        }
        if((first->data)<iMin)
        {
            iMin = first->data;
        }
        first = first->next;
    }
    iDiff = iMax-iMin;
    return iDiff;
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

    iRet=Difference(head);
    printf("Difference is : %d",iRet);

    return 0;
}