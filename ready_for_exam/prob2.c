#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void selection_sort(char* arr,int size)
{
    //selection sort code

}

int* get_random_arr(int size)
{
    char* arr = __________;// allocation using malloc

    for(int i=0; i<size; i++)
    {
        arr[i] = rand()%26+'a';
    }
    
    return arr;
}

void write_result_to_file(char* arr)
{
    // sorted arr to a.txt
    
}

int main()
{
    int n;
    scanf("%d",&n);
    char* arr = get_random_arr(n);
    selection_sort(arr,n);
    
    write_result_to_file(arr);
}