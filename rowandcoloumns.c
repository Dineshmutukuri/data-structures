#include <stdio.h>
int main() {
    int rows, cols, i, j, sumRows = 0, sumCols = 0;
    // Get the number of rows and columns from the user
    printf("Enter the number of rows and columns: ");
    scanf(" %d %d ", &rows, &cols);
    // Find the sum of the rows and columns of the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sumRows = sumRows + i;
            sumCols = sumCols + j;
        }
    }
    // Print the sum of the rows and columns
    printf("The sum of the rows is %d\n", sumRows);
    printf("The sum of the columns is %d\n", sumCols);
    return 0;
}