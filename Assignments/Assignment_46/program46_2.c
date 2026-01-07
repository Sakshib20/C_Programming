///////////////////////////////////////////////////////////
//
//  Function Name : DisplayLess
//  Description :  Displays elements less than given number
//  Input  : Integer Pointer(Array Address), Integer
//  Output : Void
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

void DisplayLess(PNODE first, int no)
{
    while (first != NULL)
    {
        if((first->data)<no)
        {
            printf("%d\t",first->data);
        }
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

    DisplayLess(head,50);

    return 0;
}




