#include <stdio.h>

int main() {
    int x = 5;  // Assignment
    printf("Initial value of x: %d\\n", x);  // Output: 5

    // Using assignment operators
    x += 3;  // Equivalent to x = x + 3;
    printf("After x += 3: %d\\n", x);  // Output: 8

    x -= 2;  // Equivalent to x = x - 2;
    printf("After x -= 2: %d\\n", x);  // Output: 6

    // Using increment operators
    printf("Prefix increment (++x): %d\\n", ++x);  // Output: 7 (increases x before printing)
    printf("Postfix increment (x++): %d\\n", x++);  // Output: 7 (prints x, then increases it)
    printf("Value of x after postfix increment: %d\\n", x);  // Output: 8

    // Using decrement operators
    printf("Prefix decrement (--x): %d\\n", --x);  // Output: 7 (decreases x before printing)
    printf("Postfix decrement (x--): %d\\n", x--);  // Output: 7 (prints x, then decreases it)
    printf("Value of x after postfix decrement: %d\\n", x);  // Output: 6

    return 0;  // End of program
}