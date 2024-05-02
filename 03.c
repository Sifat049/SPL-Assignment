#include <stdio.h>

void printArray(int *arr, int size) {
    int *ptr = arr; 
    while (size--) {
        printf("%d ", *ptr); 
        ptr++; 
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Array elements: ");
    printArray(arr, size);

    return 0;
}
