#include <stdio.h>

void reverse_alpha_triangle(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    reverse_alpha_triangle(n);
    return 0;
}