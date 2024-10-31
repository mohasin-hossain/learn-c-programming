// A. ADD

#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int *a = &x, *b = &y;
    int result = *a + *b;

    printf("%d", result);

    return 0;
}

// E. Swap

#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int *a = &x, *b = &y;
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("%d %d", x, y);

    return 0;
}

// K. Max and Min

#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int *x = &a, *y = &b, *z = &c;

    // Minimum Num
    if(*x <= *y && *x <= *z) {
        printf("%d ", *x);
    } else if(*y <= *x && *y <= *z) {
        printf("%d ", *y);
    } else {
        printf("%d ", *z);
    }

    // Maximum Num
    if(*x >= *y && *x >= *z) {
        printf("%d", *x);
    } else if(*y >= *x && *y >= *z) {
        printf("%d", *y);
    } else {
        printf("%d", *z);
    }

    return 0;
}

// A. Summation

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = 0;
    int *A = arr;
    for(int i = 0; i < n; i++) {
        sum += *A;
        A++;
    }

    if (sum < 0) {
        sum *= -1;
    }

    printf("%lld\n", sum);

    free(arr);

    return 0;
}

// Replacement

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *A = arr;
    for(int i = 0; i < n; i++) {
        
        if (arr[i] < 0) {
            *A = 2;
        } else if (arr[i] > 0) {
            *A = 1;
        }

        printf("%d ", *A);

        A++;
    } 

    free(arr);

    return 0;
}