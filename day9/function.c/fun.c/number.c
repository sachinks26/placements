include <stdio.h>

// 4. Greatest of three numbers
int greatest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

// 5. Reverse a number
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}


// 7. Modular calculator
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else
        return 0; // or handle divide-by-zero as error
}

// 8. Palindrome check
int isPalindrome(int n) {
    return n == reverse(n); // Reuse reverse() from #5
}

// 9. Fahrenheit to Celsius
float toCelsius(float f) {
    return (f - 32) * 5 / 9;
}

// 10. Sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    // Example usage
    printf("Greatest: %d\n", greatest(10, 20, 15));
    printf("Reverse: %d\n", reverse(1234));
    printf("Addition: %d\n", add(5, 3));
    printf("Division: %.2f\n", divide(10, 4));
    printf("Palindrome: %d\n", isPalindrome(121)); // 1 = true
    printf("Celsius: %.2f\n", toCelsius(98.6));
    printf("Sum of digits: %d\n", sumOfDigits(123));

    return 0;
}