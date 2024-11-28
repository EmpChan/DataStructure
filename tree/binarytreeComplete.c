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

    struct Tree* tree = (struct Tree*)malloc(sizeof(struct Tree));

    //initialize the tree
    tree->head = NULL;
    tree->size = 0;

    //return a tree
    return tree;
}

struct Node* new_node(int value)
{
    // make new node

    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    // initialize the node

    node->value = value;
    node->left = NULL;
    node->right = NULL;

    // return the new node

    return node;
}

int is_empty(struct Tree* tree)
{
    // return the is tree empty ?
    return tree->size == 0;
}

int size_of_tree(struct Tree* tree)
{
    //return the size of tree
    return tree->size;
}

void insert_item(struct Tree* tree, int item)
{
    //Make a node that have a item
    //Insert the item to tree
    if(is_empty(tree))
    {
        tree->head = new_node(item);
        tree->size ++;
    }
    else
    {
        int flag = 0;
        struct Node* node = tree->head;
        while(flag == 0)//current
        {
            if(item < node->value)
            {
                if(node->left == NULL)
                {
                    node->left = new_node(item);
                    flag = 1;
                }
                else
                {
                    node = node->left;
                }
            }
            else
            {
                if(node->right == NULL)
                {
                    node->right = new_node(item);
                    flag=1;
                }
                else
                {
                    node = node->right;
                }
            }
        }
        tree->size++;
    }
}

int search(struct Tree* tree, int item)
{
    //search the item in tree
    //if there is a item on tree than return 1
    //if there is a no item on tree than return 0
    struct Node* node = tree->head;
    int cnt = 0;
    while(node!=NULL)
    {
        cnt++;
        if(node->value > item)
        {
            node = node->left;
        }
        else if(node->value < item)
        {
            node = node->right;
        }
        else
        {
            printf("Search : %d, Count : %d, result : %d\n",item, cnt, 1);
            return 1;
        }
    }
    printf("Search : %d, Count : %d, result : %d\n",item, cnt, 0);
    return 0;
}

int main()
{
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