#include <stdio.h>
int main() {
    int n, i, j, count = 0;
    int arr[100];
    printf("Enter the number of elements in the array: ");
    scanf(" %d ", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf(" %d ", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf(" %d ", arr[i]);
                count++;
            }
        }
    }
    if (count == 0) {
        printf("No duplicate elements found");
    }
    return 0;
}