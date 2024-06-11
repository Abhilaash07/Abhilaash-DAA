#include <stdio.h>
int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    else
        return reverseNumber(num / 10, rev * 10 + num % 10);
}
int main() {
    int number, reversedNumber;
    printf("Enter an integer: ");
    scanf("%d", &number);
    reversedNumber = reverseNumber(number, 0);
    printf("Reverse of the number: %d\n", reversedNumber);  
    return 0;
}
