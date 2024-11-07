#include <stdio.h>

void printDigits(int n) 
{
    if (n == 0) {
        return;
    }

    int digit = n % 10;
    printDigits(n / 10);
    printf("%d ", digit);
}

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        if(n == 0) printf("0");

        printDigits(n);

        printf("\n");
    }

    return 0;
}