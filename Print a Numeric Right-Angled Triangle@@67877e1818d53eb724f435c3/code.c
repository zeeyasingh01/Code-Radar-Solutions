#include <stdio.h>

int main() {
    int i, j, N;
    scanf("%d", &N);  // Input for number of rows

    for (i = 1; i <= N; i++) {  // Loop for rows
        for (j = 1; j <= i; j++) {  // Loop for columns (increasing numbers)
            printf("%d ", j);
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
