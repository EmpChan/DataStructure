#include <stdio.h>

struct Node
{
    char* item;
    struct Node* next;
    struct Node* before;
};

struct Node* read_and_create_linkedlist()
{
    // read sample.txt and make to linkedlist



    // return the head of linkedlist

}

void write_from_linkedlist(char* item)
{
    // write res.txt

}

void print_to_file(struct Node* head)
{
    // print list to res.txt using write_from_linkedlist

}

int main()
{
    struct Node* head = read_and_create_linkedlist();

    print_to_file(head);
    return 0;
}