///////////////////////////////////////////////////////////
//
//  Function Name : MultiplyByTwo
//  Description : Multiply each element by 2
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


void MultiplyByTwo(PPNODE first)
{
    PNODE temp = *first;

    while(temp != NULL)
    {
        temp->data = (temp->data)*2;
        temp = temp->next;
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

    printf("Before Replace LL is : \n");
    Display(head);

    printf("After Replace LL is : \n");
    MultiplyByTwo(&head);
    Display(head);

    return 0;
}




