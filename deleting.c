#include <stdio.h>

void deleteElement(int arr[], int *size, int index) {
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements left
    }
    (*size)--; // Reduce array size
}

int main() {
    int arr[] = {10,20,30,40,50}
    int size = 5;

    deleteElement(arr, &size, 2); // Delete element at index 2

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Output: 10 20 40 50
    }
    return 0;
}