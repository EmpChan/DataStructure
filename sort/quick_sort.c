#include <stdio.h>
#include <stdlib.h>

void partition(int* arr){

}

int* get_rand_arr(int size){
    int* arr = (int*) malloc(sizeof(int)*size);
    for(int i=0; i<size; i++){
        arr[i] = rand()%100;
    }
    return arr;
}

int main(){
    int* arr = get_rand_arr(10);

    printf("original array : ");
    for(int i=0; i<10; i++){
        printf("%d, ",arr[i]);
    }
    printf("\n");
    partition(arr,0,10);
    printf("sorted array : ");
    for(int i=0; i<10; i++){
        printf("%d, ",arr[i]);
    }
    return 0;
}