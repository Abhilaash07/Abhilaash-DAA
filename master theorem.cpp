#include <stdio.h>
int masterTheorem(int a, int b, int k) {
    if (k == 0) {
        return 1;
    } else {
        return a * masterTheorem(a, b, k - 1) + b;
    }
}
int main() {
    int a = 2, b = 3, k = 3;
    int result = masterTheorem(a, b, k);
    printf("Result using Master Theorem: %d\n", result);
    return 0;
}
