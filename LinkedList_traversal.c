#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data, totalSize;
    struct Node *next;

} Node;

void display(Node *ptr)
{

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void reverseDisplay(Node *head)
{
    if (head == NULL)
        return;

    reverseDisplay(head->next);
    printf("%d ", head->data);
}

void fun2(struct Node* head)
{
  if(head == NULL)
    return;
  printf("%d  ", head->data);
 
  if(head->next != NULL )
    fun2(head->next->next);
  printf("%d  ", head->data);  
}

int factorial(int n){

    if(n <= 1){
        return 1;
    }

    return n * factorial(n-1);

}

int SumOfTwoFact(int n , int n2){
    return factorial(n) + factorial(n2);
}

int main()
{

    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));

    first->data = 14;
    first->next = second;

    second->data = 11;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    display(first);
    //reverseDisplay(first);
    //fun2(first);
  

    return 0;
}