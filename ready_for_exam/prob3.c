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
    
    // save the value

    // return new node
}

int size(struct node* head)
{
    // return size of linkedlist 
    
}

int empty(struct node* head)
{
    // if list empty return 1 else return 0
    
}

void insert(struct node* head, struct node* new_node)
{
    // insert new_node to end of linkedlist
    // if there is tail
    

    // if there is no tail
    
}

int delete(struct node* head, int value)
{
    // delete node that have value we want
    // if delete successfully, than return 0
    // else return -1
    
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
        insert(head,i*10);
    }
    print_list(head);

    delete(head,10);
    print_list(head);
}
