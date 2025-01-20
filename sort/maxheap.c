#include <stdio.h>
#include <malloc.h>

struct Heap{
    int* item;
    int size;
};

struct Heap* new_heap(){

}

void insert(struct Heap* h, int item){

}

int delete(struct Heap* h){

}

int main(){
    int arr[] = {5, 7, 3, 2, 8, 9, 10};
    int size = 7;
    struct Heap* h = new_heap();
    for(int i=0; i<size; i++){
        insert(h,arr[i]);
    }
    for(int i=0; i<size; i++){
        printf("Deleted Item : %d\n", arr[i]);
    }

    return 0;
}