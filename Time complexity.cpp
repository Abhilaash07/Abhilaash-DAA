#include <stdio.h>
void constantTime(int n) {
    printf("O(1) Time Complexity Example:\n");
    printf("Only one operation regardless of input size: %d\n", n);
}
void linearTime(int n) {
    printf("\nO(n) Time Complexity Example:\n");
    printf("Performing %d operations\n", n);
    for (int i = 0; i < n; i++) {
        printf("Operation %d\n", i + 1);
    }
}
void quadraticTime(int n) {
    printf("\nO(n^2) Time Complexity Example:\n");
    printf("Performing %d operations\n", n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Operation %d\n", (i * n) + j + 1);
        }
    }
}
int main() {
    int inputSize = 5;
    constantTime(inputSize);
    linearTime(inputSize);
    quadraticTime(inputSize);
    return 0;
}
