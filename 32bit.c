#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}
int main() {
    int n = 123456789;
    int rev = reverse(n);
    printf("The reverse of %d is %d\n", n, rev);
    return 0;
}