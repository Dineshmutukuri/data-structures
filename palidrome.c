#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf(" %d ", &n);
    temp = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (temp == rev) {
        printf("The number is a palindrome.");
    } else {
        printf("The number is not a palindrome.");
    }
    return 0;
}