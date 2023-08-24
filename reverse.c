#include <stdio.h>
int main() {
    int n, i, location;
    int arr[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the location of the element to be searched: ");
    scanf("%d", &location);
    for (i = 0; i < n; i++) {
        if (arr[i] == location) {
            printf("The element is found at location %d", i);
            break;
        }
    }
    if (i == n) {
        printf("The element is not found in the array");
    }
    return 0;
}