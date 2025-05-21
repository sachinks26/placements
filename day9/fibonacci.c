#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series: %d, %d", first, second);

    for (int i = 2; i < n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
    } else {
        fibonacci(terms);
    }

    return 0;
}
