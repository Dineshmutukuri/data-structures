#include <stdio.h>
int main() {
    int n, i, a = 0, b = 1, c = 0;
    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf(" %d ", &n);
    // Print the first two terms of the series
    printf("0 1 ");
    // Find the sum of the Fibonacci series
    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf(" %d ", c);
    }
    return 0;
}