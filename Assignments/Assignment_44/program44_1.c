///////////////////////////////////////////////////////////
//
//  Function Name : Search
//  Description : Checks whether a number is present in singly linear linked list
//  Input  : Integer Pointer(Array Address)
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 07/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
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

bool Search(PNODE head, int No)
{
   
    while(head != NULL)
    {
        if (head->data == No)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

int main()
{
    PNODE first = NULL;
    bool bRet = false;

    InsertFirst(&first,640);
    InsertFirst(&first,240);
    InsertFirst(&first,230);
    InsertFirst(&first,110);

    bRet = Search(first, 11);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    return 0;

}



