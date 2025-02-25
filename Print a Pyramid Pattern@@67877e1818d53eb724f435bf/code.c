#include <stdio.h>

int main() {
    int i, j, N, k;

    // Read the number of rows
    scanf("%d", &N);

    // Loop to print the pyramid pattern
    for (i = 1; i <= N; i++) {  // Start from 1
        // Print leading spaces
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
