#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // Asking user for input
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculating the average
    average = (num1 + num2 + num3) / 3;

    // Displaying the result
    printf("The average is: %.2f\n", average);

    return 0;
}
