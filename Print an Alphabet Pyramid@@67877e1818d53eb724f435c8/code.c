#include <stdio.h>

void printAlphabetTriangle(int n) {
    // Outer loop to control the rows
    for (int row = 1; row <= n; row++) {
        // Inner loop to print characters in each row
        for (int col = 1; col <= row; col++) {
            printf("%c", 'A' + col - 1);  // Print the character by shifting from 'A'
        }
        // Print a newline after each row
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d ", &n);
    printAlphabetTriangle(n);

    return 0;
}
