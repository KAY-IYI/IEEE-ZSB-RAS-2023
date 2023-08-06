/*Write a C program that runs
continuously and adds a node to a
linked list if the user enters “+”, deletes
one if he enters “-” and prints the linked
list if he enters “p” then make it stop if “x”
is entered.
Hint: Handle empty list when printing
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;

}Node;

void Print_List(Node* head)
{
    if (head != NULL)
    {
        printf("The list is \t");
        while(head!=NULL)
        {
            printf("%d",head->data);
            head = head->next;
        }
    }
}

void Delete_Node(Node** head)
{
    if (*head != NULL)
    {
        Node* ptr1 = *head;
        *head = (*head)->next;
        free(ptr1);
    }

}

void Add_Node(Node**head,int value)
{
    Node* ptr2 = (Node*)malloc(sizeof(Node));
    ptr2->data =value;
    ptr2->next =*head;
    *head =ptr2;

}

int main()
{
    Node* head = NULL;
   int data,X=1;
   char input;
   while(X){
       printf("\nEnter (+) to add node or (-) to delete node or 'P' to print or 'X' to End\n\t");
       scanf("%c", &input);
       getchar();
       switch(input)
       {
           case '+':
               printf("Enter value\t");
               scanf("%d",&data);
               getchar();
               Add_Node(&head,data);
               break;
           case '-':
               Delete_Node(&head);
               break;
           case 'P':
               Print_List(head);
               break;
           case 'p':
               Print_List(head);
               break;
           case 'X':
               return 0;
           case 'x':
               return 0;
           default :
               printf("Error in input\t");
               break;
       }
   }
    return 0;
}
