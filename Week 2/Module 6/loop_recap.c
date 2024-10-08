#include<stdio.h>

int main()
{
    // Outer Loop
    for(int i = 0; i < 5; i++) {
        // Inner Loop
        for(int j = 0; j < 10; j++) {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}