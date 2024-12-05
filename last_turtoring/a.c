#include <string.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <ctype.h>

struct Word_Counter
{
    char* item;
    int cnt;
    struct Word_Counter* next;
};

struct Word_Counter* newCounter(char* item)
{
    struct Word_Counter* new_cnt = ____ ;
    new_cnt->item= strdup(item);
    new_cnt->cnt = 1;
    new_cnt->next = NULL;
    return new_cnt;
}

void convert_lower(char* str)
{
    while(*str != '\0')
    {
        *str = tolower(*str);
        str++;
    }
}

void insert_to_list(struct Word_Counter** head,char* item)//ordered linked list
{
    if(*head == NULL)
    {
        *head = ____;
    }
    else
    {
        struct Word_Counter* tmp = *head;
        if(strcmp((*head)->item , item) > 0)
        {
            struct Word_Counter* cup = *head;
            *head = newCounter(item);
            (*head)->next = cup;
            return;
        }
        else if(strcmp((*head)->item , item) == 0)
        {
            (*head)->cnt++;
            return;
        }
        while(tmp->next!=NULL)
        {
            ____
        }
        tmp->next = newCounter(item);
    }
}

void seperate_word_and_insert_to_list(struct Word_Counter** head,char* buf)
{
    char* token = strtok(buf, " .,!\t\n\r");

    while(token != NULL)
    {
        convert_lower(token);
        insert_to_list(head, token);
        token = strtok(NULL, " .,!\t\n\r");
    }
}

void print_list(struct Word_Counter* head)
{
    struct Word_Counter* tmp = head;
    while(tmp!=NULL)
    {
        printf("%s - %d\n", tmp->item, tmp->cnt);
        tmp= tmp->next;
    }
}

int main()
{
    FILE* fp = fopen("sample.txt", "r");

    struct Word_Counter* head = NULL;

    char buf[1024];

    while(fgets(buf,1023,fp) != NULL)
    {
        seperate_word_and_insert_to_list(&head, buf);   
    }
    fclose(fp);

    print_list(head);


    return 0;
}