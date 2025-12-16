#include <stdio.h>


void odd(int arr[], int size) {
    printf("Odd elements in the array are: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
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

    odd(array, arraysize);

    return 0;
}
