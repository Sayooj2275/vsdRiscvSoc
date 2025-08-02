#include <stdio.h>

int main() {
    int n = 10; // Number of Fibonacci numbers to print
    int fib[n];

    // Initializing the first two Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    // Generating the Fibonacci sequence
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Printing the Fibonacci sequence
    printf("Fibonacci sequence up to 10 terms:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}
