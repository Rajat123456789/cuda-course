#include <stdio.h>
// matrix -> arr -> integers
// similar to 01.c but with arrays

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int* ptr1 = arr1;
    int* ptr2 = arr2;
    int* matrix[] = {ptr1, ptr2};

    //print ptr1
    printf("ptr1: %p\n", ptr1);

    for (int i = 0; i < 4; i++) {
        printf("%d ", *ptr1++);
    }

    printf("\n");
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", *matrix[i]++);
        }
        printf("\n");
    }
}