#include <stdio.h>

// Function to print the alphabetical triangle
void alphatri(int n) {
    // Outer loop to control the rows
    for (int i = 1; i <= n; i++) {
        // Inner loop to print characters in each row
        for (int j = 1; j <= i; j++) {
            // Printing characters from 'A' based on the current position
            printf("%c", 'A' + j - 1);
        }
        // Print a new line after each row
        printf("\n");
    }
}

int main() {
    int n;

    // Take the input from the user
    scanf("%d", &n);

    // Call the function to print the alphabetical triangle
    alphatri(n);

    return 0;
}
