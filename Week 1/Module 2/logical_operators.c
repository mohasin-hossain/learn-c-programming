#include <stdio.h>

int main() {
    int a = 8, b = 12, c = 5;

    // Using Logical AND (&&)
    // This will check if both conditions are true
    if (a > 5 && b < 15) {
        printf("Logical AND: Both conditions are true (a > 5 && b < 15)\n");
    } else {
        printf("Logical AND: One or both conditions are false (a > 5 && b < 15)\n");
    }

    // Using Logical OR (||)
    // This will check if at least one condition is true
    if (a > 10 || c < 10) {
        printf("Logical OR: At least one condition is true (a > 10 || c < 10)\n");
    } else {
        printf("Logical OR: Both conditions are false (a > 10 || c < 10)\n");
    }

    // Using Logical NOT (!)
    // This will negate the condition
    if (!(b == 12)) {
        printf("Logical NOT: b is NOT equal to 12\n");
    } else {
        printf("Logical NOT: b is equal to 12\n");
    }

    // Combining AND, OR, and NOT together
    if ((a < 10 && b > 10) || !(c == 5)) {
        printf("Combined: Complex condition is true\n");
    } else {
        printf("Combined: Complex condition is false\n");
    }

    return 0;
}
