#include <stdio.h>
#include <malloc.h>

struct Node 
{
    int value;
    struct Node* left;
    struct Node* right;
};
// this tree is binary search tree
struct Tree
{
    struct Node* head;
    int size;
};

struct Tree* new_tree()
{
    // make new tree

    //initialize the tree

    // return the tree
}

struct Node* new_node(int value)
{
    // make new node

    // initialize the node

    // return the new node

}

int is_empty(struct Tree* tree)
{
    // return the is tree empty ?

}

int size_of_tree(struct Tree* tree)
{
    //return the size of tree

}

void insert_item(struct Tree* tree, int item)
{
    //Make a node that have a item
    //Insert the item to tree
   
}

int search(struct Tree* tree, int item)
{
    //search the item in tree
    //if there is a item on tree than return 1
    //if there is a no item on tree than return 0
    //when return item, than print this
    //printf("Search item : %d, Search count : %d, Result : %d",item, count, result);
    //result can be only 1 or 0
}

int main()
{
    //test code
    struct Tree* tree = new_tree();

    for(int i=50; i<=100; i+=10)
    {
        insert_item(tree,i);
    }
    for(int i=55; i<=100; i+=10)
    {
        insert_item(tree,i);
    }

    for(int i=50; i<=60; i++)
    {
        search(tree,i);
    }
    return 0;
}