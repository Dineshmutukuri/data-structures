#include <stdio.h>
int main() {
    int n;
    // Get the number from the user
    printf("Enter a number: ");
    scanf(" %d ", &n);
    // Check if the number is even
    if (n % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}