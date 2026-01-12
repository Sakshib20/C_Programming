///////////////////////////////////////////////////////////
//
//  Function Name : CheckAllPositive
//  Description : Check whether all elements are positive
//  Input  : Integer Pointer(Array Address)
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 12/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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


bool CheckAllPositive(PNODE first)
{
    bool bFlag = false;
    while(first != NULL)
    {
        if((first->data)>0)
        {
            bFlag = true;
        }
        first = first->next;
    }
    return bFlag;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head, 675);
    InsertFirst(&head, 342);
    InsertFirst(&head, 11);
    InsertFirst(&head, 113);
    InsertFirst(&head, 457);
    InsertFirst(&head, 11);
    InsertFirst(&head, 12);

    bRet = CheckAllPositive(head);

    if(bRet == true)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}