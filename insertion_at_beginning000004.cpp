#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void trivarsal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element are :- " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct node *InsertAtfirst(struct node *head , int data){

    struct node *ptr=(struct node *)malloc(sizeof(struct node));

    ptr->next=head;
    ptr->data=data;
    return ptr;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 34;
    head->next = second;

    second->data = 235;
    second->next = third;

    third->data = 354;
    third->next = NULL;
    trivarsal(head);
    head=InsertAtfirst(head,22);
    trivarsal(head);
    return 0;
}
