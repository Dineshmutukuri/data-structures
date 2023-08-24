#include <stdio.h>
int main() {
    int n, i, reg_num;
    int reg_arr[100];
    printf("Enter the number of registers: ");
    scanf("%d", &n);
    printf("Enter the register numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", ®_arr[i]);
    }
    printf("Enter the register number to be searched: ");
    scanf("%d", ®_num);
    for (i = 0; i < n; i++) {
        if (reg_arr[i] == reg_num) {
            printf("The register number %d is found at index %d.", reg_num, i);
            break;
        }
    }
    if (i == n) {
        printf("The register number %d is not found.", reg_num);
    }
    return 0;
}