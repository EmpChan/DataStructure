#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void bubble_sort(int* arr,int size)
{
    //bubble sort code

}

int* get_random_arr(int size)
{
    int* arr = __________;// allocation using malloc

    for(int i=0; i<size; i++)
    {
        arr[i] = rand()%1000;
    }
    
    return arr;
}

int main()
{
    int n;
    scanf("%d",&n);
    int* arr = get_random_arr(n);
    bubble_sort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}