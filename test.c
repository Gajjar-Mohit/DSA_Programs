#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Node *head = NULL;

struct Node
{
    int data;
    struct Node *link;
};

int main()
{
    struct Node * head;
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        // addEnd(head);
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 0:
        break;
    default:
        break;
    }
    return 0;
}
struct Node *create()
{
    struct Node *new;
    int n;
    new = (struct Node *)malloc(sizeof(struct Node *));
    scanf("%d", &n);
    new->data = n;
    new->link = NULL;
    return new;
}
void addEnd(struct Node **head, int data)
{
    struct Node *newNode = create();
    newNode->data = data;
    newNode->link = NULL;

    if (*head == NULL)
        *head = newNode;
    else
    {
        struct Node *trav = *head;
        while (trav->link != NULL)
        {
            trav = trav->link;
        }
        trav->link = newNode;
    }
}

struct Node *deleteFirst()
{
    if (head == NULL)
        return NULL;
    struct Node *temp = head;
    head = head->link;

    free(temp);
    return head;
}

struct Node *removeLastNode(struct Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->link == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        struct Node *temp = head;
        struct Node *temp1;
        while (temp->link != NULL)
        {
            temp1 = temp;
            temp = temp->link;
        }
        temp1->link = NULL;
        free(temp);
    }
}
void display()
{
    struct Node *trav = head;
    if (trav->link != NULL)
    {
        printf("%d", trav->data);
        trav = trav->link;
    }
}