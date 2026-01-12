///////////////////////////////////////////////////////////
//
//  Function Name : DisplayPrime
//  Description : Displays the prime number from SLLL
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


void DisplayPrime(PNODE first)
{
    int iCount = 0, iCnt =0;

   while(first != NULL)
   {
        iCount=0;
        for(iCnt = 2;iCnt<=(first->data)/2;iCnt++)
        {
            if((first->data)%iCnt == 0)
            {
                iCount++;
            }  
        }
        if(iCount == 0)
        {
            printf("%d\n",first->data);
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

    DisplayPrime(head);

    return 0;
}




