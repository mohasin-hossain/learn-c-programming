#include<stdio.h>

int main()
{
    int N;
    printf("Enter your Number: ");
    scanf("%d", &N);

    if(N % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    if(N > 0) {
        printf("Positive Number\n");
    } else if (N < 0) {
        printf("Negative Number\n");
    } else {
        printf("Please use a valid number.");
    }
}