#include <stdio.h>

int main() {
    int value = 42;
    int* ptr1 = &value;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;
    
    printf("%p\n", ptr1);  // Output: 0x16d3aeeac
    printf("%p\n", ptr2);  // Output: 0x16d3aeea0
    printf("%p\n", ptr3);  // Output: 0x16d3aee98

    printf("Value: %p\n", ptr1);  // 0x16d3aeeac
    printf("Value: %p\n", *ptr2);  // 0x16d3aeeac
    
    printf("Value: %d\n", ***ptr3);  // Output: 42
}