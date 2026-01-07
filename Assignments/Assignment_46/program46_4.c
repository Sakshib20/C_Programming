///////////////////////////////////////////////////////////
//
//  Function Name : ReplaceNegative
//  Description : Negative values becomes zero
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
    while (first!=NULL)
    {
        printf("|%d|->",first->data);
        first=first->next;
    }
    printf("NULL\n");
}

void ReplaceNegative(PPNODE first)
{
    PNODE temp = NULL;
    temp = *first;
    while (temp != NULL)
    {  
        if(((temp)->data)<0)
        {
            (temp)->data = 0;
        }
        temp=temp->next;
    }
    
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 675);
    InsertFirst(&head, -342);
    InsertFirst(&head, 11);
    InsertFirst(&head, -133);
    InsertFirst(&head, 457);
    InsertFirst(&head, 11);
    InsertFirst(&head, 12);

    printf("Before Updation : \n");
    Display(head);

    ReplaceNegative(&head);
    printf("After Updation : \n");

    Display(head);

    return 0;
}




