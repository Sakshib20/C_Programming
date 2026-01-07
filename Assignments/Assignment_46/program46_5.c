///////////////////////////////////////////////////////////
//
//  Function Name : IncrementAll
//  Description : Increases each element by 1
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

void IncrementAll(PPNODE first)
{
    PNODE temp = NULL;
    temp = *first;
    while (temp != NULL)
    {  
        temp->data = (temp->data)+1;
        temp=temp->next;
    }
    
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 675);
    InsertFirst(&head, 342);
    InsertFirst(&head, 11);
    InsertFirst(&head, 133);
    InsertFirst(&head, 457);
    InsertFirst(&head, 11);
    InsertFirst(&head, 12);

    printf("Before Updation : \n");
    Display(head);

    IncrementAll(&head);

    printf("After Updation : \n");
    Display(head);

    return 0;
}




