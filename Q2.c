#include<stdio.h>
float findAverage(int arr[10][10], int a, int b){
    int sum = 0;
    int total = a * b;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            sum = sum + arr[i][j];
        }
    }
    return (float)sum / total;
}

    int main(){
    int arr[10][10];
    int rows, cols;
    float avg;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of 2D array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    avg =findAverage(arr, rows, cols);

    printf("Average of all elements = %.2f\n", avg);



        return 0;
    }