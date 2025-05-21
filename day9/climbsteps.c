#include <stdio.h>

// Function to count ways using recursion
int countWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int steps;
    printf("Enter the number of steps: ");
    scanf("%d", &steps);

    printf("Number of ways to reach the top: %d\n", countWays(steps));

    return 0;
}     
