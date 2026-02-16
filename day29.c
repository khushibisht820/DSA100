#include <stdio.h>

int main() {
    int m, n;
    int matrix[100][100];
    int sum = 0;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Check if matrix size is valid
    if (m <= 0 || n <= 0 || m > 100 || n > 100) {
        printf("Invalid matrix size\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if square matrix
    if (m != n) {
        printf("Primary diagonal is defined only for square matrix.\n");
        return 0;
    }

    // Calculate primary diagonal sum
    for(int i = 0; i < m; i++) {
        sum += matrix[i][i];
    }

    // Output result
    printf("Sum of primary diagonal = %d\n", sum);

    return 0;
}
