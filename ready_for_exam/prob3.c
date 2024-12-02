#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int val;
    struct Node* next;
};

struct node* new_node(int value)
{
    // make new node
    struct node* nnode = (struct node*)malloc(sizeof(struct node));
    // save the value
    nnode->val = value;

    // return new node
    return nnode; 
}

int size(struct node* head)
{
    struct node* tmp = head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
    // return size of linkedlist 
}

int empty(struct node* head)
{
    if(head==NULL)return 1;
    else return 0;
    // if list empty return 1 else return 0
}

void insert(struct node** head, struct node* new_node)
{
    // insert new_node to end of linkedlist
    if(head == NULL)
    {
        *head = new_node;
    }
    else
    {
        struct node* tmp = *head;
        while(tmp->next!=NULL)
        {
            tmp = tmp->next;
        } 
        tmp->next = new_node;
    }
}

int delete(struct node** head, int value)
{
    // delete node that have value we want
    // if delete successfully, than return 0
    // else return -1
    if(empty(head))return -1;
    if((*head)->val == value)
    {
        *head = (*head)->next;
        return 0;
    }

}

void print_list (struct node* head)
{
    // print all items
}

int main()
{
    struct node* head = NULL;
    int i, n = 5;
    for(i=0; i<n; i++)
    {
        insert(&head,new_node(i*10));
    }
    print_list(head);

    delete(&head,10);
    print_list(head);
}
