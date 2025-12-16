#include <stdio.h>

void even(int arr[], int size) {
    printf("Even elements in the array are: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {  
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arraysize = sizeof(array) / sizeof(array[0]);

    printf("Original array elements: ");
    for (int i = 0; i < arraysize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    even(array, arraysize);

    return 0;
}
